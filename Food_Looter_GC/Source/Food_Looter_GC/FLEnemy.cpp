// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemy.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AFLEnemy::AFLEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFLEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFLEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFLEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFLEnemy::SetChaseSpeed()
{

	GetCharacterMovement()->MaxWalkSpeed = ChaseSpeed;
}

void AFLEnemy::ResetChaseSpeed()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}