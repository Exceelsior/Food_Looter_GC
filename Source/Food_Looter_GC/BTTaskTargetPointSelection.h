// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
<<<<<<< Updated upstream
#include "BTTargetPointSelection.generated.h"
=======
#include "BTTaskTargetPointSelection.generated.h"
>>>>>>> Stashed changes

/**
 * 
 */
UCLASS()
<<<<<<< Updated upstream
class FOOD_LOOTER_GC_API UBTTargetPointSelection : public UBTTaskNode
=======
class FOOD_LOOTER_GC_API UBTTaskTargetPointSelection : public UBTTaskNode
>>>>>>> Stashed changes
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY()
	TArray<AActor*> AvailableTargetPoints;
	
};
