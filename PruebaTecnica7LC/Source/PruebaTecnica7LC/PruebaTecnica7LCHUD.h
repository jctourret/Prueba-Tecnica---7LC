// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PruebaTecnica7LCHUD.generated.h"

UCLASS()
class APruebaTecnica7LCHUD : public AHUD
{
	GENERATED_BODY()

public:
	APruebaTecnica7LCHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

