// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodLooter_UWidget.h"

//UFoodLooter_UWidget::UFoodLooter_UWidget(const FObjectInitializer &ObjectInitializer)
//{

//}

void UFoodLooter_UWidget::UpdateFoodAmount(int32 Value)
{
	if (FoodSlider) {

		FoodSlider->SetValue(Value);

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
	//Super::NativeConstruct();
}
