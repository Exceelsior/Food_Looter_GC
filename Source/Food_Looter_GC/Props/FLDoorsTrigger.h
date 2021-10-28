// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "FLDoorsTrigger.generated.h"

UCLASS()
class FOOD_LOOTER_GC_API AFLDoorsTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFLDoorsTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxColliderComponent;
	
	UPROPERTY()
	class ULevelSequencePlayer* SequencePlayer;
	
	UPROPERTY(EditAnywhere)
	class ULevelSequence* DoorSequence;

	UPROPERTY(EditAnywhere)
	class ALevelSequenceActor* LevelSequenceActor;
	
	UFUNCTION()
	void OnEntered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnExited(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	

};
