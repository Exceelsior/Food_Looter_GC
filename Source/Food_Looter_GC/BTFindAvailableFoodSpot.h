// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTFindAvailableFoodSpot.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UBTFindAvailableFoodSpot : public UBTService
{
	GENERATED_BODY()

	protected:
	virtual void ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	
};
