// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

void AMainCharacter::MoveForward(float AxisValue)
{
	// Move at 100 units per second forward or backward
	CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;
}

void AMainCharacter::MoveRight(float AxisValue)
{
	// Move at 100 units per second right or left
	CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;
}

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	USpringArmComponent* armComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	armComponent->SetupAttachment(RootComponent);
	armComponent->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 30.0f), FRotator(-50.0f, 0.0f, 0.0f));
	armComponent->TargetArmLength = 400.0f;
	armComponent->bEnableCameraLag = true;
	armComponent->CameraLagSpeed = 6.0f;
	armComponent->bDrawDebugLagMarkers = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraMain"));
	CameraComponent->SetupAttachment(armComponent, USpringArmComponent::SocketName);
	
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &AMainCharacter::MoveRight);

}

