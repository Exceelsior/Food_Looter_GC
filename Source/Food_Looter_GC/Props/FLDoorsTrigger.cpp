
//Class used to animate main dungeon doors when enemies are entering or exiting the room
//Does not work very well as some enemies keep getting stuck between a door and a wall...
//Too bad, it was cool :(

#include "FLDoorsTrigger.h"

#include "../Enemy/FLEnemy.h"
#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"


AFLDoorsTrigger::AFLDoorsTrigger()
{

	PrimaryActorTick.bCanEverTick = true;

	BoxColliderComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	BoxColliderComponent->SetupAttachment(RootComponent);
	BoxColliderComponent->OnComponentBeginOverlap.AddDynamic(this, &AFLDoorsTrigger::OnEntered);
	BoxColliderComponent->OnComponentEndOverlap.AddDynamic(this, &AFLDoorsTrigger::OnExited);

}


void AFLDoorsTrigger::BeginPlay()
{
	Super::BeginPlay();
	if(DoorSequence && LevelSequenceActor && SequencePlayer == nullptr)
	{
		SequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(GetWorld(), DoorSequence, FMovieSceneSequencePlaybackSettings(), LevelSequenceActor);
	}
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

