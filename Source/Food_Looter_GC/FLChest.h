// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FLGameState.h"
#include "GameFramework/Actor.h"
#include "FLChest.generated.h"

class AFLGameManager;
class UBoxComponent;
UCLASS()
class FOOD_LOOTER_GC_API AFLChest : public AActor
{
    GENERATED_BODY()

    private:
    UPROPERTY(EditAnywhere)
    AFLGameState* GM;

    public:
    // Sets default values for this actor's properties
    AFLChest();

    protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UBoxComponent* BoxCollision;

    public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void OnFoodDrop(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
};