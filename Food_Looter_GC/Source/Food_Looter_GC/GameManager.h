// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AGameManager : public AGameStateBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> NbEnemiesHere;
	
	UPROPERTY(VisibleAnywhere)
	int NbFood;

	UPROPERTY(EditAnywhere)
	int NbFoodNeeded;
	
};
