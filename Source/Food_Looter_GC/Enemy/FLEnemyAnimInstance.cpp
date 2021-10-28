// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEnemyAnimInstance.h"

#include "FLEnemy.h"

void UFLEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Enemy = Cast<AFLEnemy>(TryGetPawnOwner());
}

void UFLEnemyAnimInstance::UpdateAnimationProperties()
{
	if (Enemy != nullptr)
	{
		FVector PawnVelocity = Enemy->GetVelocity();
		FVector LateralSpeed = FVector(PawnVelocity.X, PawnVelocity.Y, 0);
		MovementSpeed = LateralSpeed.Size();
		HasLost = Enemy->CheckIfHasLost();
		HasWon = Enemy->CheckIfHasWon();
	}
}

void UFLEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateAnimationProperties();
}