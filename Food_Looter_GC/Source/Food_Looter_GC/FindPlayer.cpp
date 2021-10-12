// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayer.h"
#include "MainCharacter.h"
#include "AIEnnemy.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Math/Vector.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

bool UFindPlayer::CheckPlayerPosition(UBehaviorTreeComponent* OwnerComp)
{
	

	/*AMainCharacter* Player = Cast<AMainCharacter>(APlayerController::GetPawn());

	AEnemyAIController* AICon = Cast<AEnemyAIController>(OwnerComp->GetAIOwner());
	APawn* AI = AICon->GetPawn();

	FVector PlayerDirection = Player->GetActorLocation()-AI->GetActorLocation();
	float Dot = FVector::DotProduct(AI->GetActorForwardVector(), PlayerDirection);
	float PlayerAngle = UKismetMathLibrary::DegAcos(Dot);

	if(PlayerAngle <= 45)
	{
		return true;
	}
	else return false;*/
	
}

UFindPlayer::UFindPlayer()
{
	
}


