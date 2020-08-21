// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatformsGameMode.h"
#include "PuzzlePlatformsCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MainPlayerController.h"

APuzzlePlatformsGameMode::APuzzlePlatformsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/BP_Main"));
	/*PlayerControllerClass = AMainPlayerController::StaticClass();*/

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
