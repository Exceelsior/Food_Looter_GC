// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskDropFood.h"
#include "../Enemy/FLEnemyController.h"
#include "../Props/FLFood.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTaskDropFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());
		if(EnemyPawn)
		{
			EnemyPawn->TimerPickUpFood = 3;
			EnemyPawn->HasFood = false;
			EnemyPawn->HasLostFood = true;

			EnemyPawn->FoodEquiped->SetActorEnableCollision(true);
			EnemyPawn->FoodEquiped->GetMesh()->SetSimulatePhysics(true);
			EnemyPawn->FoodEquiped->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

			EnemyController->GetBlackboardComp()->SetValueAsVector("FoodPosition", EnemyPawn->FoodEquiped->GetActorLocation());
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasLostFood", 1);
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasFood", 0);

			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
