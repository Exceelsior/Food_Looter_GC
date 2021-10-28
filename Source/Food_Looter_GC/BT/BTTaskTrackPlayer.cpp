// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskTrackPlayer.h"

#include "../Enemy/FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTaskTrackPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());

		FVector SupposedPlayerPosition = EnemyController->GetPawn()->GetActorLocation() + EnemyPawn->PlayerDirection * 500;
		EnemyController->GetBlackboardComp()->SetValueAsVector("SupposedPlayerPosition", SupposedPlayerPosition);
		EnemyPawn->ResetTrackTimer();

		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
