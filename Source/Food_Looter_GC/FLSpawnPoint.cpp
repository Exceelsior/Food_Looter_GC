// Fill out your copyright notice in the Description page of Project Settings.


#include "FLSpawnPoint.h"

#include "Food_Looter_GCGameModeBase.h"

// Sets default values
AFLSpawnPoint::AFLSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFLSpawnPoint::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<AFood_Looter_GCGameModeBase>(GetWorld()->GetAuthGameMode());
	GameMode->EndPoint = this;
}

// Called every frame
void AFLSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

