// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealPDXGameMode.h"
#include "UnrealPDXHUD.h"
#include "UnrealPDXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealPDXGameMode::AUnrealPDXGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealPDXHUD::StaticClass();
}
