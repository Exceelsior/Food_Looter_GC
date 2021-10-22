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

void AFood_Looter_GCGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Timer1Min -= DeltaSeconds;

	if(!FirstTwoEnemySpawned)
	{
		for (int i = 0; i < 1; i++)
		{
			//Spawn it
			SpawnEnemy();			
		}
		FirstTwoEnemySpawned = true;
	}

	//If the minute has passed, +1 enemy
	if(Timer1Min <= 0)
	{
		ThirdEnemySpawned = true;
	}

	//If an enemy is on the way to leave, timer to spawn the next one start
	if(CanDecreaseTimer)
		TimerBetweenEnemies -= DeltaSeconds;
	
	ManageIa(GM->ListEnemies.Num(), DeltaSeconds);

}

void AFood_Looter_GCGameModeBase::ManageIa(int NbEnemy, float DeltaSec)
{
	

	//If no one, spawn one
	if(NbEnemy == 0)
	{
		SpawnEnemy();
	}

	//Dependeing on the time in game, NumberMax is 2 or 3
	if(!ThirdEnemySpawned)
		NbEnemyMax = 2;
	else
	{
		NbEnemyMax = 3;		
		SpawnEnemy();
	}

	//Spawn to have always maximum enemies on scene
	if(NbEnemy > 0 && NbEnemy < NbEnemyMax)
	{
		TimerBetweenEnemies -= DeltaSec;

		if(TimerBetweenEnemies <= 0)
		{
			SpawnEnemy();
			TimerBetweenEnemies = FMath::RandRange(0,5);
		}
	}
}

void AFood_Looter_GCGameModeBase::SpawnEnemy()
{
	if(GM->ListEnemies.Num() < NbEnemyMax)
	{
		AFLEnemy* SpawnedEnemy = GetWorld()->SpawnActor<AFLEnemy>(EnemyClass, SpawnPoint->GetActorLocation(), SpawnPoint->GetActorRotation());

		if(CheckFoodInRoom())
		{
			AFLFood* TempFood = GetWorld()->SpawnActor<AFLFood>(FoodClass, SpawnedEnemy->GetActorLocation(), SpawnedEnemy->GetActorRotation());
			SpawnedEnemy->HasFood = true;

			TempFood->GetMesh()->SetSimulatePhysics(false);
			TempFood->SetActorEnableCollision(false);
			TempFood->AttachToComponent(SpawnedEnemy->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
			SpawnedEnemy->SetFood(TempFood);
			SpawnedEnemy->UpdateHasFoodInBlackBoard();

			GM->NbFoodInRoom += 1;
		}
	
		GM->AddEnemy(SpawnedEnemy);
	}
}

bool AFood_Looter_GCGameModeBase::CheckFoodInRoom()
{
	bool CanHaveFood = false;
	
	if(GM->NbFoodInRoom < 5)
		CanHaveFood = true;

	return CanHaveFood;
}



