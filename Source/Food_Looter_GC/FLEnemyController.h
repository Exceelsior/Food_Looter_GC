// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FLEnemy.h"
#include "FLEnemyController.generated.h"

class UBehaviorTreeComponent;
/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AFLEnemyController : public AAIController
{
	GENERATED_BODY()
	
	UBehaviorTreeComponent* BehaviorComp;
	
	UBlackboardComponent* BlackboardComp;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName LocationToGoKey;

	TArray<AActor*> BotTargetPoints;

	AFLEnemy* AIChar;

	virtual void OnPossess(APawn* Pawn) override;
	
public:

	AFLEnemyController();
 
	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }

	FORCEINLINE AFLEnemy* GetAIChar() { return AIChar;}
};
