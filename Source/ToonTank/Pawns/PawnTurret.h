// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "PawnTurret.generated.h"

class APawnTank;
UCLASS()
class TOONTANK_API APawnTurret : public ABasePawn
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRange = 500.0f;
	FTimerHandle FireRateTimerHandle;
	APawnTank* PlayerPawn;

	void CheckFireCondition();

	float ReturnDistanceToPlayer();

public:

	//APawnTurret();

	virtual void Tick(float DeltaTime) override;


protected:

	virtual void BeginPlay() override;

	void HandleDestruction() override;
};
