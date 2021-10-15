// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FLPlayerAnimInstance.generated.h"


UCLASS()
class FOOD_LOOTER_GC_API UFLPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	public:
	//Initialize variables /
	virtual void NativeInitializeAnimation() override;

	// Where all the animation variables will be updated /
	virtual void UpdateAnimationProperties();

	// The Tick function from the animation instance / 
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	// Return the character movement speed /
	float GetCharacterMovementSpeed();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnimationProperties")
	float MovementSpeed;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnimationProperties")
	bool IsCarryingFood;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AnimationProperties")
	float CarryMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
	class AFLMainCharacter* Player;

};
