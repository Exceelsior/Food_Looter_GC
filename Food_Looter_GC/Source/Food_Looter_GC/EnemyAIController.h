// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIEnnemy.h"
#include "EnemyAIController.generated.h"

class UBehaviorTreeComponent;
/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
	UBehaviorTreeComponent* BehaviorComp;
	
	UBlackboardComponent* BlackboardComp;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName LocationToGoKey;

	TArray<AActor*> BotTargetPoints;

	AAIEnnemy* AIChar;

	virtual void OnPossess(APawn* Pawn) override;
	
public:

	AEnemyAIController();
 
	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }

	FORCEINLINE AAIEnnemy* GetAIChar() { return AIChar;}
};
