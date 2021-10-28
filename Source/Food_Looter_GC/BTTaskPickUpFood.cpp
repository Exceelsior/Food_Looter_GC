// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskPickUpFood.h"
#include "FLEnemyController.h"
#include "FLFood.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTaskPickUpFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());

	if(EnemyController)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());

		if(EnemyPawn)
		{			
			EnemyPawn->HasFood = true;
			AFLFood* Food = Cast<AFLFood>(EnemyPawn->FoodEquiped);
			
			if(Food)
			{
				Food->GetMesh()->SetSimulatePhysics(false);
				Food->SetActorEnableCollision(false);
				Food->AttachToComponent(EnemyPawn->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "CarryFood");
				EnemyController->GetBlackboardComp()->SetValueAsInt("HasLostFood", 0);
				EnemyPawn->UpdateHasFoodInBlackBoard();

				return EBTNodeResult::Succeeded;
			}			
		}
	}
	return EBTNodeResult::Failed;
}
