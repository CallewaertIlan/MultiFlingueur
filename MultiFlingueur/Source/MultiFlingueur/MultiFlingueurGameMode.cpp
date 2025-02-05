// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiFlingueurGameMode.h"
#include "MultiFlingueurCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiFlingueurGameMode::AMultiFlingueurGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
