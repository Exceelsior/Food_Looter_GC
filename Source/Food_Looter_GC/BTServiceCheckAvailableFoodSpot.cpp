// Fill out your copyright notice in the Description page of Project Settings.


<<<<<<< Updated upstream
#include "BTFindAvailableFoodSpot.h"
=======
#include "BTServiceCheckAvailableFoodSpot.h"
>>>>>>> Stashed changes

#include "FLEnemyController.h"
#include "FLGameManager.h"
#include "FLTargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"

<<<<<<< Updated upstream
void UBTFindAvailableFoodSpot::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
=======
void UBTServiceCheckAvailableFoodSpot::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
>>>>>>> Stashed changes
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
