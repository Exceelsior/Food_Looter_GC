// Fill out your copyright notice in the Description page of Project Settings.


#include "FLGameState.h"

#include "../Enemy/FLEnemy.h"
#include "../enemy/FLEnemyController.h"
#include "../UI/FLHUD.h"
#include "../Player/FLMainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Engine/TargetPoint.h"

void AFLGameState::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), FoodPositions);
	
}

void AFLGameState::AddEnemy(AFLEnemy* Enemy)
{
	ListEnemies.Add(Enemy);
}

void AFLGameState::RemoveEnemy(AFLEnemy* Enemy)
{
	ListEnemies.Remove(Enemy);
}

void AFLGameState::GameLost()
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

void AFLGameState::CompareFood()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->UpdateFoodAmount((float)NbFoodPlayer/NbFoodNeeded);
		
	if(NbFoodPlayer >= NbFoodNeeded)
	{
		GameWon();
	}
}

TArray<AActor*> AFLGameState::GetFoodPositions()
{
	return FoodPositions;
}

void AFLGameState::UpdatePlayerSafeStateInEnemiesBlackBoards()
{
	for(AFLEnemy* Enemy : ListEnemies)
	{
		Cast<AFLEnemyController>(Enemy->GetController())->GetBlackboardComp()->SetValueAsInt("HasSeenPlayer", 0);
	}
}

void AFLGameState::GameWon()
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

void AFLGameState::PauseGame()
{
	Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD())->PauseGame();
}

