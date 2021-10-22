// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskTargetPointSelection.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UBTTaskTargetPointSelection : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY()
	TArray<AActor*> AvailableTargetPoints;
	
};
