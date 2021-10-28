// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FLEnemyController.generated.h"

class AFLEnemy;
class AFLGameState;
class UBehaviorTreeComponent;
/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API AFLEnemyController : public AAIController
{
	GENERATED_BODY()

	UPROPERTY()
	UBehaviorTreeComponent* BehaviorComp;

	UPROPERTY()
	UBlackboardComponent* BlackboardComp;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName LocationToGoKey;

	UPROPERTY()
	TArray<AActor*> BotTargetPoints;

	UPROPERTY()
	AFLEnemy* AIChar;

	virtual void OnPossess(APawn* Pawn) override;
	
public:

	AFLEnemyController();
 
	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }

	FORCEINLINE AFLEnemy* GetAIChar() { return AIChar;}
};
