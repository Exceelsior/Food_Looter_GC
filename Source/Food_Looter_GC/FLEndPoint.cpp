// Fill out your copyright notice in the Description page of Project Settings.


#include "FLEndPoint.h"

#include "FLEnemy.h"
#include "FLGameManager.h"
#include "Food_Looter_GCGameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFLEndPoint::AFLEndPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AFLEndPoint::OnTouched);

}

// Called when the game starts or when spawned
void AFLEndPoint::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<AFood_Looter_GCGameModeBase>(GetWorld()->GetAuthGameMode());
	GameMode->SpawnPoint = this;
}

// Called every frame
void AFLEndPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFLEndPoint::OnTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AFLEnemy* Enemy = Cast<AFLEnemy>(OtherActor);

	if(Enemy)
	{
		GetWorld()->GetAuthGameMode()->GetGameState<AFLGameManager>()->RemoveEnemy(Enemy);
		Enemy->Destroy();
	}
}

