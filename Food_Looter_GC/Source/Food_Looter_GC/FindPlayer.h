// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UFindPlayer : public UBTService
{
	GENERATED_BODY()


	UFUNCTION()
	bool CheckPlayerPosition(UBehaviorTreeComponent* OwnerComp);

	UFindPlayer();
};
