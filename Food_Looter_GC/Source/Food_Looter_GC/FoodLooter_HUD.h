// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FoodLooter_HUD.generated.h"

/**
 * 
 */

class UFoodLooter_UWidget;

UCLASS()
class FOOD_LOOTER_GC_API AFoodLooter_HUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AFoodLooter_HUD();

	virtual void DrawHUD() override;
	virtual void BeginPlay();
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void UpdateFoodAmount(int32 Value);

	UFUNCTION()
	void GameWon();

	UFUNCTION()
	void GameLost();

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UUserWidget> FoodLooterWidgetClass;

private:
	UFoodLooter_UWidget* FoodLooterWidget;

};
