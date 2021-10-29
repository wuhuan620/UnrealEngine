// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Cplus_demoHUD.generated.h"

UCLASS()
class ACplus_demoHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACplus_demoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

