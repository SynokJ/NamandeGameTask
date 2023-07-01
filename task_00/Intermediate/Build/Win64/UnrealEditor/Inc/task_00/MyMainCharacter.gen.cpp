// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "task_00/MyMainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainCharacter() {}
// Cross Module References
	TASK_00_API UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister();
	TASK_00_API UClass* Z_Construct_UClass_AMyMainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_task_00();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TASK_00_API UClass* Z_Construct_UClass_UMyMainMatineeCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyMainCharacter::execOnCrouchDeactivted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrouchDeactivted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnCrouchActivted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrouchActivted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnSprintDeactivted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSprintDeactivted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnSprintActivted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSprintActivted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnCameraLookedUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraLookedUp(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnCameraTurned)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraTurned(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnSideMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSideMove(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyMainCharacter::execOnStraightMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStraightMove(Z_Param_value);
		P_NATIVE_END;
	}
	void AMyMainCharacter::StaticRegisterNativesAMyMainCharacter()
	{
		UClass* Class = AMyMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCameraLookedUp", &AMyMainCharacter::execOnCameraLookedUp },
			{ "OnCameraTurned", &AMyMainCharacter::execOnCameraTurned },
			{ "OnCrouchActivted", &AMyMainCharacter::execOnCrouchActivted },
			{ "OnCrouchDeactivted", &AMyMainCharacter::execOnCrouchDeactivted },
			{ "OnSideMove", &AMyMainCharacter::execOnSideMove },
			{ "OnSprintActivted", &AMyMainCharacter::execOnSprintActivted },
			{ "OnSprintDeactivted", &AMyMainCharacter::execOnSprintDeactivted },
			{ "OnStraightMove", &AMyMainCharacter::execOnStraightMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics
	{
		struct MyMainCharacter_eventOnCameraLookedUp_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_eventOnCameraLookedUp_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnCameraLookedUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::MyMainCharacter_eventOnCameraLookedUp_Parms), Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics
	{
		struct MyMainCharacter_eventOnCameraTurned_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_eventOnCameraTurned_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnCameraTurned", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::MyMainCharacter_eventOnCameraTurned_Parms), Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnCrouchActivted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnCrouchDeactivted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics
	{
		struct MyMainCharacter_eventOnSideMove_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_eventOnSideMove_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnSideMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::MyMainCharacter_eventOnSideMove_Parms), Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnSideMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnSideMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnSprintActivted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnSprintDeactivted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics
	{
		struct MyMainCharacter_eventOnStraightMove_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyMainCharacter_eventOnStraightMove_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyMainCharacter, nullptr, "OnStraightMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::MyMainCharacter_eventOnStraightMove_Parms), Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyMainCharacter_OnStraightMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyMainCharacter_OnStraightMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMainCharacter);
	UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister()
	{
		return AMyMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_myShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_myCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_task_00,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyMainCharacter_OnCameraLookedUp, "OnCameraLookedUp" }, // 3485087225
		{ &Z_Construct_UFunction_AMyMainCharacter_OnCameraTurned, "OnCameraTurned" }, // 1425612487
		{ &Z_Construct_UFunction_AMyMainCharacter_OnCrouchActivted, "OnCrouchActivted" }, // 2239246145
		{ &Z_Construct_UFunction_AMyMainCharacter_OnCrouchDeactivted, "OnCrouchDeactivted" }, // 1774831334
		{ &Z_Construct_UFunction_AMyMainCharacter_OnSideMove, "OnSideMove" }, // 3296624993
		{ &Z_Construct_UFunction_AMyMainCharacter_OnSprintActivted, "OnSprintActivted" }, // 44683227
		{ &Z_Construct_UFunction_AMyMainCharacter_OnSprintDeactivted, "OnSprintDeactivted" }, // 74562626
		{ &Z_Construct_UFunction_AMyMainCharacter_OnStraightMove, "OnStraightMove" }, // 2511170151
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMainCharacter.h" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_movement_MetaData[] = {
		{ "Category", "MyMainCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_movement = { "movement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myShake_MetaData[] = {
		{ "Category", "MyMainCharacter" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myShake = { "myShake", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, myShake), Z_Construct_UClass_UMyMainMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myCamera = { "myCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyMainCharacter, myCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_myCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMainCharacter_Statics::ClassParams = {
		&AMyMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMainCharacter.OuterSingleton, Z_Construct_UClass_AMyMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMainCharacter.OuterSingleton;
	}
	template<> TASK_00_API UClass* StaticClass<AMyMainCharacter>()
	{
		return AMyMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMainCharacter);
	struct Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMainCharacter, AMyMainCharacter::StaticClass, TEXT("AMyMainCharacter"), &Z_Registration_Info_UClass_AMyMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMainCharacter), 1100406567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainCharacter_h_710410038(TEXT("/Script/task_00"),
		Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_task_00_Source_task_00_MyMainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
