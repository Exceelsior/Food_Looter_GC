// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FLGameState.generated.h"

class AFLEnemyController;
class AFLEnemy;

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AFLGameState : public AGameStateBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(VisibleAnywhere)
	TArray<AFLEnemy*> ListEnemies;

	UPROPERTY()
	TArray<AFLEnemyController*> ListEnemiesControllers;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> FoodPositions;
	
	UPROPERTY(VisibleAnywhere)
	int NbFoodPlayer;

	UPROPERTY(EditAnywhere)
	int NbFoodInRoom;

	UPROPERTY(EditAnywhere)
	int NbFoodNeeded;		

	//Functions

	UFUNCTION()
	void UpdatePlayerSafeStateInEnemiesBlackBoards();
	
	UFUNCTION()
	void GameWon();

	UFUNCTION()
	void GameLost();
	
	UFUNCTION()
	void PauseGame();
	
	UFUNCTION()
	void CompareFood();

	UFUNCTION()
	TArray<AActor*> GetFoodPositions();

	UFUNCTION()
	virtual void BeginPlay() override;

	UFUNCTION()
	void AddEnemy(AFLEnemy* Enemy);
	
	UFUNCTION()
	void RemoveEnemy(AFLEnemy* Enemy);
};
