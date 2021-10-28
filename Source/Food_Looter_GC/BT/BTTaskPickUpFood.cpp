// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskPickUpFood.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Food_Looter_GC/Enemy/FLEnemyController.h"

EBTNodeResult::Type UBTTaskPickUpFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
     
    if (EnemyController){
		EnemyController->GetBlackboardComp()->SetValueAsInt("HasLostFood", 0);

    	return EBTNodeResult::Succeeded;
    }
	return EBTNodeResult::Failed;
}
