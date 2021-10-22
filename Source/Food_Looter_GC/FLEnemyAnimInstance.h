// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FLEnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class FOOD_LOOTER_GC_API UFLEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	//Initialize variables /
	virtual void NativeInitializeAnimation() override;

	// Where all the animation variables will be updated /
	virtual void UpdateAnimationProperties();

	// The Tick function from the animation instance / 
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnimationProperties")
		float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
		class AFLEnemy* Enemy;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnimationProperties")
	bool HasLost;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnimationProperties")
	bool HasWon;
};
