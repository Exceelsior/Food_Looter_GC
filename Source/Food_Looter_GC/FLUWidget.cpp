// Fill out your copyright notice in the Description page of Project Settings.


#include "FLUWidget.h"
#include "Components/ProgressBar.h"
#include "Kismet/GameplayStatics.h"


void UFLUWidget::UpdateFoodAmount(float Value)
{
	if (FoodBar)
	{
		FoodBar->SetPercent(Value);
	}
}

void UFLUWidget::GameWon()
{
	VictoryTextBlock->SetVisibility(ESlateVisibility::Visible);
	ReplayButton->SetVisibility(ESlateVisibility::Visible);
	QuitButton->SetVisibility(ESlateVisibility::Visible);
	PauseBackground->SetVisibility(ESlateVisibility::Visible);
}

void UFLUWidget::GameLost()
{
	DefeatTextBlock->SetVisibility(ESlateVisibility::Visible);
	ReplayButton->SetVisibility(ESlateVisibility::Visible);
	QuitButton->SetVisibility(ESlateVisibility::Visible);
	PauseBackground->SetVisibility(ESlateVisibility::Visible);
}

void UFLUWidget::NativeConstruct()
{
	Super::NativeConstruct();	
	
	VictoryTextBlock->SetVisibility(ESlateVisibility::Hidden);
	DefeatTextBlock->SetVisibility(ESlateVisibility::Hidden);
	ReplayButton->SetVisibility(ESlateVisibility::Hidden);
	QuitButton->SetVisibility(ESlateVisibility::Hidden);
	PauseTextBlock->SetVisibility(ESlateVisibility::Hidden);
	PauseBackground->SetVisibility(ESlateVisibility::Hidden);	
	
	QuitButton->OnClicked.AddDynamic(this, &UFLUWidget::QuitGame);
	
	ReplayButton->OnClicked.AddDynamic(this, &UFLUWidget::UFLUWidget::PlayAgain);
	
}

void UFLUWidget::PlayAgain()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void UFLUWidget::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
}

void UFLUWidget::PauseGame()
{
	IsGamePaused = !IsGamePaused;
	
	GetWorld()->GetFirstPlayerController()->SetPause(IsGamePaused);
	
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(IsGamePaused);
	
	if(IsGamePaused)
	{
		PauseTextBlock->SetVisibility(ESlateVisibility::Visible);
		PauseBackground->SetVisibility(ESlateVisibility::Visible);
		ReplayButton->SetVisibility(ESlateVisibility::Visible);
		QuitButton->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		PauseTextBlock->SetVisibility(ESlateVisibility::Hidden);
		PauseBackground->SetVisibility(ESlateVisibility::Hidden);
		ReplayButton->SetVisibility(ESlateVisibility::Hidden);
		QuitButton->SetVisibility(ESlateVisibility::Hidden);
	}
	
}