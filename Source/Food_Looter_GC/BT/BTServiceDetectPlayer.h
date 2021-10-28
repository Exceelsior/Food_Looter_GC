// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BTService.h"
#include "BTServiceDetectPlayer.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UBTServiceDetectPlayer : public UBTService
{
	GENERATED_BODY()

protected:

		virtual void ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	bool PlayerIsInFieldOfView(FVector PlayerDirection, FVector AIForwardVector);
	
	bool PlayerIsInRange(FVector PlayerDirection, FVector StartTrace, float MaxDistance, AActor* IgnoreActor);
};
