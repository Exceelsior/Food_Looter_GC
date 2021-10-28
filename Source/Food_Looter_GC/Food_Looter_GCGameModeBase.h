// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Food_Looter_GCGameModeBase.generated.h"

class AFLGameState;

UCLASS()
class FOOD_LOOTER_GC_API AFood_Looter_GCGameModeBase : public AGameMode
{
    GENERATED_BODY()

private:
    UPROPERTY(VisibleAnywhere)
    AFLGameState* GM;
    
    //Temp actor that will be instantiated
    UPROPERTY(VisibleAnywhere)
    AActor* TempAct;

    UPROPERTY(VisibleAnywhere)
    bool CanDecreaseTimer;

    UPROPERTY()
    bool FirstTwoEnemySpawned = false;
    
    UPROPERTY()
    bool ThirdEnemySpawned = false;

public:
    //Spawn point of enemies
    UPROPERTY(VisibleAnywhere)
    AActor* SpawnPoint;

    UPROPERTY(VisibleAnywhere)
    AActor* EndPoint;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> EnemyArray;

    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> FoodClass;
    
    UPROPERTY(EditAnywhere)
    float Timer1Min = 60;

    UPROPERTY(EditAnywhere)
    float TimerBetweenEnemies;

    int NbEnemyMax;

    //Functions    
    UFUNCTION()
    virtual void Tick(float DeltaSeconds) override;

    UFUNCTION()
    virtual void BeginPlay() override;

    UFUNCTION()
    void ManageIa(int NbEnemy, float DeltaSec);

    UFUNCTION()
    void SpawnEnemy();

    UFUNCTION()
    bool CheckFoodInRoom();
};