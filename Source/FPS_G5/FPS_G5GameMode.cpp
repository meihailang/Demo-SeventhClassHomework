// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_G5GameMode.h"
#include "FPS_G5Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS_G5GameMode::AFPS_G5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
