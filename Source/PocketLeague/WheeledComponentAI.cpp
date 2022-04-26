// Fill out your copyright notice in the Description page of Project Settings.

#include "WheeledComponentAI.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

void UWheeledComponentAI::RequestDirectMove(const FVector &MoveVelocity, bool bForceMaxSpeed)
{
    Super::RequestDirectMove(MoveVelocity, bForceMaxSpeed);
    FVector VehicleLocation = GetOwner()->GetActorLocation();
    FVector Destination = VehicleLocation + MoveVelocity * GetWorld()->GetDeltaSeconds();
    DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(), Destination, FColor::Red, false, 1.f, 0, 3.f);
}
