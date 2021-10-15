// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//#include "Runtime/UMG/Public/UMG.h"
#include "FoodLooter_UWidget.generated.h"

class UProgressBar;

UCLASS()
class FOOD_LOOTER_GC_API UFoodLooter_UWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	//UFoodLooter_UWidget(const FObjectInitializer& ObjectInitializer);

	void UpdateFoodAmount(int32 Value);

	void GameWon();

	void GameLost();

	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* FoodBar;
};
