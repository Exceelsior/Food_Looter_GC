// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskFindRoamingPoint.h"

#include "../Enemy/FLEnemyController.h"
#include "../Core/FLGameState.h"
#include "../Core/Food_Looter_GCGameModeBase.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Food_Looter_GC/Enemy/FLEnemy.h"

EBTNodeResult::Type UBTTaskFindRoamingPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{	

	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());
		UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
		if(EnemyPawn && NavSys)
		{
			if(EnemyPawn->RoamNumber < 2)
			{
				FNavLocation ResultLocation;
			
				do
					NavSys->GetRandomReachablePointInRadius(EnemyController->GetPawn()->GetActorLocation(), 4000, ResultLocation);
				while((ResultLocation.Location - EnemyPawn->GetActorLocation()).Size() < 500); //Tant que le point est trop proche, trouve un nouveau point
			
				EnemyController->GetBlackboardComp()->SetValueAsVector("RoamPoint", ResultLocation.Location);
				EnemyPawn->RoamNumber++;
			}
			else
			{
				EnemyController->GetBlackboardComp()->SetValueAsVector("RoamPoint",Cast<AFood_Looter_GCGameModeBase>(GetWorld()->GetAuthGameMode())->EndPoint->GetActorLocation());
			}
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
