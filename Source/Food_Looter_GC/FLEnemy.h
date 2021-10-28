// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FLTargetPoint.h"

class AFLGameState;
class UBehaviorTree;
class AFLEnemyController;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UCapsuleComponent* DetectionCapsule;
	
	UPROPERTY(VisibleAnywhere)
	AFLGameState* GM;

	UPROPERTY(VisibleAnywhere)
	class AFLFood* FoodEquiped;

	UPROPERTY(EditAnywhere)
		float WalkSpeed = 200;

	UPROPERTY(EditAnywhere)
		float ChaseSpeed = 400;

	UPROPERTY(EditAnywhere)
	float TimerPickUpFood;

	UPROPERTY(VisibleAnywhere)
	int RoamNumber = 0;

	UPROPERTY(VisibleAnywhere)
	bool HasFood = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool HasLost;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool HasWon;
	
	UPROPERTY(VisibleAnywhere)
	bool AlreadyDroppedFood = false;
	
	UPROPERTY(VisibleAnywhere)
	float TrackTimer;

	bool HasSeenPlayer = false;
	bool IsTrackingPlayer = false;

	FVector PlayerDirection;

	UFUNCTION()
	void ObjectInRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION()
	void DropFoodOnPoint(AFLTargetPoint* TargetPoint);

	UFUNCTION()
	void PickUpFood(AFLFood* Food);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	AFLEnemyController* EnemyController;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE TArray<AActor*> GetAvailableTargetPoints();

	void SetChaseSpeed();

	void ResetChaseSpeed();

	void SetFood(AFLFood* Food);

	void UpdateHasFoodInBlackBoard();

	bool CheckIfHasWon() { return HasWon; }

	bool CheckIfHasLost() { return HasLost; }

	void SetHasWon(bool Value) { HasWon = Value; }

	void SetHasLost(bool Value) { HasLost = Value; }
	
	void ResetTrackTimer();

	void DropFood();
};
