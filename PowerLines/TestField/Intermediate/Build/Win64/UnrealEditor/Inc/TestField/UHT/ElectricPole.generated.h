// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElectricPole.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTFIELD_ElectricPole_generated_h
#error "ElectricPole.generated.h already included, missing '#pragma once' in ElectricPole.h"
#endif
#define TESTFIELD_ElectricPole_generated_h

#define FID_TestField_Source_TestField_ElectricPole_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectricPole(); \
	friend struct Z_Construct_UClass_AElectricPole_Statics; \
public: \
	DECLARE_CLASS(AElectricPole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestField"), NO_API) \
	DECLARE_SERIALIZER(AElectricPole)


#define FID_TestField_Source_TestField_ElectricPole_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AElectricPole(AElectricPole&&); \
	AElectricPole(const AElectricPole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectricPole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectricPole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElectricPole) \
	NO_API virtual ~AElectricPole();


#define FID_TestField_Source_TestField_ElectricPole_h_10_PROLOG
#define FID_TestField_Source_TestField_ElectricPole_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestField_Source_TestField_ElectricPole_h_13_INCLASS_NO_PURE_DECLS \
	FID_TestField_Source_TestField_ElectricPole_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTFIELD_API UClass* StaticClass<class AElectricPole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestField_Source_TestField_ElectricPole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
