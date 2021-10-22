// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceCheckAvailableFoodSpot.h"
#include "FLEnemyController.h"
#include "FLGameManager.h"
#include "FLTargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTServiceCheckAvailableFoodSpot::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);

	AFLEnemyController* AIController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	AFLGameManager* Gm = Cast<AFLGameManager>(this->GetWorld()->GetGameState());

	if(AIController != nullptr)
	{
		for(int i = 0; i < Gm->FoodPositions.Num(); i++)
		{
			if(!Cast<AFLTargetPoint>(Gm->FoodPositions[i])->GetIsFull())
				AIController->GetBlackboardComp()->SetValueAsInt("HasAnAvailableFoodSpot", 1);
			else
				AIController->GetBlackboardComp()->SetValueAsInt("HasAnAvailableFoodSpot", 0);
		}
	}
}
