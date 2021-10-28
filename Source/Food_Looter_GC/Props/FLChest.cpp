// Fill out your copyright notice in the Description page of Project Settings.


#include "FLChest.h"

#include "FLFood.h"
#include "../Bidon/FLGameState.h"
#include "../UI/FLHUD.h"
#include "../Bidon/Food_Looter_GCGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFLChest::AFLChest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AFLChest::OnFoodDrop);
}

// Called when the game starts or when spawned
void AFLChest::BeginPlay()
{
	Super::BeginPlay();

	GM = Cast<AFLGameState>(UGameplayStatics::GetGameMode(GetWorld())->GetGameState<AFLGameState>());
}

// Called every frame
void AFLChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFLChest::OnFoodDrop(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	AFLFood* TempFood = Cast<AFLFood>(OtherActor);
	GM->NbFoodPlayer += TempFood->GetPts();
	GM->NbFoodInRoom -= 1;

	GM->CompareFood();
	
	TempFood->Destroy();
}