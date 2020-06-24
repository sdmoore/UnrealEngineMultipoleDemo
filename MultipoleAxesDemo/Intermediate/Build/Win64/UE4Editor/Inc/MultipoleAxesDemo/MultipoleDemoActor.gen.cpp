// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultipoleAxesDemo/MultipoleDemoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipoleDemoActor() {}
// Cross Module References
	MULTIPOLEAXESDEMO_API UClass* Z_Construct_UClass_AMultipoleDemoActor_NoRegister();
	MULTIPOLEAXESDEMO_API UClass* Z_Construct_UClass_AMultipoleDemoActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MultipoleAxesDemo();
// End Cross Module References
	void AMultipoleDemoActor::StaticRegisterNativesAMultipoleDemoActor()
	{
	}
	UClass* Z_Construct_UClass_AMultipoleDemoActor_NoRegister()
	{
		return AMultipoleDemoActor::StaticClass();
	}
	struct Z_Construct_UClass_AMultipoleDemoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultipoleDemoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MultipoleAxesDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultipoleDemoActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MultipoleDemoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MultipoleDemoActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultipoleDemoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultipoleDemoActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultipoleDemoActor_Statics::ClassParams = {
		&AMultipoleDemoActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMultipoleDemoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultipoleDemoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultipoleDemoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultipoleDemoActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultipoleDemoActor, 251165813);
	template<> MULTIPOLEAXESDEMO_API UClass* StaticClass<AMultipoleDemoActor>()
	{
		return AMultipoleDemoActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultipoleDemoActor(Z_Construct_UClass_AMultipoleDemoActor, &AMultipoleDemoActor::StaticClass, TEXT("/Script/MultipoleAxesDemo"), TEXT("AMultipoleDemoActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultipoleDemoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
