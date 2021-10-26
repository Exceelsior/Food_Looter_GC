// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceDetectPlayer.h"
#include "FLMainCharacter.h"
#include "DrawDebugHelpers.h"
#include "FLEnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/Vector.h"
#include "Kismet/GameplayStatics.h"
#include "FLEnemy.h"
#include "FLGameManager.h"
#include "GameFramework/GameModeBase.h"

void UBTServiceDetectPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);
	
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	AFLEnemyController* EnemyController = Cast<AFLEnemyController>(OwnerComp.GetAIOwner());
	
	if (PlayerController != nullptr && EnemyController != nullptr)
	{
		AFLEnemy* EnemyPawn = Cast<AFLEnemy>(EnemyController->GetPawn());
		APawn* PlayerPawn = PlayerController->GetPawn();

		FVector AIForwardVector = EnemyPawn->GetActorForwardVector();
		FVector PlayerDirection = (PlayerPawn->GetActorLocation() - EnemyPawn->GetActorLocation()).GetSafeNormal();
		
		
		if(PlayerIsInFieldOfView(PlayerDirection, AIForwardVector)
			&& PlayerIsInRange(PlayerDirection, EnemyPawn->GetActorLocation()+ FVector (0,0,50), 1000, EnemyPawn))
		{			
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 1);
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasSeenPlayer",1);
			EnemyController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", Cast<AFLMainCharacter>(PlayerPawn));
			EnemyController->GetBlackboardComp()->SetValueAsVector("LastPlayerPosition", PlayerPawn->GetActorLocation());
			EnemyPawn->PlayerDirection = PlayerPawn->GetActorForwardVector();
			EnemyPawn->SetChaseSpeed();

			//TODO : L'ennemi lâche sa food
			if(EnemyPawn->HasFood)
			{
				EnemyPawn->DropFood();
			}
		}
		else
		{
			EnemyController->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 0);
			EnemyPawn->ResetChaseSpeed();
			EnemyController->GetBlackboardComp()->SetValueAsObject("PlayerPosition", nullptr);
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

/*void FCollisionQueryParams::AddIgnoredEnemy(const AFLEnemy* InIgnoreEnemy)
{
	if(InIgnoreEnemy)
	{
		IgnoreActors.Add(InIgnoreEnemy->GetUniqueID());
	}
}

void FCollisionQueryParams::AddIgnoredEnemies(const TArray<AFLEnemy*> &InIgnoreEnemies)
{
	for (int32 Idx = 0; Idx < InIgnoreEnemies.Num(); ++Idx)
	{
		AddIgnoredEnemy(InIgnoreEnemies[Idx]);
	}
}*/



