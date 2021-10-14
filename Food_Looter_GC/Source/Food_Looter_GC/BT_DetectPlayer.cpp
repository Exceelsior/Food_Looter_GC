// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_DetectPlayer.h"
#include "MainCharacter.h"
#include "AIEnnemy.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/Vector.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

void UBT_DetectPlayer::ScheduleNextTick(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ScheduleNextTick(OwnerComp, NodeMemory);
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	AEnemyAIController* AICon = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	APawn* AIPawn = AICon->GetPawn();

	if (PlayerController != nullptr) 
	{
		APawn* PlayerPawn = PlayerController->GetPawn();
		FVector PlayerDirection = (PlayerPawn->GetActorLocation() - AIPawn->GetActorLocation()).GetSafeNormal();
		float Dot = FVector::DotProduct(AIPawn->GetActorForwardVector(), PlayerDirection);
		float PlayerAngle = UKismetMathLibrary::DegAcos(Dot);

		if (PlayerAngle <= 45)
		{
			AICon->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 1);
		}
		else AICon->GetBlackboardComp()->SetValueAsInt("HasDetectedPlayer", 0);
	}

	

}


