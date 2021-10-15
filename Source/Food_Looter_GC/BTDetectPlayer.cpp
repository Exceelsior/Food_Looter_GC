// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDetectPlayer.h"
#include "FLMainCharacter.h"
#include "DrawDebugHelpers.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/Vector.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "FLEnemy.h"

void UBTDetectPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);
	
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	AFLEnemyController* AIController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
	

	if (PlayerController != nullptr && AIController != nullptr)
	{
		AFLEnemy* AIPawn = Cast<AFLEnemy>(AIController->GetPawn());
		APawn* PlayerPawn = PlayerController->GetPawn();

		FVector AIForwardVector = AIPawn->GetActorForwardVector();
		
		if(PlayerIsInFieldOfView(PlayerPawn->GetActorLocation(), AIPawn->GetActorLocation(), AIForwardVector)
		   && PlayerIsInRange(AIForwardVector, AIPawn->GetActorLocation(), 1000, AIPawn))
		{
			AIController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 1);
			AIController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", Cast<AFLMainCharacter>(PlayerPawn));
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

bool UBTDetectPlayer::PlayerIsInFieldOfView(FVector PlayerPosition, FVector AIPosition, FVector AIForwardVector)
{
	
	FVector PlayerDirection = ( PlayerPosition - AIPosition).GetSafeNormal();
	float Dot = FVector::DotProduct(AIForwardVector, PlayerDirection);
	float PlayerAngle = UKismetMathLibrary::DegAcos(Dot);

	if (PlayerAngle <= 135)
	{
		return true;
	}
	else return false;
}


bool UBTDetectPlayer::PlayerIsInRange(FVector ForwardVector, FVector StartTrace, float MaxDistance, AActor* IgnoreActor)
{
	FHitResult* HitResult = new FHitResult();
	FVector EndTrace = StartTrace + (ForwardVector * MaxDistance);
	FCollisionQueryParams* TraceParams = new FCollisionQueryParams();
	TraceParams->AddIgnoredActor(IgnoreActor);

	//DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Emerald, true, -1, 0, 10);
    
	if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECollisionChannel::ECC_WorldStatic, *TraceParams))
	{        
		AFLMainCharacter* MainCharacter = Cast<AFLMainCharacter>(HitResult->GetActor());
        
		//If the MainCharacter is valid, nothing is between the enemy and the player. The enemy can keep chasing the player
		return MainCharacter == nullptr ? false : true;
	}

	return false;
}



