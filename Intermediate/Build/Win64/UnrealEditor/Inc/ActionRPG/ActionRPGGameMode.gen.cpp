// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/ActionRPGGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRPGGameMode() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_AActionRPGGameMode_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_AActionRPGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void AActionRPGGameMode::StaticRegisterNativesAActionRPGGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionRPGGameMode);
	UClass* Z_Construct_UClass_AActionRPGGameMode_NoRegister()
	{
		return AActionRPGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AActionRPGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionRPGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRPGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionRPGGameMode.h" },
		{ "ModuleRelativePath", "ActionRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionRPGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionRPGGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionRPGGameMode_Statics::ClassParams = {
		&AActionRPGGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AActionRPGGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRPGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionRPGGameMode()
	{
		if (!Z_Registration_Info_UClass_AActionRPGGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionRPGGameMode.OuterSingleton, Z_Construct_UClass_AActionRPGGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionRPGGameMode.OuterSingleton;
	}
	template<> ACTIONRPG_API UClass* StaticClass<AActionRPGGameMode>()
	{
		return AActionRPGGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionRPGGameMode);
	struct Z_CompiledInDeferFile_FID_ActionRPG_Source_ActionRPG_ActionRPGGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRPG_Source_ActionRPG_ActionRPGGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionRPGGameMode, AActionRPGGameMode::StaticClass, TEXT("AActionRPGGameMode"), &Z_Registration_Info_UClass_AActionRPGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionRPGGameMode), 1322851277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRPG_Source_ActionRPG_ActionRPGGameMode_h_872880508(TEXT("/Script/ActionRPG"),
		Z_CompiledInDeferFile_FID_ActionRPG_Source_ActionRPG_ActionRPGGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRPG_Source_ActionRPG_ActionRPGGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
