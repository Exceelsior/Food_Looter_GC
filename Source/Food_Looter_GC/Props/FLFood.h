// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameMode.h"
#include "FLFood.generated.h"

UCLASS()
class FOOD_LOOTER_GC_API AFLFood : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	AGameMode* GM;
	
public:	
	// Sets default values for this actor's properties
	AFLFood();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere)
	ATargetPoint* MyFoodPoint;

	UPROPERTY(EditAnywhere)
	int Pts;

	UPROPERTY(EditAnywhere)
	float DividePlayerSpeedBy;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	int GetPts() const;

	UFUNCTION()
	float GetDivision() const;

	UFUNCTION()
	UStaticMeshComponent* GetMesh();

	UFUNCTION()
	void SetMyFoodPoint(ATargetPoint* Tp);

	UFUNCTION()
	ATargetPoint* GetMyFoodPoint();

};
