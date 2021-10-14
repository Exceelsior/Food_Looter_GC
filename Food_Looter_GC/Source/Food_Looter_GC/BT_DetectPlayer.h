// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BTService.h"
#include "BT_DetectPlayer.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UBT_DetectPlayer : public UBTService
{
	GENERATED_BODY()

protected:

		virtual void ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	bool PlayerIsInFieldOfView(FVector PlayerPosition, FVector AIPosition, FVector AIForwardVector);
	
	bool PlayerIsInRange(FVector ForwardVector, FVector StartTrace, float MaxDistance, AActor* IgnoreActor);
};
