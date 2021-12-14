// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson_FantasyGameMode.h"
#include "ThirdPerson_FantasyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson_FantasyGameMode::AThirdPerson_FantasyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
