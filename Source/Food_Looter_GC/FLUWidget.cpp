// Fill out your copyright notice in the Description page of Project Settings.


#include "FLUWidget.h"
#include "Components/ProgressBar.h"


void UFLUWidget::UpdateFoodAmount(int32 Value)
{
	if (FoodBar)
	{
		FoodBar->SetPercent(Value);
	}
}

void UFLUWidget::GameWon()
{

}

void UFLUWidget::GameLost()
{

}

void UFLUWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
