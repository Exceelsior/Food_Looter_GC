// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BTService.h"
<<<<<<< Updated upstream
#include "BTDetectPlayer.generated.h"
=======
#include "BTServiceDetectPlayer.generated.h"
>>>>>>> Stashed changes

/**
 * 
 */
UCLASS()
<<<<<<< Updated upstream
class FOOD_LOOTER_GC_API UBTDetectPlayer : public UBTService
=======
class FOOD_LOOTER_GC_API UBTServiceDetectPlayer : public UBTService
>>>>>>> Stashed changes
{
	GENERATED_BODY()

protected:

		virtual void ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	bool PlayerIsInFieldOfView(FVector PlayerDirection, FVector AIForwardVector);
	
	bool PlayerIsInRange(FVector PlayerDirection, FVector StartTrace, float MaxDistance, AActor* IgnoreActor);
};
