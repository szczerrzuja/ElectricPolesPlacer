// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElectricPolePlacer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTFIELD_ElectricPolePlacer_generated_h
#error "ElectricPolePlacer.generated.h already included, missing '#pragma once' in ElectricPolePlacer.h"
#endif
#define TESTFIELD_ElectricPolePlacer_generated_h

#define FID_TestField_Source_TestField_ElectricPolePlacer_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectionPair_Statics; \
	TESTFIELD_API static class UScriptStruct* StaticStruct();


template<> TESTFIELD_API UScriptStruct* StaticStruct<struct FConnectionPair>();

#define FID_TestField_Source_TestField_ElectricPolePlacer_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPowerPolesConnection_Statics; \
	TESTFIELD_API static class UScriptStruct* StaticStruct();


template<> TESTFIELD_API UScriptStruct* StaticStruct<struct FPowerPolesConnection>();

#define FID_TestField_Source_TestField_ElectricPolePlacer_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectricPolePlacer(); \
	friend struct Z_Construct_UClass_AElectricPolePlacer_Statics; \
public: \
	DECLARE_CLASS(AElectricPolePlacer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestField"), NO_API) \
	DECLARE_SERIALIZER(AElectricPolePlacer)


#define FID_TestField_Source_TestField_ElectricPolePlacer_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AElectricPolePlacer(AElectricPolePlacer&&); \
	AElectricPolePlacer(const AElectricPolePlacer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectricPolePlacer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectricPolePlacer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElectricPolePlacer) \
	NO_API virtual ~AElectricPolePlacer();


#define FID_TestField_Source_TestField_ElectricPolePlacer_h_40_PROLOG
#define FID_TestField_Source_TestField_ElectricPolePlacer_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestField_Source_TestField_ElectricPolePlacer_h_43_INCLASS_NO_PURE_DECLS \
	FID_TestField_Source_TestField_ElectricPolePlacer_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTFIELD_API UClass* StaticClass<class AElectricPolePlacer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestField_Source_TestField_ElectricPolePlacer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
