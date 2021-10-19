// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FLSpawnPoint.generated.h"

class AFood_Looter_GCGameModeBase;
class AFLGameManager;
UCLASS()
class FOOD_LOOTER_GC_API AFLSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFLSpawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	AFood_Looter_GCGameModeBase* GameMode;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
