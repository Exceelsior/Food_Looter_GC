// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
//#include "Runtime/UMG/Public/UMG.h"
#include "FLUWidget.generated.h"

class UProgressBar;

UCLASS()
class FOOD_LOOTER_GC_API UFLUWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	//UFoodLooter_UWidget(const FObjectInitializer& ObjectInitializer);

	void UpdateFoodAmount(float Value);

	void GameWon();

	void GameLost();

	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* FoodBar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* VictoryTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* DefeatTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* ReplayButton;
};
