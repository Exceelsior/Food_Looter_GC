// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Engine/TargetPoint.h"
#include "FLTargetPoint.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AFLTargetPoint : public ATargetPoint
{
	GENERATED_BODY()
	AFLTargetPoint();
	
	protected:
	UPROPERTY(VisibleAnywhere)
	bool IsFull = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	USphereComponent* SphereComponent;
	
	public:
	UFUNCTION()
	bool GetIsFull();

	UFUNCTION()
	void SetIsFull(bool b);

	
};
