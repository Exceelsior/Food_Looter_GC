// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTServiceTrackPlayer.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UBTServiceTrackPlayer : public UBTService
{
	GENERATED_BODY()
	
	virtual void ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
