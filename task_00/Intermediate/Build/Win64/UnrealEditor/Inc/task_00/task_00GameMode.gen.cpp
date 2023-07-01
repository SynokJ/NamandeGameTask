// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "task_00/task_00GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetask_00GameMode() {}
// Cross Module References
	TASK_00_API UClass* Z_Construct_UClass_Atask_00GameMode_NoRegister();
	TASK_00_API UClass* Z_Construct_UClass_Atask_00GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_task_00();
// End Cross Module References
	void Atask_00GameMode::StaticRegisterNativesAtask_00GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atask_00GameMode);
	UClass* Z_Construct_UClass_Atask_00GameMode_NoRegister()
	{
		return Atask_00GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Atask_00GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atask_00GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_task_00,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atask_00GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "task_00GameMode.h" },
		{ "ModuleRelativePath", "task_00GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atask_00GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atask_00GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Atask_00GameMode_Statics::ClassParams = {
		&Atask_00GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Atask_00GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atask_00GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atask_00GameMode()
	{
		if (!Z_Registration_Info_UClass_Atask_00GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atask_00GameMode.OuterSingleton, Z_Construct_UClass_Atask_00GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Atask_00GameMode.OuterSingleton;
	}
	template<> TASK_00_API UClass* StaticClass<Atask_00GameMode>()
	{
		return Atask_00GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atask_00GameMode);
	struct Z_CompiledInDeferFile_FID_task_00_Source_task_00_task_00GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_task_00GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Atask_00GameMode, Atask_00GameMode::StaticClass, TEXT("Atask_00GameMode"), &Z_Registration_Info_UClass_Atask_00GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atask_00GameMode), 1531499771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_task_00GameMode_h_345220144(TEXT("/Script/task_00"),
		Z_CompiledInDeferFile_FID_task_00_Source_task_00_task_00GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_task_00_Source_task_00_task_00GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
