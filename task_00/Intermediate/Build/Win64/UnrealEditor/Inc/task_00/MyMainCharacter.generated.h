// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASK_00_MyMainCharacter_generated_h
#error "MyMainCharacter.generated.h already included, missing '#pragma once' in MyMainCharacter.h"
#endif
#define TASK_00_MyMainCharacter_generated_h

#define FID_task_00_Source_task_00_MyMainCharacter_h_16_SPARSE_DATA
#define FID_task_00_Source_task_00_MyMainCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCrouchDeactivted); \
	DECLARE_FUNCTION(execOnCrouchActivted); \
	DECLARE_FUNCTION(execOnSprintDeactivted); \
	DECLARE_FUNCTION(execOnSprintActivted); \
	DECLARE_FUNCTION(execOnCameraLookedUp); \
	DECLARE_FUNCTION(execOnCameraTurned); \
	DECLARE_FUNCTION(execOnSideMove); \
	DECLARE_FUNCTION(execOnStraightMove);


#define FID_task_00_Source_task_00_MyMainCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCrouchDeactivted); \
	DECLARE_FUNCTION(execOnCrouchActivted); \
	DECLARE_FUNCTION(execOnSprintDeactivted); \
	DECLARE_FUNCTION(execOnSprintActivted); \
	DECLARE_FUNCTION(execOnCameraLookedUp); \
	DECLARE_FUNCTION(execOnCameraTurned); \
	DECLARE_FUNCTION(execOnSideMove); \
	DECLARE_FUNCTION(execOnStraightMove);


#define FID_task_00_Source_task_00_MyMainCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMainCharacter(); \
	friend struct Z_Construct_UClass_AMyMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/task_00"), NO_API) \
	DECLARE_SERIALIZER(AMyMainCharacter)


#define FID_task_00_Source_task_00_MyMainCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyMainCharacter(); \
	friend struct Z_Construct_UClass_AMyMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/task_00"), NO_API) \
	DECLARE_SERIALIZER(AMyMainCharacter)


#define FID_task_00_Source_task_00_MyMainCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainCharacter(AMyMainCharacter&&); \
	NO_API AMyMainCharacter(const AMyMainCharacter&); \
public:


#define FID_task_00_Source_task_00_MyMainCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainCharacter(AMyMainCharacter&&); \
	NO_API AMyMainCharacter(const AMyMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMainCharacter)


#define FID_task_00_Source_task_00_MyMainCharacter_h_13_PROLOG
#define FID_task_00_Source_task_00_MyMainCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_SPARSE_DATA \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_RPC_WRAPPERS \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_INCLASS \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_task_00_Source_task_00_MyMainCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_SPARSE_DATA \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_task_00_Source_task_00_MyMainCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_00_API UClass* StaticClass<class AMyMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_task_00_Source_task_00_MyMainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
