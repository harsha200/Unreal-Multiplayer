// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformsGameInstance.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

#include "MenuSystem/MainMenu.h"
#include "MenuSystem/MenuWidget.h"
#include "PlatformTrigger.h"

UPuzzlePlatformsGameInstance::UPuzzlePlatformsGameInstance(const FObjectInitializer & ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/MenuSystem/WBP_MainMenu"));
	if (!ensure(MenuBPClass.Class != nullptr)) return;

	MenuClass = MenuBPClass.Class;

	ConstructorHelpers::FClassFinder<UUserWidget> InGameMenuBPClass(TEXT("/Game/MenuSystem/WBP_InGameMenu"));
	if (!ensure(InGameMenuBPClass.Class != nullptr)) return;

	InGameMenuClass = InGameMenuBPClass.Class;

	ConstructorHelpers::FClassFinder<UUserWidget> MainHUDBPClass(TEXT("/Game/MenuSystem/WBP_InGameHealth"));
	if (!ensure(MainHUDBPClass.Class != nullptr)) return;

	MainHUD = MainHUDBPClass.Class;

}

void UPuzzlePlatformsGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Found class %s"), *MenuClass->GetName());
}

void UPuzzlePlatformsGameInstance::LoadMenu()
{
	if (!ensure(MenuClass != nullptr)) return;

	Menu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;
	
	Menu->Setup();

	Menu->SetMenuInterface(this);
}

void UPuzzlePlatformsGameInstance::InGameLoadMenu()
{
	if (!ensure(InGameMenuClass != nullptr)) return;

	UMenuWidget* GameLoadMenu = CreateWidget<UMenuWidget>(this, InGameMenuClass);
	if (!ensure(GameLoadMenu != nullptr)) return;
	
	GameLoadMenu->Setup();

	GameLoadMenu->SetMenuInterface(this);
}

void UPuzzlePlatformsGameInstance::Host()
{
	if(Menu != nullptr)
	{
		Menu->TearDown();
	}

	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/industrial_area/Maps/industrial_area_demo?listen");
}

void UPuzzlePlatformsGameInstance::LoadHUD()
{

	if (!ensure(MainHUD != nullptr)) return;

	UMenuWidget* HUDMain = CreateWidget<UMenuWidget>(this, MainHUD);
	if (!ensure(HUDMain != nullptr)) return;

	HUDMain->SetupWithGameMode();

	HUDMain->SetMenuInterface(this);
}

void UPuzzlePlatformsGameInstance::Join(const FString& Address)
{
	if (Menu != nullptr)
	{
		Menu->TearDown();
	}

	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return; 

	PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute); 
}

void UPuzzlePlatformsGameInstance::LoadMainMenu()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ClientTravel("/Game/MenuSystem/MainMenu", ETravelType::TRAVEL_Absolute);
}