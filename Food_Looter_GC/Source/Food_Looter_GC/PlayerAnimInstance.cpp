// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "MainCharacter.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Player = Cast<AMainCharacter>(TryGetPawnOwner());
}

void UPlayerAnimInstance::UpdateAnimationProperties()
{
	if(Player!= nullptr)
	{
		FVector PawnVelocity = Player->GetVelocity();
		FVector LateralSpeed = FVector(PawnVelocity.X, PawnVelocity.Y, 0);
		MovementSpeed = LateralSpeed.Size();
		IsCarryingFood = Player->CheckIfCarryingFood();
	}
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateAnimationProperties();	
}





