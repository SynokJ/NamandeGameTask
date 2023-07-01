// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "task_00/MyMainGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainGameMode() {}
// Cross Module References
	TASK_00_API UClass* Z_Construct_UClass_AMyMainGameMode_NoRegister();
	TASK_00_API UClass* Z_Construct_UClass_AMyMainGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_task_00();
// End Cross Module References
	void AMyMainGameMode::StaticRegisterNativesAMyMainGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMainGameMode);
	UClass* Z_Construct_UClass_AMyMainGameMode_NoRegister()
	{
		return AMyMainGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyMainGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_task_00,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyMainGameMode.h" },
		{ "ModuleRelativePath", "MyMainGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMainGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMainGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMainGameMode_Statics::ClassParams = {
		&AMyMainGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyMainGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMainGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyMainGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMainGameMode.OuterSingleton, Z_Construct_UClass_AMyMainGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMainGameMode.OuterSingleton;
	}
	template<> TASK_00_API UClass* StaticClass<AMyMainGameMode>()
	{
		return AMyMainGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMainGameMode);
	struct Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMainGameMode, AMyMainGameMode::StaticClass, TEXT("AMyMainGameMode"), &Z_Registration_Info_UClass_AMyMainGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMainGameMode), 1089960517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainGameMode_h_1323372971(TEXT("/Script/task_00"),
		Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
