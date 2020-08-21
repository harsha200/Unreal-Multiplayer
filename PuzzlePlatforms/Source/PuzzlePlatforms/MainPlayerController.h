// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Widgets")
	TSubclassOf<UUserWidget> WBP_MainHUDAsset;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* BP_MainHUD;

protected:
	virtual void BeginPlay() override;
};
