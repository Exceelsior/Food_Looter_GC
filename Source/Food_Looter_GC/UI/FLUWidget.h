// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
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

	UFUNCTION()
	void UpdateFoodAmount(float Value);

	UFUNCTION()
	void GameWon();

	UFUNCTION()
	void GameLost();

	UFUNCTION()
	virtual void NativeConstruct() override;

	UFUNCTION()
	void PlayAgain();

	UFUNCTION()
	void QuitGame();

	UFUNCTION()
	void PauseGame();

	UPROPERTY(VisibleAnywhere)
	bool IsGamePaused;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* FoodBar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* VictoryTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* DefeatTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* PauseTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* PauseBackground;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* ReplayButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* QuitButton;
};
