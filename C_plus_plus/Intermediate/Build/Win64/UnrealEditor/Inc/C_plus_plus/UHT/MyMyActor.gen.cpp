// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_plus_plus/MyMyActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyMyActor() {}

// ********** Begin Cross Module References ********************************************************
C_PLUS_PLUS_API UClass* Z_Construct_UClass_AMyMyActor();
C_PLUS_PLUS_API UClass* Z_Construct_UClass_AMyMyActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_C_plus_plus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyMyActor ***************************************************************
void AMyMyActor::StaticRegisterNativesAMyMyActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyMyActor;
UClass* AMyMyActor::GetPrivateStaticClass()
{
	using TClass = AMyMyActor;
	if (!Z_Registration_Info_UClass_AMyMyActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyMyActor"),
			Z_Registration_Info_UClass_AMyMyActor.InnerSingleton,
			StaticRegisterNativesAMyMyActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyMyActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyMyActor_NoRegister()
{
	return AMyMyActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyMyActor.h" },
		{ "ModuleRelativePath", "MyMyActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_C_plus_plus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMyActor_Statics::ClassParams = {
	&AMyMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMyActor()
{
	if (!Z_Registration_Info_UClass_AMyMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMyActor.OuterSingleton, Z_Construct_UClass_AMyMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMyActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMyActor);
AMyMyActor::~AMyMyActor() {}
// ********** End Class AMyMyActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_Unreal_Projects_C_plus_plus_Source_C_plus_plus_MyMyActor_h__Script_C_plus_plus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMyActor, AMyMyActor::StaticClass, TEXT("AMyMyActor"), &Z_Registration_Info_UClass_AMyMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMyActor), 264915054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_Unreal_Projects_C_plus_plus_Source_C_plus_plus_MyMyActor_h__Script_C_plus_plus_3954170355(TEXT("/Script/C_plus_plus"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_Unreal_Projects_C_plus_plus_Source_C_plus_plus_MyMyActor_h__Script_C_plus_plus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_Unreal_Projects_C_plus_plus_Source_C_plus_plus_MyMyActor_h__Script_C_plus_plus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
