// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "UnrealTests01Hud.generated.h"


UCLASS(config = Game)
class AUnrealTests01Hud : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealTests01Hud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
