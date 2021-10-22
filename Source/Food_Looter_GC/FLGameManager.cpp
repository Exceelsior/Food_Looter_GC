// Fill out your copyright notice in the Description page of Project Settings.


#include "FLGameManager.h"

#include "FLEnemy.h"
#include "FLHUD.h"
#include "FLMainCharacter.h"
#include "Kismet/GameplayStatics.h"

void AFLGameManager::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), FoodPositions);
}

void AFLGameManager::AddEnemy(AFLEnemy* Enemy)
{
	ListEnemies.Add(Enemy);
}

void AFLGameManager::RemoveEnemy(AFLEnemy* Enemy)
{
	ListEnemies.Remove(Enemy);
}

void AFLGameManager::GameLost()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->GameLost();
	GetWorld()->GetFirstPlayerController()->SetIgnoreMoveInput(true);
	GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	
	Cast<AFLMainCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn())->SetHasLost(true);
	for(AFLEnemy* Enemy : ListEnemies)
	{
		Enemy->SetHasWon(true);
	}
}

void AFLGameManager::CompareFood()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->UpdateFoodAmount((float)NbFood/NbFoodNeeded);
		
	if(NbFood >= NbFoodNeeded)
	{
		GameWon();
	}
}

TArray<AActor*> AFLGameManager::GetFoodPositions()
{
	return FoodPositions;
}

void AFLGameManager::GameWon()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->GameWon();
	GetWorld()->GetFirstPlayerController()->SetIgnoreMoveInput(true);
	GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	
	Cast<AFLMainCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn())->SetHasWon(true);
	for(AFLEnemy* Enemy : ListEnemies)
	{
		Enemy->SetHasLost(true);
	}
}
