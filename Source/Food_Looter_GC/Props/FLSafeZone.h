// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "FLSafeZone.generated.h"

UCLASS()
class FOOD_LOOTER_GC_API AFLSafeZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFLSafeZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxComponent;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
