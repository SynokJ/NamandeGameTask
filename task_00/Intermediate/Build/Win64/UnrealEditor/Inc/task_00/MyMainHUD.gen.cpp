// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "task_00/MyMainHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainHUD() {}
// Cross Module References
	TASK_00_API UClass* Z_Construct_UClass_AMyMainHUD_NoRegister();
	TASK_00_API UClass* Z_Construct_UClass_AMyMainHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_task_00();
// End Cross Module References
	void AMyMainHUD::StaticRegisterNativesAMyMainHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMainHUD);
	UClass* Z_Construct_UClass_AMyMainHUD_NoRegister()
	{
		return AMyMainHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyMainHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_task_00,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyMainHUD.h" },
		{ "ModuleRelativePath", "MyMainHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMainHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMainHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMainHUD_Statics::ClassParams = {
		&AMyMainHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyMainHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMainHUD()
	{
		if (!Z_Registration_Info_UClass_AMyMainHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMainHUD.OuterSingleton, Z_Construct_UClass_AMyMainHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMainHUD.OuterSingleton;
	}
	template<> TASK_00_API UClass* StaticClass<AMyMainHUD>()
	{
		return AMyMainHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMainHUD);
	struct Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMainHUD, AMyMainHUD::StaticClass, TEXT("AMyMainHUD"), &Z_Registration_Info_UClass_AMyMainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMainHUD), 1053032222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainHUD_h_3694142612(TEXT("/Script/task_00"),
		Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
