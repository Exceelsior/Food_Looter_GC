// Fill out your copyright notice in the Description page of Project Settings.


#include "FLUWidget.h"
#include "Components/ProgressBar.h"


void UFLUWidget::UpdateFoodAmount(float Value)
{
	if (FoodBar)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red,TEXT("On devrait paseer par SetPercent !"));
		FoodBar->SetPercent(Value);
	}
}

void UFLUWidget::GameWon()
{
	VictoryTextBlock->SetVisibility(ESlateVisibility::Visible);
	ReplayButton->SetVisibility(ESlateVisibility::Visible);
}

void UFLUWidget::GameLost()
{
	DefeatTextBlock->SetVisibility(ESlateVisibility::Visible);
	ReplayButton->SetVisibility(ESlateVisibility::Visible);
}

void UFLUWidget::NativeConstruct()
{
	Super::NativeConstruct();

	VictoryTextBlock->SetVisibility(ESlateVisibility::Hidden);
	DefeatTextBlock->SetVisibility(ESlateVisibility::Hidden);
	ReplayButton->SetVisibility(ESlateVisibility::Hidden);
	
}
 