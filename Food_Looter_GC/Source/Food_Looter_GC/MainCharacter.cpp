// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
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
	
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentWorld = GetWorld();

	AnimInstance = GetMesh()->GetAnimInstance();
	//MoveSpeedProp = FindField<UFloatProperty>(AnimInstance->GetClass(), FName("MoveSpeed"));

	CameraZoomValue = MaxCameraZoomDistance;

}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AMainCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
		
		//MoveSpeedProp->SetPropertyValue_InContainer(AnimInstance, 1);
		
	}
}

void AMainCharacter::MoveRight(float Value)
{
	if((Controller != nullptr) && Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Direction, Value);
		//MoveSpeedProp->SetPropertyValue_InContainer(AnimInstance, 1);
	}
}

void AMainCharacter::Turn(float Rate)
{
	AddControllerYawInput(Rate * CameraYawSpeed * CurrentWorld->GetDeltaSeconds());
}

void AMainCharacter::LookUp(float Rate)
{
	AddControllerYawInput(Rate * CameraPitchSpeed * CurrentWorld->GetDeltaSeconds());
}

void AMainCharacter::CameraZoomIn()
{
	CameraZoomValue -= 20;

	if (CameraZoomValue <= 80)
	{
		CameraZoomValue = 80.0;
	}
	
	ArmComponent->TargetArmLength = CameraZoomValue;
}

void AMainCharacter::CameraZoomOut()
{
	CameraZoomValue += 20;

	if (CameraZoomValue <= MaxCameraZoomDistance)
	{
		CameraZoomValue = MaxCameraZoomDistance;
	}

	ArmComponent->TargetArmLength = CameraZoomValue;
}


// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Vertical", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Horizontal", this, &AMainCharacter::MoveRight);
	
	PlayerInputComponent->BindAxis("Yaw", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Pitch", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Zoom In", IE_Pressed, this, &AMainCharacter::CameraZoomIn);
	PlayerInputComponent->BindAction("Zoom Out", IE_Pressed, this, &AMainCharacter::CameraZoomOut);
}

