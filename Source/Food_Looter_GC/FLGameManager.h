// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/GameStateBase.h"
#include "FLGameManager.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AFLGameManager : public AGameStateBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> NbEnemiesHere;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> FoodPositions;
	
	UPROPERTY(VisibleAnywhere)
	int NbFood;

	UPROPERTY(VisibleAnywhere)
	int NbFoodInRoom;

	UPROPERTY(EditAnywhere)
	int NbFoodNeeded;

	UPROPERTY(VisibleAnywhere)
	ULevelScriptBlueprint* LvlBP;

	//Functions	
	UFUNCTION()
	void GameWon();

	UFUNCTION()
	void GameLost();

	UFUNCTION()
	void CompareFood();

	UFUNCTION()
	TArray<AActor*> GetFoodPositions();

	UFUNCTION()
	virtual void BeginPlay() override;
};
