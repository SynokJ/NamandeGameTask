// Copyright Epic Games, Inc. All Rights Reserved.

#include "task_00GameMode.h"
#include "task_00Character.h"
#include "UObject/ConstructorHelpers.h"

Atask_00GameMode::Atask_00GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
