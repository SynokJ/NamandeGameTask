// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "task_00/MyMainMatineeCameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainMatineeCameraShake() {}
// Cross Module References
	TASK_00_API UClass* Z_Construct_UClass_UMyMainMatineeCameraShake_NoRegister();
	TASK_00_API UClass* Z_Construct_UClass_UMyMainMatineeCameraShake();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShake();
	UPackage* Z_Construct_UPackage__Script_task_00();
// End Cross Module References
	void UMyMainMatineeCameraShake::StaticRegisterNativesUMyMainMatineeCameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyMainMatineeCameraShake);
	UClass* Z_Construct_UClass_UMyMainMatineeCameraShake_NoRegister()
	{
		return UMyMainMatineeCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UMyMainMatineeCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMatineeCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_task_00,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "CameraShakePattern" },
		{ "IncludePath", "MyMainMatineeCameraShake.h" },
		{ "ModuleRelativePath", "MyMainMatineeCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMainMatineeCameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::ClassParams = {
		&UMyMainMatineeCameraShake::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyMainMatineeCameraShake()
	{
		if (!Z_Registration_Info_UClass_UMyMainMatineeCameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyMainMatineeCameraShake.OuterSingleton, Z_Construct_UClass_UMyMainMatineeCameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyMainMatineeCameraShake.OuterSingleton;
	}
	template<> TASK_00_API UClass* StaticClass<UMyMainMatineeCameraShake>()
	{
		return UMyMainMatineeCameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMainMatineeCameraShake);
	struct Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainMatineeCameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainMatineeCameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyMainMatineeCameraShake, UMyMainMatineeCameraShake::StaticClass, TEXT("UMyMainMatineeCameraShake"), &Z_Registration_Info_UClass_UMyMainMatineeCameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyMainMatineeCameraShake), 1939586882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainMatineeCameraShake_h_3221508357(TEXT("/Script/task_00"),
		Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainMatineeCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainMatineeCameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
