// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASK_00_MyMainGameMode_generated_h
#error "MyMainGameMode.generated.h already included, missing '#pragma once' in MyMainGameMode.h"
#endif
#define TASK_00_MyMainGameMode_generated_h

#define FID_task_00_Source_task_00_MyMainGameMode_h_15_SPARSE_DATA
#define FID_task_00_Source_task_00_MyMainGameMode_h_15_RPC_WRAPPERS
#define FID_task_00_Source_task_00_MyMainGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_task_00_Source_task_00_MyMainGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMainGameMode(); \
	friend struct Z_Construct_UClass_AMyMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyMainGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/task_00"), NO_API) \
	DECLARE_SERIALIZER(AMyMainGameMode)


#define FID_task_00_Source_task_00_MyMainGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyMainGameMode(); \
	friend struct Z_Construct_UClass_AMyMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyMainGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/task_00"), NO_API) \
	DECLARE_SERIALIZER(AMyMainGameMode)


#define FID_task_00_Source_task_00_MyMainGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMainGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMainGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainGameMode(AMyMainGameMode&&); \
	NO_API AMyMainGameMode(const AMyMainGameMode&); \
public:


#define FID_task_00_Source_task_00_MyMainGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMainGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMainGameMode(AMyMainGameMode&&); \
	NO_API AMyMainGameMode(const AMyMainGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMainGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMainGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMainGameMode)


#define FID_task_00_Source_task_00_MyMainGameMode_h_12_PROLOG
#define FID_task_00_Source_task_00_MyMainGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_SPARSE_DATA \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_RPC_WRAPPERS \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_INCLASS \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_task_00_Source_task_00_MyMainGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_SPARSE_DATA \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_task_00_Source_task_00_MyMainGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_00_API UClass* StaticClass<class AMyMainGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_task_00_Source_task_00_MyMainGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
