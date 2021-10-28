// Fill out your copyright notice in the Description page of Project Settings.


#include "FLSafeZone.h"

// Sets default values
AFLSafeZone::AFLSafeZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	BoxComponent->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void AFLSafeZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFLSafeZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

