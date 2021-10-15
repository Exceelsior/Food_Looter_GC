// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemyAnimInstance.h"

void UFLEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Pawn = TryGetPawnOwner();
}

void UFLEnemyAnimInstance::UpdateAnimationProperties()
{
	if (Pawn != nullptr)
	{
		FVector PawnVelocity = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(PawnVelocity.X, PawnVelocity.Y, 0);
		MovementSpeed = LateralSpeed.Size();
	}
}

void UFLEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateAnimationProperties();
}