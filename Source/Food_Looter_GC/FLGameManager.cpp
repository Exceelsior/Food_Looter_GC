// Fill out your copyright notice in the Description page of Project Settings.


#include "FLGameManager.h"
#include "FLHUD.h"

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

void AFLGameManager::GameWon()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->GameWon();
	
}
