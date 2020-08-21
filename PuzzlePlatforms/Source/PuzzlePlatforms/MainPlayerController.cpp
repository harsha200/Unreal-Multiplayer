// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("PlayerController"));

	if (WBP_MainHUDAsset)
	{
		BP_MainHUD = CreateWidget<UUserWidget>(this, WBP_MainHUDAsset);
		if (BP_MainHUD)
		{
			UE_LOG(LogTemp, Warning, TEXT("PlayerController1"));
			BP_MainHUD->AddToViewport();
		}
	}
}