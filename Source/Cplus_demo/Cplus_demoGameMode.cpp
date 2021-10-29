// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cplus_demoGameMode.h"
#include "Cplus_demoHUD.h"
#include "Cplus_demoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACplus_demoGameMode::ACplus_demoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACplus_demoHUD::StaticClass();
}
