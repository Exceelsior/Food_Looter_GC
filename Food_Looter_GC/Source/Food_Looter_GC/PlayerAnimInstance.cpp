// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Pawn = TryGetPawnOwner();
}

void UPlayerAnimInstance::UpdateAnimationProperties()
{
	if(Pawn!= nullptr)
	{
		FVector PawnVelocity = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(PawnVelocity.X, PawnVelocity.Y, 0);
		MovementSpeed = LateralSpeed.Size();		
	}
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateAnimationProperties();	
}





