// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpookyCoffeeJamGameMode.h"
#include "SpookyCoffeeJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpookyCoffeeJamGameMode::ASpookyCoffeeJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
