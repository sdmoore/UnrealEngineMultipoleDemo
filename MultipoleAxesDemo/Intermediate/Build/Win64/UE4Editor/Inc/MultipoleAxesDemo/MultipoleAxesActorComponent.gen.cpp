// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultipoleAxesDemo/MultipoleAxesActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipoleAxesActorComponent() {}
// Cross Module References
	MULTIPOLEAXESDEMO_API UClass* Z_Construct_UClass_UMultipoleAxesActorComponent_NoRegister();
	MULTIPOLEAXESDEMO_API UClass* Z_Construct_UClass_UMultipoleAxesActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MultipoleAxesDemo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execSetNewAxisOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputEnumXYZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputValueXYZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetNewAxisOffset(Z_Param_InputEnumXYZ,Z_Param_InputValueXYZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execMovementEventProcess)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x0);
		P_GET_PROPERTY(FIntProperty,Z_Param_y0);
		P_GET_PROPERTY(FIntProperty,Z_Param_z0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MovementEventProcess(Z_Param_x0,Z_Param_y0,Z_Param_z0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execMouseButtonEventProcess)
	{
		P_GET_UBOOL(Z_Param_ButtonUpFlagInput);
		P_GET_UBOOL(Z_Param_SpecialButtonFlagInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MouseButtonEventProcess(Z_Param_ButtonUpFlagInput,Z_Param_SpecialButtonFlagInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execUpdateAxesDifferent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateAxesDifferent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execUpdateAxes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateAxes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execChangeSpacing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputSpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ChangeSpacing(Z_Param_InputSpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execChangeRangeZ)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputRangeZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ChangeRangeZ(Z_Param_InputRangeZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execChangeRangeX)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputRangeX);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ChangeRangeX(Z_Param_InputRangeX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execUpdateChargeArrays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateChargeArrays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetSphereForClickSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSphereForClickSpecial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetSphereForClickOrdinary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSphereForClickOrdinary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetSphereForClickCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSphereForClickCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execIfChangedOctupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IfChangedOctupoleMoment(Z_Param_Index2,Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execIfChangedQuadrupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IfChangedQuadrupoleMoment(Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execIfChangedDipoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IfChangedDipoleMoment(Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execIfChangedMonopoleMoment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IfChangedMonopoleMoment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execAddedOffsetOctupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddedOffsetOctupoleMoment(Z_Param_Index2,Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execAddedOffsetQuadrupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddedOffsetQuadrupoleMoment(Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execAddedOffsetDipoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddedOffsetDipoleMoment(Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execAddedOffsetMonopoleMoment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddedOffsetMonopoleMoment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execCurrentOctupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CurrentOctupoleMoment(Z_Param_Index2,Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execCurrentQuadrupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CurrentQuadrupoleMoment(Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execCurrentDipoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CurrentDipoleMoment(Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execCurrentMonopoleMoment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CurrentMonopoleMoment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromAlteredMapGetTotalOctupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromAlteredMapGetTotalOctupoleMoment(Z_Param_Index2,Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromAlteredMapGetTotalQuadrupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromAlteredMapGetTotalQuadrupoleMoment(Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromAlteredMapGetTotalDipoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromAlteredMapGetTotalDipoleMoment(Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromAlteredMapGetTotalMonopoleMoment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromAlteredMapGetTotalMonopoleMoment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromMapGetTotalOctupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromMapGetTotalOctupoleMoment(Z_Param_Index2,Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromMapGetTotalQuadrupoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromMapGetTotalQuadrupoleMoment(Z_Param_Index1,Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromMapGetTotalDipoleMoment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromMapGetTotalDipoleMoment(Z_Param_Index0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execFromMapGetTotalMonopoleMoment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FromMapGetTotalMonopoleMoment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetAddedOffsetSphericalMultipoleMomentCoefficient)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputL);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputM);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetAddedOffsetSphericalMultipoleMomentCoefficient(Z_Param_InputL,Z_Param_InputM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetCurrentSphericalMultipoleMomentCoefficient)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputL);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputM);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetCurrentSphericalMultipoleMomentCoefficient(Z_Param_InputL,Z_Param_InputM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetIfChangedSphericalMultipoleMomentCoefficient)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InputL);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputM);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetIfChangedSphericalMultipoleMomentCoefficient(Z_Param_InputL,Z_Param_InputM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetAddedOffsetCartesianMultipoleMoment)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputTArrray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAddedOffsetCartesianMultipoleMoment(Z_Param_Out_InputTArrray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetCurrentCartesianMultipoleMoment)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputTArrray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentCartesianMultipoleMoment(Z_Param_Out_InputTArrray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetIfChangedCartesianMultipoleMoment)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputTArrray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIfChangedCartesianMultipoleMoment(Z_Param_Out_InputTArrray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execUpdateMaximumRangeValuesBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateMaximumRangeValuesBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultipoleAxesActorComponent::execGetChargeArrayCurrentBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FIntVector,int32>*)Z_Param__Result=P_THIS->GetChargeArrayCurrentBP();
		P_NATIVE_END;
	}
	void UMultipoleAxesActorComponent::StaticRegisterNativesUMultipoleAxesActorComponent()
	{
		UClass* Class = UMultipoleAxesActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddedOffsetDipoleMoment", &UMultipoleAxesActorComponent::execAddedOffsetDipoleMoment },
			{ "AddedOffsetMonopoleMoment", &UMultipoleAxesActorComponent::execAddedOffsetMonopoleMoment },
			{ "AddedOffsetOctupoleMoment", &UMultipoleAxesActorComponent::execAddedOffsetOctupoleMoment },
			{ "AddedOffsetQuadrupoleMoment", &UMultipoleAxesActorComponent::execAddedOffsetQuadrupoleMoment },
			{ "ChangeRangeX", &UMultipoleAxesActorComponent::execChangeRangeX },
			{ "ChangeRangeZ", &UMultipoleAxesActorComponent::execChangeRangeZ },
			{ "ChangeSpacing", &UMultipoleAxesActorComponent::execChangeSpacing },
			{ "CurrentDipoleMoment", &UMultipoleAxesActorComponent::execCurrentDipoleMoment },
			{ "CurrentMonopoleMoment", &UMultipoleAxesActorComponent::execCurrentMonopoleMoment },
			{ "CurrentOctupoleMoment", &UMultipoleAxesActorComponent::execCurrentOctupoleMoment },
			{ "CurrentQuadrupoleMoment", &UMultipoleAxesActorComponent::execCurrentQuadrupoleMoment },
			{ "FromAlteredMapGetTotalDipoleMoment", &UMultipoleAxesActorComponent::execFromAlteredMapGetTotalDipoleMoment },
			{ "FromAlteredMapGetTotalMonopoleMoment", &UMultipoleAxesActorComponent::execFromAlteredMapGetTotalMonopoleMoment },
			{ "FromAlteredMapGetTotalOctupoleMoment", &UMultipoleAxesActorComponent::execFromAlteredMapGetTotalOctupoleMoment },
			{ "FromAlteredMapGetTotalQuadrupoleMoment", &UMultipoleAxesActorComponent::execFromAlteredMapGetTotalQuadrupoleMoment },
			{ "FromMapGetTotalDipoleMoment", &UMultipoleAxesActorComponent::execFromMapGetTotalDipoleMoment },
			{ "FromMapGetTotalMonopoleMoment", &UMultipoleAxesActorComponent::execFromMapGetTotalMonopoleMoment },
			{ "FromMapGetTotalOctupoleMoment", &UMultipoleAxesActorComponent::execFromMapGetTotalOctupoleMoment },
			{ "FromMapGetTotalQuadrupoleMoment", &UMultipoleAxesActorComponent::execFromMapGetTotalQuadrupoleMoment },
			{ "GetAddedOffsetCartesianMultipoleMoment", &UMultipoleAxesActorComponent::execGetAddedOffsetCartesianMultipoleMoment },
			{ "GetAddedOffsetSphericalMultipoleMomentCoefficient", &UMultipoleAxesActorComponent::execGetAddedOffsetSphericalMultipoleMomentCoefficient },
			{ "GetChargeArrayCurrentBP", &UMultipoleAxesActorComponent::execGetChargeArrayCurrentBP },
			{ "GetCurrentCartesianMultipoleMoment", &UMultipoleAxesActorComponent::execGetCurrentCartesianMultipoleMoment },
			{ "GetCurrentSphericalMultipoleMomentCoefficient", &UMultipoleAxesActorComponent::execGetCurrentSphericalMultipoleMomentCoefficient },
			{ "GetIfChangedCartesianMultipoleMoment", &UMultipoleAxesActorComponent::execGetIfChangedCartesianMultipoleMoment },
			{ "GetIfChangedSphericalMultipoleMomentCoefficient", &UMultipoleAxesActorComponent::execGetIfChangedSphericalMultipoleMomentCoefficient },
			{ "GetSphereForClickCurrent", &UMultipoleAxesActorComponent::execGetSphereForClickCurrent },
			{ "GetSphereForClickOrdinary", &UMultipoleAxesActorComponent::execGetSphereForClickOrdinary },
			{ "GetSphereForClickSpecial", &UMultipoleAxesActorComponent::execGetSphereForClickSpecial },
			{ "IfChangedDipoleMoment", &UMultipoleAxesActorComponent::execIfChangedDipoleMoment },
			{ "IfChangedMonopoleMoment", &UMultipoleAxesActorComponent::execIfChangedMonopoleMoment },
			{ "IfChangedOctupoleMoment", &UMultipoleAxesActorComponent::execIfChangedOctupoleMoment },
			{ "IfChangedQuadrupoleMoment", &UMultipoleAxesActorComponent::execIfChangedQuadrupoleMoment },
			{ "MouseButtonEventProcess", &UMultipoleAxesActorComponent::execMouseButtonEventProcess },
			{ "MovementEventProcess", &UMultipoleAxesActorComponent::execMovementEventProcess },
			{ "SetNewAxisOffset", &UMultipoleAxesActorComponent::execSetNewAxisOffset },
			{ "UpdateAxes", &UMultipoleAxesActorComponent::execUpdateAxes },
			{ "UpdateAxesDifferent", &UMultipoleAxesActorComponent::execUpdateAxesDifferent },
			{ "UpdateChargeArrays", &UMultipoleAxesActorComponent::execUpdateChargeArrays },
			{ "UpdateMaximumRangeValuesBP", &UMultipoleAxesActorComponent::execUpdateMaximumRangeValuesBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventAddedOffsetDipoleMoment_Parms
		{
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetDipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetDipoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::NewProp_Index0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "AddedOffsetDipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventAddedOffsetDipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventAddedOffsetMonopoleMoment_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetMonopoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "AddedOffsetMonopoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventAddedOffsetMonopoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventAddedOffsetOctupoleMoment_Parms
		{
			int32 Index2;
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetOctupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetOctupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetOctupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetOctupoleMoment_Parms, Index2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_Index1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::NewProp_Index2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "AddedOffsetOctupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventAddedOffsetOctupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventAddedOffsetQuadrupoleMoment_Parms
		{
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetQuadrupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetQuadrupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventAddedOffsetQuadrupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::NewProp_Index1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "AddedOffsetQuadrupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventAddedOffsetQuadrupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics
	{
		struct MultipoleAxesActorComponent_eventChangeRangeX_Parms
		{
			int32 InputRangeX;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputRangeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventChangeRangeX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::NewProp_InputRangeX = { "InputRangeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventChangeRangeX_Parms, InputRangeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::NewProp_InputRangeX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "ChangeRangeX", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventChangeRangeX_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics
	{
		struct MultipoleAxesActorComponent_eventChangeRangeZ_Parms
		{
			int32 InputRangeZ;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputRangeZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventChangeRangeZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::NewProp_InputRangeZ = { "InputRangeZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventChangeRangeZ_Parms, InputRangeZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::NewProp_InputRangeZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "ChangeRangeZ", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventChangeRangeZ_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics
	{
		struct MultipoleAxesActorComponent_eventChangeSpacing_Parms
		{
			float InputSpacing;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputSpacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventChangeSpacing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::NewProp_InputSpacing = { "InputSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventChangeSpacing_Parms, InputSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::NewProp_InputSpacing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "ChangeSpacing", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventChangeSpacing_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventCurrentDipoleMoment_Parms
		{
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentDipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentDipoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::NewProp_Index0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "CurrentDipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventCurrentDipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventCurrentMonopoleMoment_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentMonopoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "CurrentMonopoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventCurrentMonopoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventCurrentOctupoleMoment_Parms
		{
			int32 Index2;
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentOctupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentOctupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentOctupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentOctupoleMoment_Parms, Index2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_Index1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::NewProp_Index2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "CurrentOctupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventCurrentOctupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventCurrentQuadrupoleMoment_Parms
		{
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentQuadrupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentQuadrupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventCurrentQuadrupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::NewProp_Index1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "CurrentQuadrupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventCurrentQuadrupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromAlteredMapGetTotalDipoleMoment_Parms
		{
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalDipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalDipoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::NewProp_Index0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromAlteredMapGetTotalDipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalDipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromAlteredMapGetTotalMonopoleMoment_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalMonopoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromAlteredMapGetTotalMonopoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalMonopoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromAlteredMapGetTotalOctupoleMoment_Parms
		{
			int32 Index2;
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalOctupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalOctupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalOctupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalOctupoleMoment_Parms, Index2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_Index1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::NewProp_Index2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromAlteredMapGetTotalOctupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalOctupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromAlteredMapGetTotalQuadrupoleMoment_Parms
		{
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalQuadrupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalQuadrupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalQuadrupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::NewProp_Index1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromAlteredMapGetTotalQuadrupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromAlteredMapGetTotalQuadrupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromMapGetTotalDipoleMoment_Parms
		{
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalDipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalDipoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::NewProp_Index0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromMapGetTotalDipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromMapGetTotalDipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromMapGetTotalMonopoleMoment_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalMonopoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromMapGetTotalMonopoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromMapGetTotalMonopoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromMapGetTotalOctupoleMoment_Parms
		{
			int32 Index2;
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalOctupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalOctupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalOctupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalOctupoleMoment_Parms, Index2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_Index1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::NewProp_Index2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromMapGetTotalOctupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromMapGetTotalOctupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventFromMapGetTotalQuadrupoleMoment_Parms
		{
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalQuadrupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalQuadrupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventFromMapGetTotalQuadrupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::NewProp_Index1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "FromMapGetTotalQuadrupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventFromMapGetTotalQuadrupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventGetAddedOffsetCartesianMultipoleMoment_Parms
		{
			TArray<int32> InputTArrray;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputTArrray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputTArrray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetAddedOffsetCartesianMultipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::NewProp_InputTArrray = { "InputTArrray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetAddedOffsetCartesianMultipoleMoment_Parms, InputTArrray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::NewProp_InputTArrray_Inner = { "InputTArrray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::NewProp_InputTArrray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::NewProp_InputTArrray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetAddedOffsetCartesianMultipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetAddedOffsetCartesianMultipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics
	{
		struct MultipoleAxesActorComponent_eventGetAddedOffsetSphericalMultipoleMomentCoefficient_Parms
		{
			int32 InputL;
			int32 InputM;
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputM;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetAddedOffsetSphericalMultipoleMomentCoefficient_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::NewProp_InputM = { "InputM", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetAddedOffsetSphericalMultipoleMomentCoefficient_Parms, InputM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::NewProp_InputL = { "InputL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetAddedOffsetSphericalMultipoleMomentCoefficient_Parms, InputL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::NewProp_InputM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::NewProp_InputL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetAddedOffsetSphericalMultipoleMomentCoefficient", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetAddedOffsetSphericalMultipoleMomentCoefficient_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics
	{
		struct MultipoleAxesActorComponent_eventGetChargeArrayCurrentBP_Parms
		{
			TMap<FIntVector,int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetChargeArrayCurrentBP_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultipoleCustom" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetChargeArrayCurrentBP", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetChargeArrayCurrentBP_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventGetCurrentCartesianMultipoleMoment_Parms
		{
			TArray<int32> InputTArrray;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputTArrray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputTArrray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetCurrentCartesianMultipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::NewProp_InputTArrray = { "InputTArrray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetCurrentCartesianMultipoleMoment_Parms, InputTArrray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::NewProp_InputTArrray_Inner = { "InputTArrray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::NewProp_InputTArrray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::NewProp_InputTArrray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetCurrentCartesianMultipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetCurrentCartesianMultipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics
	{
		struct MultipoleAxesActorComponent_eventGetCurrentSphericalMultipoleMomentCoefficient_Parms
		{
			int32 InputL;
			int32 InputM;
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputM;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetCurrentSphericalMultipoleMomentCoefficient_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::NewProp_InputM = { "InputM", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetCurrentSphericalMultipoleMomentCoefficient_Parms, InputM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::NewProp_InputL = { "InputL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetCurrentSphericalMultipoleMomentCoefficient_Parms, InputL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::NewProp_InputM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::NewProp_InputL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetCurrentSphericalMultipoleMomentCoefficient", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetCurrentSphericalMultipoleMomentCoefficient_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventGetIfChangedCartesianMultipoleMoment_Parms
		{
			TArray<int32> InputTArrray;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputTArrray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputTArrray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetIfChangedCartesianMultipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::NewProp_InputTArrray = { "InputTArrray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetIfChangedCartesianMultipoleMoment_Parms, InputTArrray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::NewProp_InputTArrray_Inner = { "InputTArrray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::NewProp_InputTArrray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::NewProp_InputTArrray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetIfChangedCartesianMultipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetIfChangedCartesianMultipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics
	{
		struct MultipoleAxesActorComponent_eventGetIfChangedSphericalMultipoleMomentCoefficient_Parms
		{
			int32 InputL;
			int32 InputM;
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputM;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetIfChangedSphericalMultipoleMomentCoefficient_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::NewProp_InputM = { "InputM", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetIfChangedSphericalMultipoleMomentCoefficient_Parms, InputM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::NewProp_InputL = { "InputL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetIfChangedSphericalMultipoleMomentCoefficient_Parms, InputL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::NewProp_InputM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::NewProp_InputL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetIfChangedSphericalMultipoleMomentCoefficient", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetIfChangedSphericalMultipoleMomentCoefficient_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics
	{
		struct MultipoleAxesActorComponent_eventGetSphereForClickCurrent_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetSphereForClickCurrent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetSphereForClickCurrent", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetSphereForClickCurrent_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics
	{
		struct MultipoleAxesActorComponent_eventGetSphereForClickOrdinary_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetSphereForClickOrdinary_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetSphereForClickOrdinary", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetSphereForClickOrdinary_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics
	{
		struct MultipoleAxesActorComponent_eventGetSphereForClickSpecial_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventGetSphereForClickSpecial_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "GetSphereForClickSpecial", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventGetSphereForClickSpecial_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventIfChangedDipoleMoment_Parms
		{
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedDipoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedDipoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::NewProp_Index0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "IfChangedDipoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventIfChangedDipoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventIfChangedMonopoleMoment_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedMonopoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "IfChangedMonopoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventIfChangedMonopoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventIfChangedOctupoleMoment_Parms
		{
			int32 Index2;
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedOctupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedOctupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedOctupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedOctupoleMoment_Parms, Index2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_Index1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::NewProp_Index2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "IfChangedOctupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventIfChangedOctupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics
	{
		struct MultipoleAxesActorComponent_eventIfChangedQuadrupoleMoment_Parms
		{
			int32 Index1;
			int32 Index0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedQuadrupoleMoment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedQuadrupoleMoment_Parms, Index0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventIfChangedQuadrupoleMoment_Parms, Index1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::NewProp_Index0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::NewProp_Index1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Category", "FxnGetMultipoleMoments" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "IfChangedQuadrupoleMoment", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventIfChangedQuadrupoleMoment_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics
	{
		struct MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms
		{
			bool ButtonUpFlagInput;
			bool SpecialButtonFlagInput;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static void NewProp_SpecialButtonFlagInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpecialButtonFlagInput;
		static void NewProp_ButtonUpFlagInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ButtonUpFlagInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_SpecialButtonFlagInput_SetBit(void* Obj)
	{
		((MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms*)Obj)->SpecialButtonFlagInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_SpecialButtonFlagInput = { "SpecialButtonFlagInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms), &Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_SpecialButtonFlagInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_ButtonUpFlagInput_SetBit(void* Obj)
	{
		((MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms*)Obj)->ButtonUpFlagInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_ButtonUpFlagInput = { "ButtonUpFlagInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms), &Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_ButtonUpFlagInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_SpecialButtonFlagInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::NewProp_ButtonUpFlagInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "MouseButtonEventProcess", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventMouseButtonEventProcess_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics
	{
		struct MultipoleAxesActorComponent_eventMovementEventProcess_Parms
		{
			int32 x0;
			int32 y0;
			int32 z0;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_z0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventMovementEventProcess_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_z0 = { "z0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventMovementEventProcess_Parms, z0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_y0 = { "y0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventMovementEventProcess_Parms, y0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_x0 = { "x0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventMovementEventProcess_Parms, x0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_z0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_y0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::NewProp_x0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "MovementEventProcess", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventMovementEventProcess_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics
	{
		struct MultipoleAxesActorComponent_eventSetNewAxisOffset_Parms
		{
			int32 InputEnumXYZ;
			int32 InputValueXYZ;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputValueXYZ;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputEnumXYZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventSetNewAxisOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::NewProp_InputValueXYZ = { "InputValueXYZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventSetNewAxisOffset_Parms, InputValueXYZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::NewProp_InputEnumXYZ = { "InputEnumXYZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventSetNewAxisOffset_Parms, InputEnumXYZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::NewProp_InputValueXYZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::NewProp_InputEnumXYZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "SetNewAxisOffset", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventSetNewAxisOffset_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics
	{
		struct MultipoleAxesActorComponent_eventUpdateAxes_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventUpdateAxes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "UpdateAxes", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventUpdateAxes_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics
	{
		struct MultipoleAxesActorComponent_eventUpdateAxesDifferent_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventUpdateAxesDifferent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "UpdateAxesDifferent", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventUpdateAxesDifferent_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics
	{
		struct MultipoleAxesActorComponent_eventUpdateChargeArrays_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventUpdateChargeArrays_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "UpdateChargeArrays", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventUpdateChargeArrays_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics
	{
		struct MultipoleAxesActorComponent_eventUpdateMaximumRangeValuesBP_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultipoleAxesActorComponent_eventUpdateMaximumRangeValuesBP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MultipoleCustom" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultipoleAxesActorComponent, nullptr, "UpdateMaximumRangeValuesBP", nullptr, nullptr, sizeof(MultipoleAxesActorComponent_eventUpdateMaximumRangeValuesBP_Parms), Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultipoleAxesActorComponent_NoRegister()
	{
		return UMultipoleAxesActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMultipoleAxesActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempMultipoleBarCylinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempMultipoleBarCylinders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempMultipoleBarCylinders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempNegativeChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempNegativeChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempNegativeChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempPositiveChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempPositiveChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempPositiveChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickMarkCylinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TickMarkCylinders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickMarkCylinders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxesCylinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxesCylinders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxesCylinders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetMultipoleBarCylinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OffsetMultipoleBarCylinders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetMultipoleBarCylinders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetNegativeChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OffsetNegativeChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetNegativeChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetPositiveChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OffsetPositiveChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetPositiveChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddMultipoleBarCylinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddMultipoleBarCylinders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddMultipoleBarCylinders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNegativeChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddNegativeChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddNegativeChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddPositiveChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddPositiveChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddPositiveChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipoleBarCylinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultipoleBarCylinders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultipoleBarCylinders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NegativeChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveChargeSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PositiveChargeSpheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveChargeSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusPerUnitMultipoleProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusPerUnitMultipoleProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusPerUnitChargeProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusPerUnitChargeProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxesRadiusProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxesRadiusProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickMarkRadiusProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickMarkRadiusProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickMarkProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickMarkProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RangeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RangeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RangeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAxes_MetaData[];
#endif
		static void NewProp_UpdatedAxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdatedAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedChargeArrays_MetaData[];
#endif
		static void NewProp_UpdatedChargeArrays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdatedChargeArrays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipoleAxesValueXYZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MultipoleAxesValueXYZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipoleAxesEnumXYZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MultipoleAxesEnumXYZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsMaxRangeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AbsMaxRangeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsMaxRangeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AbsMaxRangeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsMaxRangeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AbsMaxRangeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridlinesFlag_MetaData[];
#endif
		static void NewProp_GridlinesFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GridlinesFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusEnum_None_Ordinary_Special_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentFocusEnum_None_Ordinary_Special;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTransformRotateScaleAxesZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTransformRotateScaleAxesZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTransformRotateScaleAxesY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTransformRotateScaleAxesY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTransformRotateScaleAxesX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTransformRotateScaleAxesX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTransformRotateScaleTickMarkZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTransformRotateScaleTickMarkZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTransformRotateScaleTickMarkY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTransformRotateScaleTickMarkY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTransformRotateScaleTickMarkX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FTransformRotateScaleTickMarkX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleAxesZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleAxesZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleAxesY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleAxesY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleAxesX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleAxesX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleAxesBase100_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleAxesBase100;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleTickMarkZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleTickMarkZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleTickMarkY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleTickMarkY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleTickMarkX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleTickMarkX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FVectorScaleTickMark_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FVectorScaleTickMark;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MultipoleAxesDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetDipoleMoment, "AddedOffsetDipoleMoment" }, // 3614436070
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetMonopoleMoment, "AddedOffsetMonopoleMoment" }, // 1008419812
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetOctupoleMoment, "AddedOffsetOctupoleMoment" }, // 3867039491
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_AddedOffsetQuadrupoleMoment, "AddedOffsetQuadrupoleMoment" }, // 1804409188
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeX, "ChangeRangeX" }, // 769564609
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeRangeZ, "ChangeRangeZ" }, // 190031653
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_ChangeSpacing, "ChangeSpacing" }, // 1240884492
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentDipoleMoment, "CurrentDipoleMoment" }, // 4352326
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentMonopoleMoment, "CurrentMonopoleMoment" }, // 3574515311
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentOctupoleMoment, "CurrentOctupoleMoment" }, // 870980028
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_CurrentQuadrupoleMoment, "CurrentQuadrupoleMoment" }, // 3905648153
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalDipoleMoment, "FromAlteredMapGetTotalDipoleMoment" }, // 1686115590
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalMonopoleMoment, "FromAlteredMapGetTotalMonopoleMoment" }, // 3476266617
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalOctupoleMoment, "FromAlteredMapGetTotalOctupoleMoment" }, // 692155401
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromAlteredMapGetTotalQuadrupoleMoment, "FromAlteredMapGetTotalQuadrupoleMoment" }, // 2182458227
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalDipoleMoment, "FromMapGetTotalDipoleMoment" }, // 3879263036
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalMonopoleMoment, "FromMapGetTotalMonopoleMoment" }, // 870995073
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalOctupoleMoment, "FromMapGetTotalOctupoleMoment" }, // 1151307463
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_FromMapGetTotalQuadrupoleMoment, "FromMapGetTotalQuadrupoleMoment" }, // 3991802161
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetCartesianMultipoleMoment, "GetAddedOffsetCartesianMultipoleMoment" }, // 2704363551
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetAddedOffsetSphericalMultipoleMomentCoefficient, "GetAddedOffsetSphericalMultipoleMomentCoefficient" }, // 2274101787
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetChargeArrayCurrentBP, "GetChargeArrayCurrentBP" }, // 652165823
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentCartesianMultipoleMoment, "GetCurrentCartesianMultipoleMoment" }, // 869523248
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetCurrentSphericalMultipoleMomentCoefficient, "GetCurrentSphericalMultipoleMomentCoefficient" }, // 3853924834
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedCartesianMultipoleMoment, "GetIfChangedCartesianMultipoleMoment" }, // 3386471640
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetIfChangedSphericalMultipoleMomentCoefficient, "GetIfChangedSphericalMultipoleMomentCoefficient" }, // 1898618901
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickCurrent, "GetSphereForClickCurrent" }, // 3926934530
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickOrdinary, "GetSphereForClickOrdinary" }, // 3058153286
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_GetSphereForClickSpecial, "GetSphereForClickSpecial" }, // 728996031
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedDipoleMoment, "IfChangedDipoleMoment" }, // 2591790940
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedMonopoleMoment, "IfChangedMonopoleMoment" }, // 1707290066
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedOctupoleMoment, "IfChangedOctupoleMoment" }, // 3298283067
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_IfChangedQuadrupoleMoment, "IfChangedQuadrupoleMoment" }, // 3271440331
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_MouseButtonEventProcess, "MouseButtonEventProcess" }, // 2950131059
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_MovementEventProcess, "MovementEventProcess" }, // 2742651985
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_SetNewAxisOffset, "SetNewAxisOffset" }, // 1227853579
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxes, "UpdateAxes" }, // 2604250253
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateAxesDifferent, "UpdateAxesDifferent" }, // 1202012564
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateChargeArrays, "UpdateChargeArrays" }, // 4023079768
		{ &Z_Construct_UFunction_UMultipoleAxesActorComponent_UpdateMaximumRangeValuesBP, "UpdateMaximumRangeValuesBP" }, // 911685046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MultipoleAxesActorComponent.h" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders = { "TempMultipoleBarCylinders", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, TempMultipoleBarCylinders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders_Inner = { "TempMultipoleBarCylinders", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres = { "TempNegativeChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, TempNegativeChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres_Inner = { "TempNegativeChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres = { "TempPositiveChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, TempPositiveChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres_Inner = { "TempPositiveChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders = { "TickMarkCylinders", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, TickMarkCylinders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders_Inner = { "TickMarkCylinders", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders = { "AxesCylinders", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AxesCylinders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders_Inner = { "AxesCylinders", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders = { "OffsetMultipoleBarCylinders", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, OffsetMultipoleBarCylinders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders_Inner = { "OffsetMultipoleBarCylinders", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres = { "OffsetNegativeChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, OffsetNegativeChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres_Inner = { "OffsetNegativeChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres = { "OffsetPositiveChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, OffsetPositiveChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres_Inner = { "OffsetPositiveChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders = { "AddMultipoleBarCylinders", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AddMultipoleBarCylinders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders_Inner = { "AddMultipoleBarCylinders", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres = { "AddNegativeChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AddNegativeChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres_Inner = { "AddNegativeChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres = { "AddPositiveChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AddPositiveChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres_Inner = { "AddPositiveChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders = { "MultipoleBarCylinders", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, MultipoleBarCylinders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders_Inner = { "MultipoleBarCylinders", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres = { "NegativeChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, NegativeChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres_Inner = { "NegativeChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres = { "PositiveChargeSpheres", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, PositiveChargeSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres_Inner = { "PositiveChargeSpheres", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitMultipoleProportion_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitMultipoleProportion = { "RadiusPerUnitMultipoleProportion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, RadiusPerUnitMultipoleProportion), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitMultipoleProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitMultipoleProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitChargeProportion_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitChargeProportion = { "RadiusPerUnitChargeProportion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, RadiusPerUnitChargeProportion), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitChargeProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitChargeProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesRadiusProportion_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesRadiusProportion = { "AxesRadiusProportion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AxesRadiusProportion), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesRadiusProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesRadiusProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkRadiusProportion_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkRadiusProportion = { "TickMarkRadiusProportion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, TickMarkRadiusProportion), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkRadiusProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkRadiusProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkProportion_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkProportion = { "TickMarkProportion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, TickMarkProportion), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, Spacing), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_Spacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeZ = { "RangeZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, RangeZ), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeY_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeY = { "RangeY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, RangeY), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeX_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeX = { "RangeX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, RangeX), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes_SetBit(void* Obj)
	{
		((UMultipoleAxesActorComponent*)Obj)->UpdatedAxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes = { "UpdatedAxes", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultipoleAxesActorComponent), &Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays_SetBit(void* Obj)
	{
		((UMultipoleAxesActorComponent*)Obj)->UpdatedChargeArrays = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays = { "UpdatedChargeArrays", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultipoleAxesActorComponent), &Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesValueXYZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesValueXYZ = { "MultipoleAxesValueXYZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, MultipoleAxesValueXYZ), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesValueXYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesValueXYZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesEnumXYZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesEnumXYZ = { "MultipoleAxesEnumXYZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, MultipoleAxesEnumXYZ), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesEnumXYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesEnumXYZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_DefaultRange_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_DefaultRange = { "DefaultRange", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, DefaultRange), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_DefaultRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_DefaultRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeZ = { "AbsMaxRangeZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AbsMaxRangeZ), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeY_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeY = { "AbsMaxRangeY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AbsMaxRangeY), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeX_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeX = { "AbsMaxRangeX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, AbsMaxRangeX), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag_SetBit(void* Obj)
	{
		((UMultipoleAxesActorComponent*)Obj)->GridlinesFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag = { "GridlinesFlag", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultipoleAxesActorComponent), &Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_CurrentFocusEnum_None_Ordinary_Special_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_CurrentFocusEnum_None_Ordinary_Special = { "CurrentFocusEnum_None_Ordinary_Special", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, CurrentFocusEnum_None_Ordinary_Special), METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_CurrentFocusEnum_None_Ordinary_Special_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_CurrentFocusEnum_None_Ordinary_Special_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesZ = { "FTransformRotateScaleAxesZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FTransformRotateScaleAxesZ), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesY_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesY = { "FTransformRotateScaleAxesY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FTransformRotateScaleAxesY), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesX_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesX = { "FTransformRotateScaleAxesX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FTransformRotateScaleAxesX), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkZ = { "FTransformRotateScaleTickMarkZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FTransformRotateScaleTickMarkZ), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkY_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkY = { "FTransformRotateScaleTickMarkY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FTransformRotateScaleTickMarkY), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkX_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkX = { "FTransformRotateScaleTickMarkX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FTransformRotateScaleTickMarkX), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesZ = { "FVectorScaleAxesZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleAxesZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesY_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesY = { "FVectorScaleAxesY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleAxesY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesX_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesX = { "FVectorScaleAxesX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleAxesX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesBase100_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesBase100 = { "FVectorScaleAxesBase100", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleAxesBase100), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesBase100_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesBase100_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxes_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxes = { "FVectorScaleAxes", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleAxes), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkZ_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkZ = { "FVectorScaleTickMarkZ", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleTickMarkZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkY_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkY = { "FVectorScaleTickMarkY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleTickMarkY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkX_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkX = { "FVectorScaleTickMarkX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleTickMarkX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMark_MetaData[] = {
		{ "Category", "MultipoleAxesActorComponent" },
		{ "ModuleRelativePath", "MultipoleAxesActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMark = { "FVectorScaleTickMark", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultipoleAxesActorComponent, FVectorScaleTickMark), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMark_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempMultipoleBarCylinders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempNegativeChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TempPositiveChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkCylinders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesCylinders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetMultipoleBarCylinders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetNegativeChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_OffsetPositiveChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddMultipoleBarCylinders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddNegativeChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AddPositiveChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleBarCylinders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_NegativeChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_PositiveChargeSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitMultipoleProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RadiusPerUnitChargeProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AxesRadiusProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkRadiusProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_TickMarkProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_RangeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_UpdatedChargeArrays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesValueXYZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_MultipoleAxesEnumXYZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_DefaultRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_AbsMaxRangeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_GridlinesFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_CurrentFocusEnum_None_Ordinary_Special,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleAxesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FTransformRotateScaleTickMarkX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxesBase100,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMarkX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::NewProp_FVectorScaleTickMark,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultipoleAxesActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::ClassParams = {
		&UMultipoleAxesActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultipoleAxesActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultipoleAxesActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultipoleAxesActorComponent, 2138865570);
	template<> MULTIPOLEAXESDEMO_API UClass* StaticClass<UMultipoleAxesActorComponent>()
	{
		return UMultipoleAxesActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultipoleAxesActorComponent(Z_Construct_UClass_UMultipoleAxesActorComponent, &UMultipoleAxesActorComponent::StaticClass, TEXT("/Script/MultipoleAxesDemo"), TEXT("UMultipoleAxesActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultipoleAxesActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
