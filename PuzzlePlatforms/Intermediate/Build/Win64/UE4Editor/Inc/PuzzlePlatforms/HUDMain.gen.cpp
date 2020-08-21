// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/HUDMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDMain() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UHUDMain_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UHUDMain();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
// End Cross Module References
	void UHUDMain::StaticRegisterNativesUHUDMain()
	{
	}
	UClass* Z_Construct_UClass_UHUDMain_NoRegister()
	{
		return UHUDMain::StaticClass();
	}
	struct Z_Construct_UClass_UHUDMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDMain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUDMain.h" },
		{ "ModuleRelativePath", "HUDMain.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUDMain_Statics::ClassParams = {
		&UHUDMain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUDMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUDMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUDMain, 1703198824);
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UHUDMain>()
	{
		return UHUDMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUDMain(Z_Construct_UClass_UHUDMain, &UHUDMain::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("UHUDMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
