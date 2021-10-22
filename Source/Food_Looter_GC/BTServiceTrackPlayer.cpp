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
		FVector LastPlayerPosition = EnemyController->GetBlackboardComp()->GetValueAsVector("LastPlayerPosition");

		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());

		if((LastPlayerPosition - EnemyPawn->GetActorLocation()).Size() < 100 && !EnemyPawn->IsTrackingPlayer)
		{
			FVector SupposedPlayerPosition = EnemyController->GetPawn()->GetActorLocation() + EnemyPawn->PlayerDirection * 500;
			EnemyController->GetBlackboardComp()->SetValueAsVector("SupposedPlayerPosition", SupposedPlayerPosition);
			EnemyPawn->ResetTrackTimer();
			EnemyPawn->IsTrackingPlayer = true;
		}		
	}
}
