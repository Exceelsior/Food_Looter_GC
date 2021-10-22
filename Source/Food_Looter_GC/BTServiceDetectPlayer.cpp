// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceDetectPlayer.h"
#include "FLMainCharacter.h"
#include "DrawDebugHelpers.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/Vector.h"
#include "Kismet/GameplayStatics.h"
#include "FLEnemy.h"

void UBTServiceDetectPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
		
		
		if(PlayerIsInFieldOfView(PlayerDirection, AIForwardVector)
			&& PlayerIsInRange(PlayerDirection, AIPawn->GetActorLocation()+ FVector (0,0,50), 1000, AIPawn))
		{			
			AIController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 1);
			AIController->GetBlackboardComp()->SetValueAsInt("HasLostPlayer", 1);
			AIController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", Cast<AFLMainCharacter>(PlayerPawn));
			AIController->GetBlackboardComp()->SetValueAsVector("LastPlayerPosition", PlayerPawn->GetActorLocation());
			AIController->GetBlackboardComp()->SetValueAsVector("PlayerDirection", PlayerPawn->GetActorForwardVector());
			AIPawn->SetChaseSpeed();	
		}
		else
		{
			AIController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 0);
			AIPawn->ResetChaseSpeed();
			AIController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", nullptr);
		}
	}
}

bool UBTServiceDetectPlayer::PlayerIsInFieldOfView(FVector PlayerDirection, FVector AIForwardVector)
{		
	float Dot = FVector::DotProduct(AIForwardVector, PlayerDirection);
	float PlayerAngle = FMath::RadiansToDegrees(FMath::Acos(Dot));

	if (PlayerAngle < 67.5f)
	{
		return true;
	}
	return false;
}


bool UBTServiceDetectPlayer::PlayerIsInRange(FVector PlayerDirection, FVector StartTrace, float MaxDistance, AActor* IgnoreActor)
{
	FHitResult* HitResult = new FHitResult();
	FVector EndTrace = StartTrace + (PlayerDirection * MaxDistance);
	FCollisionQueryParams* TraceParams = new FCollisionQueryParams();
	TraceParams->AddIgnoredActor(IgnoreActor);

	//DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Emerald, false, 5, 0, 10);
    
	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECollisionChannel::ECC_WorldStatic, *TraceParams))

		DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Emerald, false, 5, 0, 10);
    
	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_WorldStatic, *TraceParams))
	{        
		AFLMainCharacter* MainCharacter = Cast<AFLMainCharacter>(HitResult->GetActor());
        
		//If the MainCharacter is valid, nothing is between the enemy and the player. The enemy can keep chasing the player
		return MainCharacter == nullptr ? false : true;
	}

	return false;
}



