// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskFindRoamingPoint.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UBTTaskFindRoamingPoint : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	int RoamNumber = 0;
};
