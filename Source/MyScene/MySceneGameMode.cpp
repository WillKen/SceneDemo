// Copyright Epic Games, Inc. All Rights Reserved.

#include "MySceneGameMode.h"
#include "MySceneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMySceneGameMode::AMySceneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
