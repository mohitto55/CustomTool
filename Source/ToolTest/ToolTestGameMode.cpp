// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolTestGameMode.h"
#include "ToolTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToolTestGameMode::AToolTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
