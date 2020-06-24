// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FIntPoint;
#ifdef MULTIPOLEAXESDEMO_MultipoleAxesActorComponent_generated_h
#error "MultipoleAxesActorComponent.generated.h already included, missing '#pragma once' in MultipoleAxesActorComponent.h"
#endif
#define MULTIPOLEAXESDEMO_MultipoleAxesActorComponent_generated_h

#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_SPARSE_DATA
#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMovementEventProcess); \
	DECLARE_FUNCTION(execMouseButtonEventProcess); \
	DECLARE_FUNCTION(execUpdateAxes); \
	DECLARE_FUNCTION(execChangeSpacing); \
	DECLARE_FUNCTION(execChangeRangeZ); \
	DECLARE_FUNCTION(execChangeRangeX); \
	DECLARE_FUNCTION(execUpdateChargeArrays); \
	DECLARE_FUNCTION(execGetSphereForClickSpecial); \
	DECLARE_FUNCTION(execGetSphereForClickOrdinary); \
	DECLARE_FUNCTION(execGetSphereForClickCurrent); \
	DECLARE_FUNCTION(execIfChangedOctupoleMoment); \
	DECLARE_FUNCTION(execIfChangedQuadrupoleMoment); \
	DECLARE_FUNCTION(execIfChangedDipoleMoment); \
	DECLARE_FUNCTION(execIfChangedMonopoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetOctupoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetQuadrupoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetDipoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetMonopoleMoment); \
	DECLARE_FUNCTION(execCurrentOctupoleMoment); \
	DECLARE_FUNCTION(execCurrentQuadrupoleMoment); \
	DECLARE_FUNCTION(execCurrentDipoleMoment); \
	DECLARE_FUNCTION(execCurrentMonopoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalOctupoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalQuadrupoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalDipoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalMonopoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalOctupoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalQuadrupoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalDipoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalMonopoleMoment); \
	DECLARE_FUNCTION(execGetAddedOffsetSphericalMultipoleMomentCoefficient); \
	DECLARE_FUNCTION(execGetCurrentSphericalMultipoleMomentCoefficient); \
	DECLARE_FUNCTION(execGetIfChangedSphericalMultipoleMomentCoefficient); \
	DECLARE_FUNCTION(execGetAddedOffsetCartesianMultipoleMoment); \
	DECLARE_FUNCTION(execGetCurrentCartesianMultipoleMoment); \
	DECLARE_FUNCTION(execGetIfChangedCartesianMultipoleMoment);


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovementEventProcess); \
	DECLARE_FUNCTION(execMouseButtonEventProcess); \
	DECLARE_FUNCTION(execUpdateAxes); \
	DECLARE_FUNCTION(execChangeSpacing); \
	DECLARE_FUNCTION(execChangeRangeZ); \
	DECLARE_FUNCTION(execChangeRangeX); \
	DECLARE_FUNCTION(execUpdateChargeArrays); \
	DECLARE_FUNCTION(execGetSphereForClickSpecial); \
	DECLARE_FUNCTION(execGetSphereForClickOrdinary); \
	DECLARE_FUNCTION(execGetSphereForClickCurrent); \
	DECLARE_FUNCTION(execIfChangedOctupoleMoment); \
	DECLARE_FUNCTION(execIfChangedQuadrupoleMoment); \
	DECLARE_FUNCTION(execIfChangedDipoleMoment); \
	DECLARE_FUNCTION(execIfChangedMonopoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetOctupoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetQuadrupoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetDipoleMoment); \
	DECLARE_FUNCTION(execAddedOffsetMonopoleMoment); \
	DECLARE_FUNCTION(execCurrentOctupoleMoment); \
	DECLARE_FUNCTION(execCurrentQuadrupoleMoment); \
	DECLARE_FUNCTION(execCurrentDipoleMoment); \
	DECLARE_FUNCTION(execCurrentMonopoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalOctupoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalQuadrupoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalDipoleMoment); \
	DECLARE_FUNCTION(execFromAlteredMapGetTotalMonopoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalOctupoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalQuadrupoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalDipoleMoment); \
	DECLARE_FUNCTION(execFromMapGetTotalMonopoleMoment); \
	DECLARE_FUNCTION(execGetAddedOffsetSphericalMultipoleMomentCoefficient); \
	DECLARE_FUNCTION(execGetCurrentSphericalMultipoleMomentCoefficient); \
	DECLARE_FUNCTION(execGetIfChangedSphericalMultipoleMomentCoefficient); \
	DECLARE_FUNCTION(execGetAddedOffsetCartesianMultipoleMoment); \
	DECLARE_FUNCTION(execGetCurrentCartesianMultipoleMoment); \
	DECLARE_FUNCTION(execGetIfChangedCartesianMultipoleMoment);


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultipoleAxesActorComponent(); \
	friend struct Z_Construct_UClass_UMultipoleAxesActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMultipoleAxesActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultipoleAxesDemo"), NO_API) \
	DECLARE_SERIALIZER(UMultipoleAxesActorComponent)


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_INCLASS \
private: \
	static void StaticRegisterNativesUMultipoleAxesActorComponent(); \
	friend struct Z_Construct_UClass_UMultipoleAxesActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMultipoleAxesActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultipoleAxesDemo"), NO_API) \
	DECLARE_SERIALIZER(UMultipoleAxesActorComponent)


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultipoleAxesActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultipoleAxesActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultipoleAxesActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultipoleAxesActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultipoleAxesActorComponent(UMultipoleAxesActorComponent&&); \
	NO_API UMultipoleAxesActorComponent(const UMultipoleAxesActorComponent&); \
public:


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultipoleAxesActorComponent(UMultipoleAxesActorComponent&&); \
	NO_API UMultipoleAxesActorComponent(const UMultipoleAxesActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultipoleAxesActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultipoleAxesActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultipoleAxesActorComponent)


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_PRIVATE_PROPERTY_OFFSET
#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_163_PROLOG
#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_PRIVATE_PROPERTY_OFFSET \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_SPARSE_DATA \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_RPC_WRAPPERS \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_INCLASS \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_PRIVATE_PROPERTY_OFFSET \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_SPARSE_DATA \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_INCLASS_NO_PURE_DECLS \
	MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h_166_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPOLEAXESDEMO_API UClass* StaticClass<class UMultipoleAxesActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultipoleAxesDemo_Source_MultipoleAxesDemo_MultipoleAxesActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
