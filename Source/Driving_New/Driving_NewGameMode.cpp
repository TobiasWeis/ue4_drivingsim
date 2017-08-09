// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Driving_NewGameMode.h"
#include "Driving_NewPawn.h"
#include "Driving_NewHud.h"

ADriving_NewGameMode::ADriving_NewGameMode()
{
	DefaultPawnClass = ADriving_NewPawn::StaticClass();
	HUDClass = ADriving_NewHud::StaticClass();
}
