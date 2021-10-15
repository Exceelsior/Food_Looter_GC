// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTargetPointSelection.h"

#include "FLEnemy.h"
#include "FLTargetPoint.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTargetPointSelection::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AFLEnemyController* AICon = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
 
	if (AICon)
	{
       
		UBlackboardComponent* BlackboardComp = AICon->GetBlackboardComp();
		AFLTargetPoint* CurrentPoint = Cast<AFLTargetPoint>(BlackboardComp->GetValueAsObject("LocationToGo"));
 
		TArray<AFLTargetPoint*> AvailableTargetPoints = AICon->GetAIChar()->GetAvailableTargetPoints();
		
		int32 RandomIndex;
 
		AFLTargetPoint* NextTargetPoint = nullptr;
 
		do
		{
			RandomIndex = FMath::RandRange(0, AvailableTargetPoints.Num()-1);
			NextTargetPoint = Cast<AFLTargetPoint>(AvailableTargetPoints[RandomIndex]);
			
		} while (CurrentPoint == NextTargetPoint);
 
		BlackboardComp->SetValueAsObject("LocationToGo", NextTargetPoint);
 
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
