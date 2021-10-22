// Fill out your copyright notice in the Description page of Project Settings.


#include "FLPlayerAnimInstance.h"
#include "FLMainCharacter.h"

void UFLPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Player = Cast<AFLMainCharacter>(TryGetPawnOwner());
}

void UFLPlayerAnimInstance::UpdateAnimationProperties()
{
	if(Player!= nullptr)
	{
		FVector PawnVelocity = Player->GetVelocity();
		FVector LateralSpeed = FVector(PawnVelocity.X, PawnVelocity.Y, 0);
		MovementSpeed = LateralSpeed.Size();
		IsCarryingFood = Player->CheckIfCarryingFood();
		HasLost = Player->CheckIfHasLost();
		HasWon = Player->CheckIfHasWon();
	}
}

void UFLPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateAnimationProperties();	
}





