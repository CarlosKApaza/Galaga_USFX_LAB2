// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB2GameMode.h"
#include "Galaga_USFX_LAB2Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaKamikaze.h"

AGalaga_USFX_LAB2GameMode::AGalaga_USFX_LAB2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB2Pawn::StaticClass();
	//NaveEnemigaCaza01 =nullptr
}

void AGalaga_USFX_LAB2GameMode::BeginPlay()
{
	Super::BeginPlay();

	//Ubicaciones para las navez enemigas de caza
	FVector ubicacionNaveCaza01 = FVector(-380.0f, 50.0f, 180.0f);
	FVector ubicacionNaveCaza02 = FVector(-380.0f, 200.0f, 180.0f);

	//Ubicaciones para las navez enemigas de transporte
	FVector ubicacionNaveTransporte01 = FVector(-380.0f, -50.0f, 180.0f);
	FVector ubicacionNaveTransporte02 = FVector(-380.0f, -200.0f, 180.0f);

	//Ubicaciones para las navez enemigas despia
	FVector ubicacionNaveEspia01 = FVector(-380.0f, 350.0f, 180.0f);
	FVector ubicacionNaveEspia02 = FVector(-380.0f, 500.0f, 180.0f);

	//Ubicaciones para las navez enemigas de reabastecimiento
	FVector ubicacionNaveReabastecimiento01 = FVector(-380.0f, -350.0f, 180.0f);
	FVector ubicacionNaveReabastecimiento02 = FVector(-380.0f, -500.0f, 180.0f);

	//Ubicaciones para las navez enemigas de nodriza
	FVector ubicacionNaveNodriza01 = FVector(-380.0f, 650.0f, 180.0f);
	FVector ubicacionNaveNodriza02 = FVector(-380.0f, 800.0f, 180.0f);

	//Ubicaciones para las navez enemigas de kamikaze
	FVector ubicacionNaveKamikaze01 = FVector(-380.0f, -650.0f, 180.0f);
	FVector ubicacionNaveKamikaze02 = FVector(-380.0f, -800.0f, 180.0f);

	//Rotacion de las naves enemigas
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		//spawenado las naves de la clase NaveEnemigaCaza
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		//spawenado las naves de la clase NaveEnemigaTransporte
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);
		//spawenado las naves de la clase NaveEnemigaEspia
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia01, rotacionNave);
		NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia02, rotacionNave);
		//spawenado las naves de la clase NaveEnemigaReabastecimiento
		NaveEnemigaReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNaveReabastecimiento01, rotacionNave);
		NaveEnemigaReabastecimiento02 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNaveReabastecimiento02, rotacionNave);
		//spawenado las naves de la clase NaveEnemigaNozdriza
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza01, rotacionNave);
		NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza02, rotacionNave);
		//spawenado las naves de la clase NaveEnemigaKamikaze
		NaveEnemigaKamikaze01 = World->SpawnActor<ANaveEnemigaKamikaze>(ubicacionNaveKamikaze01, rotacionNave);
		NaveEnemigaKamikaze02 = World->SpawnActor<ANaveEnemigaKamikaze>(ubicacionNaveKamikaze02, rotacionNave);
	}
}

