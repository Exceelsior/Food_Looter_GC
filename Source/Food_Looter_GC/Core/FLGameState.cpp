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

	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(Enemy->GetController());

	if(EnemyController)
	{
		ListEnemiesControllers.Add(EnemyController);
	}
	
}

void AFLGameState::RemoveEnemy(AFLEnemy* Enemy)
{
	ListEnemies.Remove(Enemy);

	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(Enemy->GetController());

	if(EnemyController)
	{
		ListEnemiesControllers.Remove(EnemyController);
	}
}

void AFLGameState::GameLost()
{
	AFLHUD* HUD = Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	if(HUD)
	{
		HUD->GameLost();
	}
	
	GetWorld()->GetFirstPlayerController()->SetIgnoreMoveInput(true);
	GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	
	AFLMainCharacter* Player = Cast<AFLMainCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if(Player)
	{
		//For ragdoll, not working
		//Player->GetMesh()->SetSimulatePhysics(true);
		
		Player->SetHasLost(true);
	}
	
	for(AFLEnemy* Enemy : ListEnemies)
	{
		Enemy->SetHasWon(true);
	}
}

void AFLGameState::CompareFood()
{
	AFLHUD* HUD = Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	if(HUD)
	{
		HUD->UpdateFoodAmount((float)NbFoodPlayer/NbFoodNeeded);
	}
	
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
		AFLEnemyController* EnemyController = Cast<AFLEnemyController>(Enemy->GetController());

		if(EnemyController)
		{
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasSeenPlayer", 0);
		}
	}
}

void AFLGameState::GameWon()
{
	AFLHUD* HUD = Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	if(HUD)
	{
		HUD->GameWon();
	}
	
	GetWorld()->GetFirstPlayerController()->SetIgnoreMoveInput(true);
	GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	
	AFLMainCharacter* Player = Cast<AFLMainCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if(Player)
	{
		Player->SetHasWon(true);
	}
	
	for(AFLEnemy* Enemy : ListEnemies)
	{
		Enemy->SetHasLost(true);
	}
}

void AFLGameState::PauseGame()
{
	AFLHUD* HUD = Cast<AFLHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	if(HUD)
	{
		HUD->PauseGame();
	}
	
}

