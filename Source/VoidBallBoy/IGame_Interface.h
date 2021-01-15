// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGame_Interface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIGame_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VOIDBALLBOY_API IIGame_Interface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//calculateRute



	UFUNCTION(BlueprintNative, BlueprintCallable, Category = "Interaction")
	void AbsorbEnemies(AActor* _target);

	//absorbEnemies
	//absorbItems
	//checkPlayerHealth
	//killVoidBall
	//deathMusic
	//checkItemAbsorption
	//activateHUDwithBVBMode
	//updateVoidBallMode
};	
