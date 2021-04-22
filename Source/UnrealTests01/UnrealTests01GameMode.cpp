// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealTests01GameMode.h"
#include "UnrealTests01Pawn.h"
#include "UnrealTests01Hud.h"

AUnrealTests01GameMode::AUnrealTests01GameMode()
{
	DefaultPawnClass = AUnrealTests01Pawn::StaticClass();
	HUDClass = AUnrealTests01Hud::StaticClass();
}
