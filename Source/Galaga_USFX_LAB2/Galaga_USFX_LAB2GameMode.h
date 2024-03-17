// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "Galaga_USFX_LAB2GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB2GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaCaza* NaveEnemigaCaza02;
};



