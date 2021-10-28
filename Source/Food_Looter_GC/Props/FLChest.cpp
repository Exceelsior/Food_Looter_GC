// Fill out your copyright notice in the Description page of Project Settings.


#include "FLChest.h"

#include "FLFood.h"
#include "../Core/FLGameState.h"
#include "../UI/FLHUD.h"
#include "../Core/Food_Looter_GCGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFLChest::AFLChest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BasePartMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Chest lower part mesh"));

	UpperPartMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Chest upper part mesh"));
	UpperPartMeshComponent->SetupAttachment(BasePartMeshComponent);
	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollision->SetupAttachment(BasePartMeshComponent);
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

	if(GM && TempFood)
	{
		GM->NbFoodPlayer += TempFood->GetPts();
		GM->NbFoodInRoom -= 1;

		GM->CompareFood();
	
		TempFood->Destroy();
	}
	
}