// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceIsGameEnded.h"
#include "../Enemy/FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTServiceIsGameEnded::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);

	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());
		if(EnemyPawn)
		{
			if(EnemyPawn->HasLost || EnemyPawn->HasWon)
				EnemyController->GetBlackboardComp()->SetValueAsInt("GameEnded", 1);
			else
				EnemyController->GetBlackboardComp()->SetValueAsInt("GameEnded", 0);
		}
	}
}
