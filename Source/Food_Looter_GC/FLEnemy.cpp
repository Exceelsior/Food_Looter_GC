// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "FLEnemyController.h"
#include "FLGameManager.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FLFood.h"
#include "Food_Looter_GCGameModeBase.h"
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
	GM = Cast<AFLGameManager>(UGameplayStatics::GetGameMode(GetWorld())->GetGameState<AFLGameManager>());
	EnemyController = Cast<AFLEnemyController>(GetController());
}

// Called every frame
void AFLEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(ArrayTarget.Num() == 0)
		ArrayTarget = GM->GetFoodPositions();

	if(TrackTimer > 0 && IsTrackingPlayer)
	{
		TrackTimer -= DeltaTime;		
		EnemyController->GetBlackboardComp()->SetValueAsFloat("TrackTimer", TrackTimer);
	}
	else if (TrackTimer <= 0 && IsTrackingPlayer)
	{
		EnemyController->GetBlackboardComp()->SetValueAsFloat("TrackTimer", TrackTimer);
		EnemyController->GetBlackboardComp()->SetValueAsInt("HasSeenPlayer", 0);
		IsTrackingPlayer = false;
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

void AFLEnemy::SetChaseSpeed()
{

	GetCharacterMovement()->MaxWalkSpeed = ChaseSpeed;
}

void AFLEnemy::ResetChaseSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AFLEnemy::ObjectInRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFLTargetPoint* TargetPoint = Cast<AFLTargetPoint>(OtherActor);
	
	AFLFood* Food = Cast<AFLFood>(OtherActor);
	
	if(TargetPoint != nullptr && HasFood && !TargetPoint->GetIsFull())
	{
		DropFoodOnPoint(TargetPoint);
	}
	else if(Food != nullptr && !HasFood && Food == FoodEquiped)
	{
		PickUpFood(Food);
	}
		
}

void AFLEnemy::SetFood(AFLFood* Food)
{
	FoodEquiped = Food;
}

void AFLEnemy::UpdateHasFoodInBlackBoard()
{
	if(HasFood)
		EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 1);
	else
		EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 0);
}

void AFLEnemy::ResetTrackTimer()
{
	TrackTimer = 3;
	IsTrackingPlayer = true;
}

void AFLEnemy::DropFoodOnPoint(AFLTargetPoint* TargetPoint)
{
	HasFood = false;
	FoodEquiped->SetActorEnableCollision(true);
	FoodEquiped->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	FoodEquiped->SetActorLocation(TargetPoint->GetActorLocation());
	FoodEquiped = nullptr;
	TargetPoint->SetIsFull(true);
	//TO DO : inform the gamemode that the foodpoint is full
	//The gamemode has to inform the AI's Behavior Tree !
	
	EnemyController->GetBlackboardComp()->SetValueAsObject("LocationToGo", Cast<AFood_Looter_GCGameModeBase>(GetWorld()->GetAuthGameMode())->EndPoint);
	UpdateHasFoodInBlackBoard();
}

void AFLEnemy::PickUpFood(AFLFood* Food)
{
	HasFood = true;

	Food->GetMesh()->SetSimulatePhysics(false);
	Food->SetActorEnableCollision(false);
	Food->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
	FoodEquiped = Food;
	UpdateHasFoodInBlackBoard();
}