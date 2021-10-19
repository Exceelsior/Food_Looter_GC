// Copyright Epic Games, Inc. All Rights Reserved.


#include "Food_Looter_GCGameModeBase.h"
#include "FLGameManager.h"
#include "Kismet/GameplayStatics.h"
#include "FLHUD.h"

void AFood_Looter_GCGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	CanDecreaseTimer = false;

	GM = Cast<AFLGameManager>(this->GetWorld()->GetGameState());	
}

void AFood_Looter_GCGameModeBase::SetSpawnPoint(AActor* SpwnPt)
{
	SpawnPoint = SpwnPt;
}

void AFood_Looter_GCGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Timer1Min -= DeltaSeconds;

	if(!FirstTwoEnemySpawned)
	{
		for (int i = 0; i < 2; i++)
		{
			//Spawn it
			SpawnEnemy();			
		}
		FirstTwoEnemySpawned = true;
	}

	//If the minute has passed, +1 enemy
	if(Timer1Min <= 0 && ThirdEnemySpawned == false)
	{
		ThirdEnemySpawned = true;
		SpawnEnemy();
	}

	//If an enemy is on the way to leave, timer to spawn the next one start
	if(CanDecreaseTimer)
		TimerBetweenEnemies -= DeltaSeconds;
	
	ManageIa(GM->NbEnemyInScene);

}

void AFood_Looter_GCGameModeBase::ManageIa(int NbEnemy)
{
	//If no one, spawn one
	if(NbEnemy == 0)
	{
		SpawnEnemy();
	}
	
	if(TimerBetweenEnemies <= 0)
	{
		TimerBetweenEnemies = FMath::RandRange(0,5);
	}
}

void AFood_Looter_GCGameModeBase::SpawnEnemy()
{
	AActor* SpawnedEnemy = GetWorld()->SpawnActor<AActor>(EnemyClass, SpawnPoint->GetActorLocation(), SpawnPoint->GetActorRotation());
	GM->AddEnemy();
}



