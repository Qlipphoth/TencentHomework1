// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProj01GameMode.h"
#include "TestProj01Character.h"
#include "UObject/ConstructorHelpers.h"

ATestProj01GameMode::ATestProj01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
