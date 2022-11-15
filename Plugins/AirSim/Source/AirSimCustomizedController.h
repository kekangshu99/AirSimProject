// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AirSimCustomizedController.generated.h"


/**
 * 
 */

USTRUCT(BlueprintType)
struct FRCData_BP
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float left_x;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float left_y;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float left_z;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float right_x;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float right_y;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float right_z;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        float throttle;
};

UCLASS()
class AIRSIM_API AAirSimCustomizedController : public APlayerController
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        bool OverrideFlightRoute = false;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        FRCData_BP RCData_BP;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        FVector Wind_Direction;

};
