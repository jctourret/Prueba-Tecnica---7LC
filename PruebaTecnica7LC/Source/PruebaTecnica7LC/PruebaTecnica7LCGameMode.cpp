// Copyright Epic Games, Inc. All Rights Reserved.

#include "PruebaTecnica7LCGameMode.h"
#include "PruebaTecnica7LCHUD.h"
#include "PruebaTecnica7LCCharacter.h"
#include "UObject/ConstructorHelpers.h"

APruebaTecnica7LCGameMode::APruebaTecnica7LCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APruebaTecnica7LCHUD::StaticClass();
}
