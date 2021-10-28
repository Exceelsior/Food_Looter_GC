// Copyright Epic Games, Inc. All Rights Reserved.


#include "Food_Looter_GCGameModeBase.h"

#include "FLEnemy.h"
#include "FLEnemyController.h"
#include "FLFood.h"
#include "FLGameState.h"
#include "Kismet/GameplayStatics.h"
#include "FLTargetPoint.h"
#include "FLHUD.h"
#include "BehaviorTree/BlackboardComponent.h"

void AFood_Looter_GCGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	CanDecreaseTimer = false;

	GM = Cast<AFLGameState>(this->GetWorld()->GetGameState());	
}

void AFood_Looter_GCGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Timer1Min -= DeltaSeconds;

	if(!FirstTwoEnemySpawned)
	{
		//Spawn the first food
		int RandomNum = FMath::RandRange(0, GM->GetFoodPositions().Num() - 1);
		AFLTargetPoint* FirstFoodPoint = Cast<AFLTargetPoint>(GM->GetFoodPositions()[RandomNum]);

		//Spawn Food at start at a random position
		GetWorld()->SpawnActor<AFLFood>(FoodClass, FirstFoodPoint->GetActorLocation(), FirstFoodPoint->GetActorRotation());
		FirstFoodPoint->SetIsFull(true);
		GM->NbFoodInRoom++;
		
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
		AFLEnemy* SpawnedEnemy = GetWorld()->SpawnActor<AFLEnemy>(EnemyArray[FMath::RandRange(0, EnemyArray.Num()-1)], SpawnPoint->GetActorLocation(), SpawnPoint->GetActorRotation());
		SpawnedEnemy->GetMesh()->SetMaterial(0, EnemyMaterialsArray[FMath::RandRange(0, EnemyMaterialsArray.Num()-1)]);

		
		
		if(SpawnedEnemy && CheckFoodInRoom())
		{
			int Chance = FMath::RandRange(0,100);

			AFLFood* TempFood;
			
			if(Chance < SuperFoodSpawnChance)
				TempFood = GetWorld()->SpawnActor<AFLFood>(SuperFoodClass, SpawnedEnemy->GetActorLocation(), SpawnedEnemy->GetActorRotation());
			else
				TempFood = GetWorld()->SpawnActor<AFLFood>(FoodClass, SpawnedEnemy->GetActorLocation(), SpawnedEnemy->GetActorRotation());
			
			SpawnedEnemy->HasFood = true;
			SpawnedEnemy->WalkSpeed /= TempFood->GetDivision();
			SpawnedEnemy->RefreshWalkSpeed();
		
			TempFood->GetMesh()->SetSimulatePhysics(false);
			TempFood->SetActorEnableCollision(false);
			TempFood->AttachToComponent(SpawnedEnemy->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
			SpawnedEnemy->SetFood(TempFood);
			SpawnedEnemy->UpdateHasFoodInBlackBoard();

			GM->NbFoodInRoom += 1;
			Cast<AFLEnemyController>(SpawnedEnemy->GetController())->GetBlackboardComp()->SetValueAsInt("HasAnAvailableFoodSpot", 1);
		}
		else
		{
			Cast<AFLEnemyController>(SpawnedEnemy->GetController())->GetBlackboardComp()->SetValueAsInt("HasAnAvailableFoodSpot", 0);
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



