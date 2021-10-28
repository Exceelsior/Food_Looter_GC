// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemyController.h"
#include "FLEnemy.h"
#include "FLGameState.h"
#include "FLTargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Kismet/GameplayStatics.h"

AFLEnemyController::AFLEnemyController()
{ 
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
 
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
 
	LocationToGoKey = "LocationToGo";
}
 
void AFLEnemyController::OnPossess(APawn* Enemy)
{
	Super::OnPossess(Enemy);
	
	AIChar = Cast<AFLEnemy>(Enemy);
 
	if (AIChar)
	{	
		if (AIChar->BehaviorTree->BlackboardAsset)
		{
			BlackboardComp->InitializeBlackboard(*(AIChar->BehaviorTree->BlackboardAsset));
		}
		
		BehaviorComp->StartTree(*AIChar->BehaviorTree);
	}
}