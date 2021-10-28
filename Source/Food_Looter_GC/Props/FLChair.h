// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "FLChair.generated.h"

class AFLMainCharacter;

UCLASS()
class FOOD_LOOTER_GC_API AFLChair : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFLChair();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* StandUpLocationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SitLocationComponent;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Sit(AFLMainCharacter* MainCharacter, bool IsNowSat);

};
