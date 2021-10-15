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
	
	for (int i = 0; i < 2; i++)
	{
		//Spawn it
		//GetWorld()->SpawnActor<AActor>(EnemyClass, PtSpawn->GetActorLocation(), PtSpawn->GetActorRotation());
	}

	SaveTimerBetweenEnemies = TimerBetweenEnemies;
}

void AFood_Looter_GCGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Timer1Min -= DeltaSeconds;

	//If the minute has passed, +1 enemy
	if(Timer1Min <= 0)
	{
		Timer1Min = 2;
		//GetWorld()->SpawnActor<AActor>(EnemyClass, PtSpawn->GetActorLocation(), PtSpawn->GetActorRotation());
	}

	//If an enemy is on the way to leave, timer to spawn the next one start
	if(CanDecreaseTimer)
		TimerBetweenEnemies -= DeltaSeconds;
	

	//ManageIa(GM->NbEnemiesHere, TimerBetweenEnemies);

}

void AFood_Looter_GCGameModeBase::ManageIa(TArray<AActor*> List, float Timer)
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), EnemyClass, GM->NbEnemiesHere);

	//If no one, spawn one
	if(List.Num() == NULL)
	{
		TempAct = GetWorld()->SpawnActor<AActor>(EnemyClass, PtSpawn->GetActorLocation(), PtSpawn->GetActorRotation());
	}

	// TODO when code of the enemy is available
	// if(Timer <= 0)
	// {
	//     Timer
	// }
}

