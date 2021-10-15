// Fill out your copyright notice in the Description page of Project Settings.


#include "FLHUD.h"
#include "FLUWidget.h"

AFLHUD::AFLHUD()
{

}


void AFLHUD::BeginPlay()
{

	Super::BeginPlay();

	if (FoodLooterWidgetClass)
	{
		FoodLooterWidget = CreateWidget<UFLUWidget>(GetWorld(), FoodLooterWidgetClass);

		if (FoodLooterWidget)
		{
			FoodLooterWidget->AddToViewport();
		}
	}
}

void AFLHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AFLHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AFLHUD::UpdateFoodAmount(int32 Value) {
	FoodLooterWidget->UpdateFoodAmount(Value);
}

void AFLHUD::GameWon() {
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,TEXT("Victory !"));
}

void AFLHUD::GameLost() {
	GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Red,TEXT("Defeat !"));
}