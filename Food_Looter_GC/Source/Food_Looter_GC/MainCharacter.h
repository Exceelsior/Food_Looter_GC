// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

class AFood;
class UCameraComponent;
class USpringArmComponent;
UCLASS()
class FOOD_LOOTER_GC_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* ArmComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* FoodPoint;

	UPROPERTY()
	UAnimInstance* AnimInstance;
		
	UPROPERTY(EditAnywhere)
	float CameraYawSpeed;

	UPROPERTY(EditAnywhere)
	float CameraPitchSpeed;

	UPROPERTY(EditAnywhere)
	float MaxCameraZoomDistance = 600.0f;

	float CameraZoomValue;

	UPROPERTY(VisibleAnywhere)
	bool HasFood = false;

	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> Food;

	UPROPERTY(VisibleAnywhere)
	AFood* FoodEquiped;
	
	UPROPERTY()
	UWorld* CurrentWorld;
	
	//Functions
	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void Turn(float Rate);

	UFUNCTION()
	void LookUp(float Rate);

	UFUNCTION()
	void CameraZoomIn();

	UFUNCTION()
	void CameraZoomOut();

	UFUNCTION()
	void Interact();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool CheckIfCarryingFood() { return HasFood; };

};
