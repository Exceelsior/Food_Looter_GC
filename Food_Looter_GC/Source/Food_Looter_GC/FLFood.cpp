// Fill out your copyright notice in the Description page of Project Settings.


#include "FLFood.h"

// Sets default values
AFLFood::AFLFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FoodMesh"));
	RootComponent = StaticMesh;
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(StaticMesh);

}

// Called when the game starts or when spawned
void AFLFood::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFLFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AFLFood::GetPts() const
{
	return Pts;
}

float AFLFood::GetDivision() const
{
	return DividePlayerSpeedBy;
}

UStaticMeshComponent* AFLFood::GetMesh()
{
	return StaticMesh;
}
