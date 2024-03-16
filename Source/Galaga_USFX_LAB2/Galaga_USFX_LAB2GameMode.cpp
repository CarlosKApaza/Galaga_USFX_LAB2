// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB2GameMode.h"
#include "Galaga_USFX_LAB2Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"

AGalaga_USFX_LAB2GameMode::AGalaga_USFX_LAB2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB2Pawn::StaticClass();
	//NaveEnemigaCaza01 = nullptr
}

void AGalaga_USFX_LAB2GameMode::BeginPlay()
{
	Super::BeginPlay();

	//Ubicaciones para las navez enemigas de caza
	FVector ubicacionNaveCaza01 = FVector(-900.0f, 300.0f, 180.0f);
	FVector ubicacionNaveCaza02 = FVector(-900.0f, 500.0f, 180.0f);

	//Ubicaciones para las navez enemigas de transporte
	//FVector ubicacionNaveTransporte01 = FVector(-900.0f, 700.0f, 180.0f);


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr) {

		//spawn the projectile
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		//NaveEnemigaTransporte01 = world->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
	}

}

