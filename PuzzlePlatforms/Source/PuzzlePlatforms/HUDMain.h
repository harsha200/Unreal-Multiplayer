// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuSystem/MenuWidget.h"
#include "HUDMain.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UHUDMain : public UMenuWidget
{
	GENERATED_BODY()

protected: 
	virtual bool Initialize();
	
};
