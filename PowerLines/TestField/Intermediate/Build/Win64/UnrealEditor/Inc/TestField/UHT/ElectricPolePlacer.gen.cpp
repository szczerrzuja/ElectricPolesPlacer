// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestField/ElectricPolePlacer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectricPolePlacer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TESTFIELD_API UClass* Z_Construct_UClass_AElectricPole_NoRegister();
TESTFIELD_API UClass* Z_Construct_UClass_AElectricPolePlacer();
TESTFIELD_API UClass* Z_Construct_UClass_AElectricPolePlacer_NoRegister();
TESTFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionPair();
TESTFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FPowerPolesConnection();
UPackage* Z_Construct_UPackage__Script_TestField();
// End Cross Module References

// Begin ScriptStruct FConnectionPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConnectionPair;
class UScriptStruct* FConnectionPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConnectionPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConnectionPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionPair, (UObject*)Z_Construct_UPackage__Script_TestField(), TEXT("ConnectionPair"));
	}
	return Z_Registration_Info_UScriptStruct_ConnectionPair.OuterSingleton;
}
template<> TESTFIELD_API UScriptStruct* StaticStruct<FConnectionPair>()
{
	return FConnectionPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConnectionPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TestField,
	nullptr,
	&NewStructOps,
	"ConnectionPair",
	nullptr,
	0,
	sizeof(FConnectionPair),
	alignof(FConnectionPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConnectionPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConnectionPair()
{
	if (!Z_Registration_Info_UScriptStruct_ConnectionPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConnectionPair.InnerSingleton, Z_Construct_UScriptStruct_FConnectionPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConnectionPair.InnerSingleton;
}
// End ScriptStruct FConnectionPair

// Begin ScriptStruct FPowerPolesConnection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerPolesConnection;
class UScriptStruct* FPowerPolesConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerPolesConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerPolesConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerPolesConnection, (UObject*)Z_Construct_UPackage__Script_TestField(), TEXT("PowerPolesConnection"));
	}
	return Z_Registration_Info_UScriptStruct_PowerPolesConnection.OuterSingleton;
}
template<> TESTFIELD_API UScriptStruct* StaticStruct<FPowerPolesConnection>()
{
	return FPowerPolesConnection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPowerPolesConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerLinesConnection_MetaData[] = {
		{ "Category", "PowerPolesConnection" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLines_MetaData[] = {
		{ "Category", "PowerPolesConnection" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PowerLinesConnection_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PowerLinesConnection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerPolesConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewProp_PowerLinesConnection_Inner = { "PowerLinesConnection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConnectionPair, METADATA_PARAMS(0, nullptr) }; // 3834457523
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewProp_PowerLinesConnection = { "PowerLinesConnection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerPolesConnection, PowerLinesConnection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerLinesConnection_MetaData), NewProp_PowerLinesConnection_MetaData) }; // 3834457523
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewProp_NumberOfLines = { "NumberOfLines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerPolesConnection, NumberOfLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfLines_MetaData), NewProp_NumberOfLines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewProp_PowerLinesConnection_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewProp_PowerLinesConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewProp_NumberOfLines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TestField,
	nullptr,
	&NewStructOps,
	"PowerPolesConnection",
	Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::PropPointers),
	sizeof(FPowerPolesConnection),
	alignof(FPowerPolesConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerPolesConnection()
{
	if (!Z_Registration_Info_UScriptStruct_PowerPolesConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerPolesConnection.InnerSingleton, Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PowerPolesConnection.InnerSingleton;
}
// End ScriptStruct FPowerPolesConnection

// Begin Class AElectricPolePlacer
void AElectricPolePlacer::StaticRegisterNativesAElectricPolePlacer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElectricPolePlacer);
UClass* Z_Construct_UClass_AElectricPolePlacer_NoRegister()
{
	return AElectricPolePlacer::StaticClass();
}
struct Z_Construct_UClass_AElectricPolePlacer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ElectricPolePlacer.h" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tool" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tool" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffsetForAllPoles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceBetweenPoles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tool" },
		{ "ClampMax", "2000000.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumError_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tool" },
		{ "ClampMax", "2000000.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IWantToBake_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticPoleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticPoleMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ElectricPolePlacer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsetForAllPoles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceBetweenPoles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumError;
	static void NewProp_IWantToBake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IWantToBake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PoleTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticPoleMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticPoleMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectricPolePlacer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_RotationOffsetForAllPoles = { "RotationOffsetForAllPoles", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, RotationOffsetForAllPoles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffsetForAllPoles_MetaData), NewProp_RotationOffsetForAllPoles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_MaxDistanceBetweenPoles = { "MaxDistanceBetweenPoles", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, MaxDistanceBetweenPoles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceBetweenPoles_MetaData), NewProp_MaxDistanceBetweenPoles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_MaximumError = { "MaximumError", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, MaximumError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumError_MetaData), NewProp_MaximumError_MetaData) };
void Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_IWantToBake_SetBit(void* Obj)
{
	((AElectricPolePlacer*)Obj)->IWantToBake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_IWantToBake = { "IWantToBake", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AElectricPolePlacer), &Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_IWantToBake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IWantToBake_MetaData), NewProp_IWantToBake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_PoleTemplate = { "PoleTemplate", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, PoleTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AElectricPole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleTemplate_MetaData), NewProp_PoleTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_StaticPoleMesh = { "StaticPoleMesh", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, StaticPoleMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticPoleMesh_MetaData), NewProp_StaticPoleMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_InstancedStaticPoleMeshComponent = { "InstancedStaticPoleMeshComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPolePlacer, InstancedStaticPoleMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedStaticPoleMeshComponent_MetaData), NewProp_InstancedStaticPoleMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectricPolePlacer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_RotationOffsetForAllPoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_MaxDistanceBetweenPoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_MaximumError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_IWantToBake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_PoleTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_StaticPoleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPolePlacer_Statics::NewProp_InstancedStaticPoleMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPolePlacer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AElectricPolePlacer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TestField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPolePlacer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AElectricPolePlacer_Statics::ClassParams = {
	&AElectricPolePlacer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AElectricPolePlacer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPolePlacer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPolePlacer_Statics::Class_MetaDataParams), Z_Construct_UClass_AElectricPolePlacer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AElectricPolePlacer()
{
	if (!Z_Registration_Info_UClass_AElectricPolePlacer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElectricPolePlacer.OuterSingleton, Z_Construct_UClass_AElectricPolePlacer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AElectricPolePlacer.OuterSingleton;
}
template<> TESTFIELD_API UClass* StaticClass<AElectricPolePlacer>()
{
	return AElectricPolePlacer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AElectricPolePlacer);
AElectricPolePlacer::~AElectricPolePlacer() {}
// End Class AElectricPolePlacer

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPolePlacer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConnectionPair::StaticStruct, Z_Construct_UScriptStruct_FConnectionPair_Statics::NewStructOps, TEXT("ConnectionPair"), &Z_Registration_Info_UScriptStruct_ConnectionPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConnectionPair), 3834457523U) },
		{ FPowerPolesConnection::StaticStruct, Z_Construct_UScriptStruct_FPowerPolesConnection_Statics::NewStructOps, TEXT("PowerPolesConnection"), &Z_Registration_Info_UScriptStruct_PowerPolesConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerPolesConnection), 2770041920U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AElectricPolePlacer, AElectricPolePlacer::StaticClass, TEXT("AElectricPolePlacer"), &Z_Registration_Info_UClass_AElectricPolePlacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElectricPolePlacer), 2985373899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPolePlacer_h_2067204668(TEXT("/Script/TestField"),
	Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPolePlacer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPolePlacer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPolePlacer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPolePlacer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
