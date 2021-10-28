// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskTargetPointSelection.h"

#include "FLTargetPoint.h"
#include "FLEnemyController.h"
#include "FLGameState.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTaskTargetPointSelection::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
 
	if (EnemyController)
	{
       
		UBlackboardComponent* BlackboardComp = EnemyController->GetBlackboardComp();
		AFLTargetPoint* CurrentPoint = Cast<AFLTargetPoint>(BlackboardComp->GetValueAsObject("LocationToGo"));
 
		AvailableTargetPoints = Cast<AFLGameState>(GetWorld()->GetAuthGameMode()->GetGameState<AFLGameState>())->GetFoodPositions();
		
		int32 RandomIndex;
 
		AFLTargetPoint* NextTargetPoint;
		
		do
		{
			RandomIndex = FMath::RandRange(0, AvailableTargetPoints.Num()-1);
			NextTargetPoint = Cast<AFLTargetPoint>(AvailableTargetPoints[RandomIndex]);
			
			
		} while (CurrentPoint == NextTargetPoint && !NextTargetPoint->GetIsFull());
 
		BlackboardComp->SetValueAsObject("LocationToGo", NextTargetPoint);
 
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
