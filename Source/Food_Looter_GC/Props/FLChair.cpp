// Fill out your copyright notice in the Description page of Project Settings.


#include "FLChair.h"
#include "../Player/FLMainCharacter.h"

// Sets default values
AFLChair::AFLChair()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
	StaticMeshComponent->SetupAttachment(RootComponent);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	SphereComponent->SetupAttachment(StaticMeshComponent);

	StandUpLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Location where the player will stand up"));
	StandUpLocationComponent->SetupAttachment(StaticMeshComponent);

	SitLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Location where the player will sit"));
	SitLocationComponent->SetupAttachment(StaticMeshComponent);

	
	
}

// Called when the game starts or when spawned
void AFLChair::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFLChair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFLChair::Sit(AFLMainCharacter* MainCharacter, bool IsNowSat)
{

	MainCharacter->SetIsSat(IsNowSat);
	
	if(IsNowSat)
	{
		StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		MainCharacter->SetActorTransform(SitLocationComponent->GetComponentTransform());
		MainCharacter->GetController()->SetIgnoreMoveInput(true);
		MainCharacter->GetController()->SetIgnoreLookInput(true);
	}
	else
	{
		StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		MainCharacter->SetActorTransform(StandUpLocationComponent->GetComponentTransform());
		MainCharacter->GetController()->SetIgnoreMoveInput(false);
		MainCharacter->GetController()->SetIgnoreLookInput(false);
	}

	
	
}


