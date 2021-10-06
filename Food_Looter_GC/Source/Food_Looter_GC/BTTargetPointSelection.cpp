// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTargetPointSelection.h"
#include "BotTargetPoint.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTargetPointSelection::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AEnemyAIController* AICon = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
 
	if (AICon)
	{
       
		UBlackboardComponent* BlackboardComp = AICon->GetBlackboardComp();
		ABotTargetPoint* CurrentPoint = Cast<ABotTargetPoint>(BlackboardComp->GetValueAsObject("LocationToGo"));
 
		TArray<AActor*> AvailableTargetPoints = AICon->GetAvailableTargetPoints();
		
		int32 RandomIndex;
 
		ABotTargetPoint* NextTargetPoint = nullptr;
 
		do
		{
			RandomIndex = FMath::RandRange(0, AvailableTargetPoints.Num()-1);
			NextTargetPoint = Cast<ABotTargetPoint>(AvailableTargetPoints[RandomIndex]);
			
		} while (CurrentPoint == NextTargetPoint);
 
		BlackboardComp->SetValueAsObject("LocationToGo", NextTargetPoint);
 
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
