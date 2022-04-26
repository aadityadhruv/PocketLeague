// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "WheeledComponentAI.generated.h"

/**
 * 
 */
UCLASS()
class POCKETLEAGUE_API UWheeledComponentAI : public UWheeledVehicleMovementComponent4W
{
	GENERATED_BODY()
public:
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;
};
