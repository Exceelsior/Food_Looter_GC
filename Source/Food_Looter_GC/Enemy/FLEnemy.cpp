// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "FLEnemyController.h"
#include "FLTargetPoint.h"
#include "../Core/FLGameState.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../Props/FLFood.h"
#include "../Core/Food_Looter_GCGameModeBase.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
AFLEnemy::AFLEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DetectionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Player Detection Capsule"));
	DetectionCapsule->SetupAttachment(RootComponent);
	DetectionCapsule->OnComponentBeginOverlap.AddDynamic(this, &AFLEnemy::ObjectInRange);
}

// Called when the game starts or when spawned
void AFLEnemy::BeginPlay()
{
	Super::BeginPlay();

	ArrayTarget.Empty();	
	GM = Cast<AFLGameState>(UGameplayStatics::GetGameMode(GetWorld())->GetGameState<AFLGameState>());
	EnemyController = Cast<AFLEnemyController>(GetController());
}

// Called every frame
void AFLEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(TimerPickUpFood > 0)
		TimerPickUpFood -= DeltaTime;
	
	if(ArrayTarget.Num() == 0 && GM)
		ArrayTarget = GM->GetFoodPositions();

	if(TrackTimer > 0 && IsTrackingPlayer)
	{
		TrackTimer -= DeltaTime;		
	}
}

// Called to bind functionality to input
void AFLEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

TArray<AActor*> AFLEnemy::GetAvailableTargetPoints()
{ 
	return ArrayTarget; 
}

/*void AFLEnemy::SetChaseSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = ChaseSpeed;
}

void AFLEnemy::ResetChaseSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}*/

void AFLEnemy::ObjectInRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFLTargetPoint* TargetPoint = Cast<AFLTargetPoint>(OtherActor);
	
	AFLFood* Food = Cast<AFLFood>(OtherActor);
	
	if(TargetPoint != nullptr && HasFood && !TargetPoint->GetIsFull())
	{
		DropFoodOnPoint(TargetPoint);
	}
	else if(Food != nullptr && !HasFood && Food == FoodEquiped && !AlreadyDroppedFood)
	{		
		PickUpFood(Food);
	}
}

void AFLEnemy::SetFood(AFLFood* Food)
{
	FoodEquiped = Food;
}


void AFLEnemy::ResetTrackTimer()
{
	TrackTimer = 3;	
	IsTrackingPlayer = true;
}

void AFLEnemy::DropFoodOnPoint(AFLTargetPoint* TargetPoint)
{
	AlreadyDroppedFood = true;
	HasFood = false;	

	//FoodEquiped->GetMesh()->AddForce(-(this->GetActorForwardVector())*100*FoodEquiped->GetMesh()->GetMass());
	FoodEquiped->SetActorEnableCollision(true);
	FoodEquiped->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	FoodEquiped->SetActorLocation(TargetPoint->GetActorLocation());
	FoodEquiped->SetActorRotation(TargetPoint->GetActorRotation());
	FoodEquiped->SetMyFoodPoint(TargetPoint);

	GetCharacterMovement()->MaxWalkSpeed *= FoodEquiped->GetDivision();
	
	FoodEquiped = nullptr;
	TargetPoint->SetIsFull(true);

	if(EnemyController)
	{
		EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 0);
		EnemyController->GetBlackboardComp()->SetValueAsObject("LocationToGo", Cast<AFood_Looter_GCGameModeBase>(GetWorld()->GetAuthGameMode())->EndPoint);
		
	}
}


void AFLEnemy::PickUpFood(AFLFood* Food)
{
	if(TimerPickUpFood <= 0)
	{
		HasFood = true;
		HasLostFood = false;
		Food->GetMesh()->SetSimulatePhysics(false);
		Food->SetActorEnableCollision(false);
		Food->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
		if(EnemyController)
		{
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 1);
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasLostFood", 0);
		}

		GetCharacterMovement()->MaxWalkSpeed /= FoodEquiped->GetDivision();
	}
}