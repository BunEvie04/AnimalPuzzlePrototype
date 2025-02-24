// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimalPuzzleGameMode.h"
#include "AnimalPuzzleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimalPuzzleGameMode::AAnimalPuzzleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Dynamic/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = BP_ThirdPersonCharacter.Class;
	}
}
