// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemy.h"

#include "FLGameManager.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FLFood.h"

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

}

// Called every frame
void AFLEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(ArrayTarget.Num() == 0)
		ArrayTarget = GM->GetFoodPositions();
	
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

void AFLEnemy::DropFoodOnPoint(AFLTargetPoint* TargetPoint)
{
	HasFood = false;
	FoodEquiped->GetMesh()->SetSimulatePhysics(true);
	FoodEquiped->SetActorEnableCollision(true);
	FoodEquiped->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
	FoodEquiped = nullptr;
	FoodEquiped->SetActorLocation(TargetPoint->GetActorLocation());
}

void AFLEnemy::PickUpFood(AFLFood* Food)
{
	HasFood = true;

	Food->GetMesh()->SetSimulatePhysics(false);
	Food->SetActorEnableCollision(false);
	Food->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
	FoodEquiped = Food;
}