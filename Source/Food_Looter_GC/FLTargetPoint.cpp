// Fill out your copyright notice in the Description page of Project Settings.


#include "FLTargetPoint.h"

AFLTargetPoint::AFLTargetPoint()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	SphereComponent->SetupAttachment(RootComponent);
}

bool AFLTargetPoint::GetIsFull()
{
	return IsFull;
}

void AFLTargetPoint::SetIsFull(bool b)
{
	IsFull = b;
}
