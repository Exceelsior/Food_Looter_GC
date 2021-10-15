// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodLooter_UWidget.h"
#include "Components/ProgressBar.h"


void UFoodLooter_UWidget::UpdateFoodAmount(int32 Value)
{
	if (FoodBar)
	{
		FoodBar->SetPercent(Value);
	}
}

void UFoodLooter_UWidget::GameWon()
{

}

void UFoodLooter_UWidget::GameLost()
{

}

void UFoodLooter_UWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
