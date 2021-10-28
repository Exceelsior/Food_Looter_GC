// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FLMainCharacter.generated.h"

class AFLFood;
class UCameraComponent;
class USpringArmComponent;
class AFLGameState;
class AFLSafeZone;
class AFLChair;

UCLASS()
class FOOD_LOOTER_GC_API AFLMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFLMainCharacter();

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	USceneCaptureComponent2D* FaceCameraComponent;
		
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
	AFLFood* FoodEquiped;
	
	UPROPERTY()
	UWorld* CurrentWorld;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsInSafeZone;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool HasLost;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool HasWon;

	UPROPERTY(VisibleAnywhere)
	AFLSafeZone* PlayerSafeZone;
	
	UPROPERTY(VisibleAnywhere)
	AFLGameState* GameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* ChairCameraLocationComponent;

	UPROPERTY()
	AFLChair* AvailableChair;

	UPROPERTY()
	bool IsSat;

	UPROPERTY()
	FTransform PreviousCameraTransform;
	
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

	UFUNCTION()
	void OnTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION()
	void OnEndTouched(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UFUNCTION()
	void PauseGame();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool CheckIfCarryingFood() { return HasFood; };

	bool CheckIfHasWon() { return HasWon; }

	bool CheckIfHasLost() { return HasLost; }

	void SetHasWon(bool Value) { HasWon = Value; }

	void SetHasLost(bool Value) { HasLost = Value; }

	void SetIsSat(bool Value) {IsSat = Value;}

	bool CheckIfSat() {return IsSat;}
	
	
};
