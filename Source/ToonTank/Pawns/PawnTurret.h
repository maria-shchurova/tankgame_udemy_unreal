// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "PawnTurret.generated.h"


UCLASS()
class TOONTANK_API APawnTurret : public ABasePawn
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.0f;

	void CheckFireCondition();

	FTimerHandle FireRateTimerHandle;

public:

	//APawnTurret();

	virtual void Tick(float DeltaTime) override;


protected:

	virtual void BeginPlay() override;

};
