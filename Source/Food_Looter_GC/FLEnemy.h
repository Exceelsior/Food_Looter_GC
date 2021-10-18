// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "FLTargetPoint.h"

class AFLGameManager;
class UBehaviorTree;

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FLEnemy.generated.h"

UCLASS()
class FOOD_LOOTER_GC_API AFLEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFLEnemy();

	UPROPERTY(EditAnywhere, Category="AI")
	UBehaviorTree* BehaviorTree;

	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> ArrayTarget;

	UPROPERTY(VisibleAnywhere)
	AFLGameManager* GM;

	UPROPERTY(EditAnywhere)
		float WalkSpeed = 250;

	UPROPERTY(EditAnywhere)
		float ChaseSpeed = 500;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE TArray<AActor*> GetAvailableTargetPoints() { return ArrayTarget; }

	void SetChaseSpeed();

	void ResetChaseSpeed();

};
