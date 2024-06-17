// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestField/ElectricPole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectricPole() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TESTFIELD_API UClass* Z_Construct_UClass_AElectricPole();
TESTFIELD_API UClass* Z_Construct_UClass_AElectricPole_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestField();
// End Cross Module References

// Begin Class AElectricPole
void AElectricPole::StaticRegisterNativesAElectricPole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElectricPole);
UClass* Z_Construct_UClass_AElectricPole_NoRegister()
{
	return AElectricPole::StaticClass();
}
struct Z_Construct_UClass_AElectricPole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ElectricPole.h" },
		{ "ModuleRelativePath", "ElectricPole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ElectricPole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ElectricPole.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectricPole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectricPole_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPole, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectricPole_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElectricPole, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectricPole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPole_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectricPole_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPole_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AElectricPole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TestField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AElectricPole_Statics::ClassParams = {
	&AElectricPole::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AElectricPole_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPole_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AElectricPole_Statics::Class_MetaDataParams), Z_Construct_UClass_AElectricPole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AElectricPole()
{
	if (!Z_Registration_Info_UClass_AElectricPole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElectricPole.OuterSingleton, Z_Construct_UClass_AElectricPole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AElectricPole.OuterSingleton;
}
template<> TESTFIELD_API UClass* StaticClass<AElectricPole>()
{
	return AElectricPole::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AElectricPole);
AElectricPole::~AElectricPole() {}
// End Class AElectricPole

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AElectricPole, AElectricPole::StaticClass, TEXT("AElectricPole"), &Z_Registration_Info_UClass_AElectricPole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElectricPole), 912099292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPole_h_758962594(TEXT("/Script/TestField"),
	Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestField_Source_TestField_ElectricPole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
