// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
<<<<<<< Updated upstream
#include "BTFindAvailableFoodSpot.generated.h"
=======
#include "BTServiceCheckAvailableFoodSpot.generated.h"
>>>>>>> Stashed changes

/**
 * 
 */
UCLASS()
<<<<<<< Updated upstream
class FOOD_LOOTER_GC_API UBTFindAvailableFoodSpot : public UBTService
=======
class FOOD_LOOTER_GC_API UBTServiceCheckAvailableFoodSpot : public UBTService
>>>>>>> Stashed changes
{
	GENERATED_BODY()

	protected:
	virtual void ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	
};
