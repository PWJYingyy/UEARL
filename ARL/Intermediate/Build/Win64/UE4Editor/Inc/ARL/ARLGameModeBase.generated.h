// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARL_ARLGameModeBase_generated_h
#error "ARLGameModeBase.generated.h already included, missing '#pragma once' in ARLGameModeBase.h"
#endif
#define ARL_ARLGameModeBase_generated_h

#define ARL_Source_ARL_ARLGameModeBase_h_15_SPARSE_DATA
#define ARL_Source_ARL_ARLGameModeBase_h_15_RPC_WRAPPERS
#define ARL_Source_ARL_ARLGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ARL_Source_ARL_ARLGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARLGameModeBase(); \
	friend struct Z_Construct_UClass_AARLGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AARLGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARL"), NO_API) \
	DECLARE_SERIALIZER(AARLGameModeBase)


#define ARL_Source_ARL_ARLGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAARLGameModeBase(); \
	friend struct Z_Construct_UClass_AARLGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AARLGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARL"), NO_API) \
	DECLARE_SERIALIZER(AARLGameModeBase)


#define ARL_Source_ARL_ARLGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARLGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARLGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARLGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARLGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARLGameModeBase(AARLGameModeBase&&); \
	NO_API AARLGameModeBase(const AARLGameModeBase&); \
public:


#define ARL_Source_ARL_ARLGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARLGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARLGameModeBase(AARLGameModeBase&&); \
	NO_API AARLGameModeBase(const AARLGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARLGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARLGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARLGameModeBase)


#define ARL_Source_ARL_ARLGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define ARL_Source_ARL_ARLGameModeBase_h_12_PROLOG
#define ARL_Source_ARL_ARLGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARL_Source_ARL_ARLGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ARL_Source_ARL_ARLGameModeBase_h_15_SPARSE_DATA \
	ARL_Source_ARL_ARLGameModeBase_h_15_RPC_WRAPPERS \
	ARL_Source_ARL_ARLGameModeBase_h_15_INCLASS \
	ARL_Source_ARL_ARLGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARL_Source_ARL_ARLGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARL_Source_ARL_ARLGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ARL_Source_ARL_ARLGameModeBase_h_15_SPARSE_DATA \
	ARL_Source_ARL_ARLGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ARL_Source_ARL_ARLGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	ARL_Source_ARL_ARLGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARL_API UClass* StaticClass<class AARLGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARL_Source_ARL_ARLGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
