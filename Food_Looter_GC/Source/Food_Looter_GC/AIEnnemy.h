// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class UBehaviorTree;

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIEnnemy.generated.h"

UCLASS()
class FOOD_LOOTER_GC_API AAIEnnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAIEnnemy();

	UPROPERTY(EditAnywhere, Category="AI")
	UBehaviorTree* BehaviorTree;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
