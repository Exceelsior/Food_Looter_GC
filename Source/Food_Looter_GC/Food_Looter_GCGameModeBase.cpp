// Copyright Epic Games, Inc. All Rights Reserved.


#include "Food_Looter_GCGameModeBase.h"

#include "FLEnemy.h"
#include "FLFood.h"
#include "FLGameManager.h"
#include "Kismet/GameplayStatics.h"
#include "FLTargetPoint.h"
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
	AFLEnemy* SpawnedEnemy = GetWorld()->SpawnActor<AFLEnemy>(EnemyClass, SpawnPoint->GetActorLocation(), SpawnPoint->GetActorRotation());

	if(CheckPoints())
	{
		AFLFood* TempFood = GetWorld()->SpawnActor<AFLFood>(FoodClass, SpawnPoint->GetActorLocation(), SpawnPoint->GetActorRotation());
		SpawnedEnemy->HasFood = true;

		TempFood->GetMesh()->SetSimulatePhysics(false);
		TempFood->SetActorEnableCollision(false);
		TempFood->AttachToComponent(SpawnedEnemy->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
	}
	
	GM->AddEnemy();
}

bool AFood_Looter_GCGameModeBase::CheckPoints()
{
	bool CanHaveFood = false;
	
	for(int i = 0; i < GM->FoodPositions.Num(); i++)
	{
		if(!Cast<AFLTargetPoint>(GM->FoodPositions[i])->GetIsFull())
			CanHaveFood = true;
	}

	return CanHaveFood;
}



