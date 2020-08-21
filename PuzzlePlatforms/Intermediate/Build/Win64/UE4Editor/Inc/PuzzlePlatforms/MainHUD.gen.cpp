// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MainHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainHUD_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
// End Cross Module References
	void UMainHUD::StaticRegisterNativesUMainHUD()
	{
	}
	UClass* Z_Construct_UClass_UMainHUD_NoRegister()
	{
		return UMainHUD::StaticClass();
	}
	struct Z_Construct_UClass_UMainHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainHUD.h" },
		{ "ModuleRelativePath", "MainHUD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainHUD_Statics::ClassParams = {
		&UMainHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMainHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainHUD, 824015729);
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UMainHUD>()
	{
		return UMainHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainHUD(Z_Construct_UClass_UMainHUD, &UMainHUD::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("UMainHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
