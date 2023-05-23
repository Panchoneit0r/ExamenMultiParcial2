// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExamenParcial2GameMode.h"
#include "ExamenParcial2Character.h"
#include "UObject/ConstructorHelpers.h"

AExamenParcial2GameMode::AExamenParcial2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
