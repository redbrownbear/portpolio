// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Weapon/BasicWeapon.h"
#include "WeapnRiffle.generated.h"


/**
 * 
 */
UCLASS()
class PROJECTDD_API AWeapnRiffle : public ABasicWeapon
{
	GENERATED_BODY()

private:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle) override;
	virtual void Attack() override;
	virtual void OnAim();
	virtual void EndAim();

	virtual void Tick(float DeltaTime) override;

	void UpdateDesiredAimRotation(const float DeltaTime);

private:
	FRotator DesiredAimRotation;
	FTransform MuzzleTransform;
};
