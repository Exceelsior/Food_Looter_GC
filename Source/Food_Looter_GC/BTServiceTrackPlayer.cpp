// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceTrackPlayer.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTServiceTrackPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);

	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());

		if(EnemyPawn)
		{			
			EnemyController->GetBlackboardComp()->SetValueAsFloat("TrackTimer", EnemyPawn->TrackTimer);
			
			if (EnemyPawn->TrackTimer <= 0 && EnemyPawn->IsTrackingPlayer)
			{				
				EnemyPawn->IsTrackingPlayer = false;
				EnemyController->GetBlackboardComp()->SetValueAsInt("HasSeenPlayer", 0);
			}
		}
	}
}
