// Fill out your copyright notice in the Description page of Project Settings.


#include "FLGameManager.h"
#include "FLHUD.h"
#include "Kismet/GameplayStatics.h"

void AFLGameManager::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), FoodPositions);
}

void AFLGameManager::GameLost()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->GameLost();
	GetWorld()->GetFirstPlayerController()->SetIgnoreMoveInput(true);
	GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
	
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
}
