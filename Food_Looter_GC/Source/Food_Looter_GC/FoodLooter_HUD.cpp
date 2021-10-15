// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodLooter_HUD.h"
#include "FoodLooter_UWidget.h"

AFoodLooter_HUD::AFoodLooter_HUD()
{

}


void AFoodLooter_HUD::BeginPlay()
{

	Super::BeginPlay();

	if (FoodLooterWidgetClass)
	{
		FoodLooterWidget = CreateWidget<UFoodLooter_UWidget>(GetWorld(), FoodLooterWidgetClass);

		if (FoodLooterWidget)
		{
			FoodLooterWidget->AddToViewport();
		}
	}
}

void AFoodLooter_HUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AFoodLooter_HUD::DrawHUD()
{
	Super::DrawHUD();
}

void AFoodLooter_HUD::UpdateFoodAmount(int32 Value) {

}

void AFoodLooter_HUD::GameWon() {

}

void AFoodLooter_HUD::GameLost() {

}