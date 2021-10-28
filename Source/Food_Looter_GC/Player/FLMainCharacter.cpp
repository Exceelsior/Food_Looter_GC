// Fill out your copyright notice in the Description page of Project Settings.


#include "FLMainCharacter.h"

#include "../Props/FLChair.h"
#include "../Enemy/FLEnemy.h"
#include "../Props/FLFood.h"
#include "../Core/FLGameState.h"
#include "../Props/FLSafeZone.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Food_Looter_GC/Enemy/FLTargetPoint.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFLMainCharacter::AFLMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	
	ArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	ArmComponent->SetupAttachment(RootComponent);
	ArmComponent->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 30.0f), FRotator(-50.0f, 0.0f, 0.0f));
	ArmComponent->bEnableCameraLag = true;
	ArmComponent->CameraLagSpeed = 6.0f;
	ArmComponent->bDrawDebugLagMarkers = false;
	ArmComponent->TargetArmLength = MaxCameraZoomDistance;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraMain"));
	CameraComponent->SetupAttachment(ArmComponent, USpringArmComponent::SocketName);

	FaceCameraComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Face Capture Component"));
	FaceCameraComponent->SetupAttachment(GetMesh());
	
	ChairCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Chair Camera Component"));
	ChairCameraComponent->SetupAttachment(GetCapsuleComponent());
	ChairCameraComponent->Activate();
	
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AFLMainCharacter::OnTouched);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AFLMainCharacter::OnEndTouched);
}

// Called when the game starts or when spawned
void AFLMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentWorld = GetWorld();

	AnimInstance = GetMesh()->GetAnimInstance();
	//MoveSpeedProp = FindField<UFloatProperty>(AnimInstance->GetClass(), FName("MoveSpeed"));

	CameraZoomValue = MaxCameraZoomDistance;
	GameState = Cast<AFLGameState>(GetWorld()->GetAuthGameMode()->GetGameState<AFLGameState>());
}

// Called every frame
void AFLMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(GetCapsuleComponent()->IsOverlappingActor(PlayerSafeZone))
	{
		GameState->UpdatePlayerSafeStateInEnemiesBlackBoards();
	}
}


void AFLMainCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AFLMainCharacter::MoveRight(float Value)
{
	if((Controller != nullptr) && Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Direction, Value);
	}
}

void AFLMainCharacter::Turn(float Rate)
{
	AddControllerYawInput(Rate * CameraYawSpeed * CurrentWorld->GetDeltaSeconds());
}

void AFLMainCharacter::LookUp(float Rate)
{
	AddControllerPitchInput(Rate * CameraPitchSpeed * CurrentWorld->GetDeltaSeconds());
}

void AFLMainCharacter::CameraZoomIn()
{
	CameraZoomValue -= 20;

	if (CameraZoomValue <= 80)
	{
		CameraZoomValue = 80.0;
	}
	
	ArmComponent->TargetArmLength = CameraZoomValue;
}

void AFLMainCharacter::CameraZoomOut()
{
	CameraZoomValue += 20;

	ArmComponent->TargetArmLength = CameraZoomValue;
}

void AFLMainCharacter::Interact()
{
	if(!HasFood)
	{
		GetCapsuleComponent()->GetOverlappingActors(Food, AFLFood::StaticClass());
		
		if(Food.Num() != 0 && !IsSat)
		{
			HasFood = true;
			FoodEquiped = Cast<AFLFood>(Food[0]); //If overlap with more than one food, take the 1rst one

			//Set position of FoodEquiped
			FoodEquiped->GetMesh()->SetSimulatePhysics(false);
			FoodEquiped->SetActorEnableCollision(false);
			FoodEquiped->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");

			if(FoodEquiped->GetMyFoodPoint() != nullptr)
				Cast<AFLTargetPoint>(FoodEquiped->GetMyFoodPoint())->SetIsFull(false);

			GetCharacterMovement()->MaxWalkSpeed /= FoodEquiped->GetDivision();
		}
		else if(AvailableChair)
		{
			if(!IsSat)
			{
				AvailableChair->Sit(this, true);
				CameraComponent->Deactivate();
				ChairCameraComponent->Activate();
			}
			else
			{
				AvailableChair->Sit(this, false);
				CameraComponent->Activate();
				ChairCameraComponent->Deactivate();
			}
			
		}
	}
	else
	{
		//Let the food drop, cause not hold anymore
		HasFood = false;
		FoodEquiped->GetMesh()->SetSimulatePhysics(true);
		FoodEquiped->SetActorEnableCollision(true);
		FoodEquiped->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		GetCharacterMovement()->MaxWalkSpeed *= FoodEquiped->GetDivision();
	}	
}

void AFLMainCharacter::OnTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFLEnemy* Enemy = Cast<AFLEnemy>(OtherActor);

	AFLChair* Chair = Cast<AFLChair>(OtherActor);
	
	
	if(Enemy)
	{
		GameState->GameLost();
	}
	else if(Chair)
	{
		AvailableChair = Chair;
	}
	if (PlayerSafeZone == nullptr)
	{
		AFLSafeZone* SafeZone = Cast<AFLSafeZone>(OtherActor);
		PlayerSafeZone = SafeZone;
	}
	
}

void AFLMainCharacter::OnEndTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AFLChair* Chair = Cast<AFLChair>(OtherActor);

	if(Chair == AvailableChair)
	{
		AvailableChair = nullptr;
	}
}


void AFLMainCharacter::PauseGame()
{
	GameState->PauseGame();
}

// Called to bind functionality to input
void AFLMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Vertical", this, &AFLMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Horizontal", this, &AFLMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Yaw", this, &AFLMainCharacter::Turn);
	PlayerInputComponent->BindAxis("Pitch", this, &AFLMainCharacter::LookUp);

	PlayerInputComponent->BindAction("Zoom In", IE_Pressed, this, &AFLMainCharacter::CameraZoomIn);
	PlayerInputComponent->BindAction("Zoom Out", IE_Pressed, this, &AFLMainCharacter::CameraZoomOut);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AFLMainCharacter::Interact);

	PlayerInputComponent->BindAction("PauseGame", IE_Pressed, this, &AFLMainCharacter::PauseGame).bExecuteWhenPaused = true;

	
}
