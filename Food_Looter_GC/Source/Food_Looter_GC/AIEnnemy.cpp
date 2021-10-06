// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnnemy.h"
#include "BehaviorTree/BehaviorTree.h"

// Sets default values
AAIEnnemy::AAIEnnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIEnnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIEnnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIEnnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

