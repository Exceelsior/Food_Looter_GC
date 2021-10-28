// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FLHUD.generated.h"

/**
 * 
 */

class UFLUWidget;

UCLASS()
class FOOD_LOOTER_GC_API AFLHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AFLHUD();

	virtual void DrawHUD() override;
	virtual void BeginPlay();
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void UpdateFoodAmount(float Value);

	UFUNCTION()
	void GameWon();

	UFUNCTION()
	void GameLost();

	UFUNCTION()
	void PauseGame();
	
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> FoodLooterWidgetClass;

private:
	UFLUWidget* FoodLooterWidget;

};
