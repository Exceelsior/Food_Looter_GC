// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

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

	UPROPERTY()
	UAnimInstance* AnimInstance;

	//UPROPERTY()
	//UFloatProperty* MoveSpeedProp;
		
	UPROPERTY(EditAnywhere)
	float CameraYawSpeed;

	UPROPERTY(EditAnywhere)
	float CameraPitchSpeed;

	UPROPERTY(EditAnywhere)
	float MaxCameraZoomDistance = 400.0f;

	float CameraZoomValue;

	UPROPERTY()
	UWorld* CurrentWorld;
	
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

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
