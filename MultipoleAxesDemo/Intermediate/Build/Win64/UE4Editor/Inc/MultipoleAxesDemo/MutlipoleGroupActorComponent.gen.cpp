// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultipoleAxesDemo/MutlipoleGroupActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMutlipoleGroupActorComponent() {}
// Cross Module References
	MULTIPOLEAXESDEMO_API UClass* Z_Construct_UClass_UMutlipoleGroupActorComponent_NoRegister();
	MULTIPOLEAXESDEMO_API UClass* Z_Construct_UClass_UMutlipoleGroupActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MultipoleAxesDemo();
// End Cross Module References
	void UMutlipoleGroupActorComponent::StaticRegisterNativesUMutlipoleGroupActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UMutlipoleGroupActorComponent_NoRegister()
	{
		return UMutlipoleGroupActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MultipoleAxesDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MutlipoleGroupActorComponent.h" },
		{ "ModuleRelativePath", "MutlipoleGroupActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMutlipoleGroupActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::ClassParams = {
		&UMutlipoleGroupActorComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMutlipoleGroupActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMutlipoleGroupActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMutlipoleGroupActorComponent, 446050556);
	template<> MULTIPOLEAXESDEMO_API UClass* StaticClass<UMutlipoleGroupActorComponent>()
	{
		return UMutlipoleGroupActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMutlipoleGroupActorComponent(Z_Construct_UClass_UMutlipoleGroupActorComponent, &UMutlipoleGroupActorComponent::StaticClass, TEXT("/Script/MultipoleAxesDemo"), TEXT("UMutlipoleGroupActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMutlipoleGroupActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
