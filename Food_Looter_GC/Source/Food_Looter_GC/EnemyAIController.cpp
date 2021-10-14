// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "AIEnnemy.h"
#include "BotTargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Kismet/GameplayStatics.h"

AEnemyAIController::AEnemyAIController()
{ 
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
 
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
 
	LocationToGoKey = "LocationToGo";
 
}
 
void AEnemyAIController::OnPossess(APawn* Enemy)
{
	Super::OnPossess(Enemy);
 
	AAIEnnemy* AIChar = Cast<AAIEnnemy>(Enemy);
 
	if (AIChar)
	{	
		if (AIChar->BehaviorTree->BlackboardAsset)
		{
			BlackboardComp->InitializeBlackboard(*(AIChar->BehaviorTree->BlackboardAsset));
		}
 
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABotTargetPoint::StaticClass(), BotTargetPoints);		
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Target points amount : %d"), BotTargetPoints.Num()));
 
		BehaviorComp->StartTree(*AIChar->BehaviorTree);
	}
}