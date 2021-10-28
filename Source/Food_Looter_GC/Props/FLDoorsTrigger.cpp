// Fill out your copyright notice in the Description page of Project Settings.


#include "FLDoorsTrigger.h"

#include "../Enemy/FLEnemy.h"
#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"

// Sets default values
AFLDoorsTrigger::AFLDoorsTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxColliderComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	BoxColliderComponent->SetupAttachment(RootComponent);
	BoxColliderComponent->OnComponentBeginOverlap.AddDynamic(this, &AFLDoorsTrigger::OnEntered);
	BoxColliderComponent->OnComponentEndOverlap.AddDynamic(this, &AFLDoorsTrigger::OnExited);

}

// Called when the game starts or when spawned
void AFLDoorsTrigger::BeginPlay()
{
	Super::BeginPlay();
	if(DoorSequence && LevelSequenceActor && SequencePlayer == nullptr)
	{
		SequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(GetWorld(), DoorSequence, FMovieSceneSequencePlaybackSettings(), LevelSequenceActor);
	}
}

// Called every frame
void AFLDoorsTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFLDoorsTrigger::OnEntered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(Cast<AFLEnemy>(OtherActor) != nullptr)
	{
		if (!SequencePlayer->IsPlaying())
		{
			SequencePlayer->Play();
		}
	}
}

void AFLDoorsTrigger::OnExited(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(Cast<AFLEnemy>(OtherActor) != nullptr)
	{
		if (!SequencePlayer->IsPlaying())
		{
			SequencePlayer->PlayReverse();
		}
	}
}

