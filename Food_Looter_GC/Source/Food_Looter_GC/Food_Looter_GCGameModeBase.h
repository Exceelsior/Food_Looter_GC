// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Food_Looter_GCGameModeBase.generated.h"

class AFLGameManager;
/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AFood_Looter_GCGameModeBase : public AGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	bool Win;

	//Temp actor that will be instantiated
	UPROPERTY(VisibleAnywhere)
	AActor* TempAct;

	//Spawn point of enemies
	UPROPERTY(EditAnywhere)
	AActor* PtSpawn;

	UPROPERTY(VisibleAnywhere)
	float SaveTimerBetweenEnemies;

	UPROPERTY(VisibleAnywhere)
	bool CanDecreaseTimer;
	
public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemyClass;

	UPROPERTY(EditAnywhere)
	AFLGameManager* GM;

	UPROPERTY(EditAnywhere)
	float Timer1Min;

	UPROPERTY(EditAnywhere)
	float TimerBetweenEnemies;
	
	//Functions
	UFUNCTION()
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	virtual void BeginPlay() override;

	UFUNCTION()
	void CompareFood();

	UFUNCTION()
	void ManageIa(TArray<AActor*> List, float Timer);
	
};
