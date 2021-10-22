// Fill out your copyright notice in the Description page of Project Settings.


<<<<<<< Updated upstream
#include "BTDetectPlayer.h"
=======
#include "BTServiceDetectPlayer.h"
>>>>>>> Stashed changes
#include "FLMainCharacter.h"
#include "DrawDebugHelpers.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/Vector.h"
#include "Kismet/GameplayStatics.h"
#include "FLEnemy.h"

<<<<<<< Updated upstream
void UBTDetectPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
=======
void UBTServiceDetectPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
>>>>>>> Stashed changes
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);
	
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	AFLEnemyController* AIController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
	

	if (PlayerController != nullptr && AIController != nullptr)
	{
		AFLEnemy* AIPawn = Cast<AFLEnemy>(AIController->GetPawn());
		APawn* PlayerPawn = PlayerController->GetPawn();

		FVector AIForwardVector = AIPawn->GetActorForwardVector();
		FVector PlayerDirection = (PlayerPawn->GetActorLocation() - AIPawn->GetActorLocation()).GetSafeNormal();
		
<<<<<<< Updated upstream
		if(PlayerIsInFieldOfView(PlayerDirection, AIForwardVector))
		{
			if(PlayerIsInRange(PlayerDirection, AIPawn->GetActorLocation()+ FVector (0,0,50), 1000, AIPawn))
			{
				AIController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 1);
				AIController->GetBlackboardComp()->SetValueAsInt("HasLostPlayer", 1);
				AIController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", Cast<AFLMainCharacter>(PlayerPawn));
				AIController->GetBlackboardComp()->SetValueAsVector("LastPlayerPosition", PlayerPawn->GetActorLocation());
				AIController->GetBlackboardComp()->SetValueAsVector("PlayerDirection", PlayerPawn->GetActorForwardVector());
				AIPawn->SetChaseSpeed();
			}
=======
		if(PlayerIsInFieldOfView(PlayerDirection, AIForwardVector)
			&& PlayerIsInRange(PlayerDirection, AIPawn->GetActorLocation()+ FVector (0,0,50), 1000, AIPawn))
		{			
			AIController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 1);
			AIController->GetBlackboardComp()->SetValueAsInt("HasLostPlayer", 1);
			AIController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", Cast<AFLMainCharacter>(PlayerPawn));
			AIController->GetBlackboardComp()->SetValueAsVector("LastPlayerPosition", PlayerPawn->GetActorLocation());
			AIController->GetBlackboardComp()->SetValueAsVector("PlayerDirection", PlayerPawn->GetActorForwardVector());
			AIPawn->SetChaseSpeed();			
>>>>>>> Stashed changes
		}
		else
		{
			AIController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 0);
			AIPawn->ResetChaseSpeed();
			AIController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", nullptr);
		}
	}
}

<<<<<<< Updated upstream
bool UBTDetectPlayer::PlayerIsInFieldOfView(FVector PlayerDirection, FVector AIForwardVector)
=======
bool UBTServiceDetectPlayer::PlayerIsInFieldOfView(FVector PlayerDirection, FVector AIForwardVector)
>>>>>>> Stashed changes
{		
	float Dot = FVector::DotProduct(AIForwardVector, PlayerDirection);
	float PlayerAngle = FMath::RadiansToDegrees(FMath::Acos(Dot));

	if (PlayerAngle < 67.5f)
	{
<<<<<<< Updated upstream
		UE_LOG(LogTemp, Warning, TEXT("%f"),PlayerAngle);
=======
>>>>>>> Stashed changes
		return true;
	}
	return false;
}


<<<<<<< Updated upstream
bool UBTDetectPlayer::PlayerIsInRange(FVector PlayerDirection, FVector StartTrace, float MaxDistance, AActor* IgnoreActor)
=======
bool UBTServiceDetectPlayer::PlayerIsInRange(FVector PlayerDirection, FVector StartTrace, float MaxDistance, AActor* IgnoreActor)
>>>>>>> Stashed changes
{
	FHitResult* HitResult = new FHitResult();
	FVector EndTrace = StartTrace + (PlayerDirection * MaxDistance);
	FCollisionQueryParams* TraceParams = new FCollisionQueryParams();
	TraceParams->AddIgnoredActor(IgnoreActor);

<<<<<<< Updated upstream
	//DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Emerald, false, 5, 0, 10);
    
	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECollisionChannel::ECC_WorldStatic, *TraceParams))
=======
	DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Emerald, false, 5, 0, 10);
    
	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_WorldStatic, *TraceParams))
>>>>>>> Stashed changes
	{        
		AFLMainCharacter* MainCharacter = Cast<AFLMainCharacter>(HitResult->GetActor());
        
		//If the MainCharacter is valid, nothing is between the enemy and the player. The enemy can keep chasing the player
		return MainCharacter == nullptr ? false : true;
	}

	return false;
}



