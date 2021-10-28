// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceUpdateHasFood.h"
#include "../Enemy/FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Food_Looter_GC/Enemy/FLEnemy.h"

void UBTServiceUpdateHasFood::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);
	
	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());
		if(EnemyPawn)
		{
			if(EnemyPawn->HasFood)
				EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 1);
			else
				EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 0);

			if(EnemyPawn->HasLostFood)
				EnemyController->GetBlackboardComp()->SetValueAsInt("HasLostFood", 1);
			else
				EnemyController->GetBlackboardComp()->SetValueAsInt("HasLostFood", 0);
		}
	}
	
}
