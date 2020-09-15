// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Kismet/KismetMathLibrary.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Math/IntVector.h"
#include "MultipoleAxesActorComponent.generated.h"
//
//
//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
//class MULTIPOLEAXESDEMO_API UMultipoleAxesActorComponent : public UActorComponent
//{
//	GENERATED_BODY()
//
//public:	
//	// Sets default values for this component's properties
//	UMultipoleAxesActorComponent();
//
//protected:
//	// Called when the game starts
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
//
//		
//};
////// START OTHER
//class FIntVector
//{
//public:
//	int x;
//	int y;
//	int z;
//	FIntVector();
//	FIntVector(int, int, int);
//	FIntVector operator+(FIntVector);
//	FIntVector operator-(FIntVector);
//	FIntVector operator*(FIntVector);
//	FIntVector operator*(int);
//	void operator+=(FIntVector);
//	void operator-=(FIntVector);
//	FString ToFStringFIntVector();
//	FORCEINLINE bool operator==(const FIntVector& B) const
//	{
//		if (x == B.x && y == B.y && z == B.z) {
//			return true;
//		}
//		else return false;
//	}
//	friend FORCEINLINE uFIntVector2 GetTypeHash(const FIntVector& sinput)
//	{
//		uFIntVector2 xhash, yhash, zhash;
//		//return your hash definition
//		if (sinput.x < 0)
//		{
//			xhash = (1024 + sinput.x);
//		}
//		else
//		{
//			xhash = sinput.x;
//		}
//		if (sinput.y < 0)
//		{
//			yhash = (1024 + sinput.y) * 512;
//		}
//		else
//		{
//			yhash = sinput.y * 512;
//		}
//		if (sinput.z < 0)
//		{
//			zhash = (1024 + sinput.z) * 512 * 512;
//		}
//		else
//		{
//			zhash = sinput.z * 512 * 512;
//		}
//		return (xhash + yhash + zhash);
//	}
//};
//class MultipoleMoment
//{
//public:
//	MultipoleMoment
//	MultipoleMoment(MultipoleLocationMap & InputMultipoleLocationMap);
//	int MonopoleMoment;
//	int DipoleMoment[3];
//	int QuadrupoleMoment[3][3];
//	int OctupoleMoment[3][3][3];
//	//int HexadecapoleMoment[3][3][3][3];
//	//int DotriacontapoleMoment[3][3][3][3][3];
//	//int TetrahexacontapoleMoment[3][3][3][3][3][3];
//}
class MultipoleBar
{
public:
	int Charge;
	int Order;
	FIntVector StartBar;
	FIntVector EndBar;
	MultipoleBar() {};
	MultipoleBar(int ChargeInput, int OrderInput, FIntVector StartBarInput, FIntVector EndBarInput) :
		Charge(ChargeInput), Order(OrderInput), StartBar(StartBarInput), EndBar(EndBarInput) {};
	FORCEINLINE bool operator==(const MultipoleBar& B) const
	{
		if (Charge == B.Charge && Order == B.Order && StartBar == B.StartBar && EndBar == B.EndBar) {
			return true;
		}
		else return false;
	}
};

class Multipole 
{
public:
	Multipole(int, TArray<FIntVector>&);
	//Multipole(Multipole&, FIntVector);
	Multipole(int);
	int Charge;
	TArray<FIntVector> MultipoleVectors;
	int AppendBarMultiMap(FIntVector, TMultiMap<FIntVector, MultipoleBar >&);
	int AppendChargeMap(FIntVector, TMap<FIntVector, int>&);
	FString ToFStringMultipole(FIntVector InputPosition);
	int IncrementCharge();
	int DecrementCharge();
};
class MultipoleLocationMap 
{

public:
	MultipoleLocationMap();
	TMap<FIntVector, Multipole> MultipoleMap;
	TMap<FIntVector, int> ChargeMap();
	TMultiMap< FIntVector, MultipoleBar > BarMultiMap();
	int GetMonopoleMoment(int q, int x, int y, int z);
	int GetDipoleMoment(int q, int x, int y, int z, int Index0);
	int GetQuadrupoleMoment(int q, int x, int y, int z, int Index1, int Index0);
	int GetOctupoleMoment(int q, int x, int y, int z, int Index2, int Index1, int Index0);
	int GetTotalMonopoleMoment();
	int GetTotalDipoleMoment(int Index0);
	int GetTotalQuadrupoleMoment(int Index1, int Index0);
	int GetTotalOctupoleMoment(int Index2, int Index1, int Index0);
	

};
//class MonopoleDipoleQuadrupoleBreakdown {
//	public:
//		MonopoleDipoleQuadrupoleBreakdown(TMap<FIntVector, int> InputChargeMap);
//
//};
class MultipoleMoment
{
public:
	MultipoleMoment();
	MultipoleMoment operator+(MultipoleMoment& InputMultipoleMoment);
	void MultipoleMomentSet(MultipoleLocationMap& InputMultipoleLocationMap);
	int MonopoleMoment;
	int DipoleMoment[3];
	int QuadrupoleMoment[3][3];
	int OctupoleMoment[3][3][3];
	//int HexadecapoleMoment[3][3][3][3];
	//int DotriacontapoleMoment[3][3][3][3][3];
	//int TetrahexacontapoleMoment[3][3][3][3][3][3];
};

UCLASS(BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MULTIPOLEAXESDEMO_API UMultipoleAxesActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMultipoleAxesActorComponent(const FObjectInitializer& ObjectInitializer);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	bool InputErrorFlag;
	bool InputNotInitialized;
	bool OrdinaryButtonUpFlag;
	bool SpecialButtonUpFlag;
	bool WaitTillReleaseAllFlag;
	bool ValuesNotInitialized;
	bool OrdinaryButtonNotInitialized;
	bool SpecialButtonNotInitialized;
	FIntVector CurrentPositionState;
	FIntVector DownClickFocusPositionState;
	FIntVector DownClickOrdinaryPositionState;
	FIntVector DownClickSpecialPositionState;
public:
	MultipoleMoment MultipoleMomentCurrent;
	MultipoleMoment MultipoleMomentOffset;
	MultipoleMoment MultipoleMomentAdded;
	MultipoleMoment MultipoleMomentAddedOffset;
	MultipoleMoment MultipoleMomentIfChanged;
	// Called every frame
	FTransform GetCylinderTransform(FVector StartPosition, FVector EndPosition, float Radius);
	//FTransform GetCylinderTransformFromFIntVector(FIntVector StartCoord, FIntVector EndCoord, int Charge, int Order);
	FTransform GetSphereTransform(FVector StartPosition, float Radius);
	FTransform GetSphereTransformFromFIntVector(FIntVector Position, int Charge);
	FTransform GetCylinderTransformFromMultipoleFIntVectorFIntVectorChargeOrder(int Charge, int Order, FIntVector StartCoord, FIntVector EndCoord);
	FTransform GetCylinderTransformFromMultipoleFIntVectorFIntVectorChargeOrderAxes(int Charge, int Order, FIntVector StartCoord, FIntVector EndCoord);
	FTransform GetCylinderTransformFromFIntVectorFIntVectorTickMark(FIntVector PositionCoord, FIntVector SingleDisplacement);
	FTransform GetCylinderTransformFromFIntVectorTickMarkX(FIntVector PositionCoord);
	FTransform GetCylinderTransformFromFIntVectorTickMarkY(FIntVector PositionCoord);
	FTransform GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector PositionCoord);
	FTransform GetCylinderTransformAxes(FIntVector StartCoord, FIntVector EndCoord);
	FTransform GetCylinderTransformGridLine(FIntVector StartCoord, FIntVector EndCoord);
	int OutputEnumEdge(int x0, int y0, int z0);
	UFUNCTION(BlueprintCallable, Category = "MultipoleCustom")
		TMap<FIntVector, int> GetChargeArrayCurrentBP();
	UFUNCTION(BlueprintCallable, Category = "MultipoleCustom")
		int UpdateMaximumRangeValuesBP();
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleTickMark;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleTickMarkX;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleTickMarkY;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleTickMarkZ;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleAxes;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleAxesBase100;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleAxesX;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleAxesY;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FVector FVectorScaleAxesZ;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FTransform FTransformRotateScaleTickMarkX;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FTransform FTransformRotateScaleTickMarkY;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FTransform FTransformRotateScaleTickMarkZ;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FTransform FTransformRotateScaleAxesX;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FTransform FTransformRotateScaleAxesY;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FTransform FTransformRotateScaleAxesZ;
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int GetIfChangedCartesianMultipoleMoment(TArray<int>& InputTArrray);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int GetCurrentCartesianMultipoleMoment(TArray<int>& InputTArrray);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int GetAddedOffsetCartesianMultipoleMoment(TArray<int>& InputTArrray);
	
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		FIntPoint GetIfChangedSphericalMultipoleMomentCoefficient(int InputL, int InputM);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		FIntPoint GetCurrentSphericalMultipoleMomentCoefficient(int InputL, int InputM);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		FIntPoint GetAddedOffsetSphericalMultipoleMomentCoefficient(int InputL, int InputM);

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromMapGetTotalMonopoleMoment();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromMapGetTotalDipoleMoment(int Index0);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromMapGetTotalQuadrupoleMoment(int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromMapGetTotalOctupoleMoment(int Index2, int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromAlteredMapGetTotalMonopoleMoment();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromAlteredMapGetTotalDipoleMoment(int Index0);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromAlteredMapGetTotalQuadrupoleMoment(int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int FromAlteredMapGetTotalOctupoleMoment(int Index2, int Index1, int Index0);


	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int CurrentMonopoleMoment();
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int CurrentDipoleMoment(int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int CurrentQuadrupoleMoment(int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int CurrentOctupoleMoment(int Index2, int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int AddedOffsetMonopoleMoment();
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int AddedOffsetDipoleMoment(int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int AddedOffsetQuadrupoleMoment(int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int AddedOffsetOctupoleMoment(int Index2, int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int IfChangedMonopoleMoment();
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int IfChangedDipoleMoment(int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int IfChangedQuadrupoleMoment(int Index1, int Index0);
	UFUNCTION(BlueprintCallable, Category = "FxnGetMultipoleMoments")
		int IfChangedOctupoleMoment(int Index2, int Index1, int Index0);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		int CurrentFocusEnum_None_Ordinary_Special;
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		FTransform GetSphereForClickCurrent();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		FTransform GetSphereForClickOrdinary();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		FTransform GetSphereForClickSpecial();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int UpdateChargeArrays();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int ChangeRangeX(int InputRangeX);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int ChangeRangeZ(int InputRangeZ);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int ChangeSpacing(float InputSpacing);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int UpdateAxes();
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int UpdateAxesDifferent();
	FVector GetVector(FIntVector InputVectorFIntVector);
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	int InputUpdate(bool ClickUp, bool SpecialButton, FIntVector  CurrentPositionInput, FIntVector DownClickPositionInput);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int MouseButtonEventProcess(bool ButtonUpFlagInput, bool SpecialButtonFlagInput);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int MovementEventProcess(int x0, int y0, int z0);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
		int SetNewAxisOffset(int InputEnumXYZ, int InputValueXYZ);
	class MultipoleLocationMap MultipoleSetup;
	class MultipoleLocationMap MultipoleSetupToAdd;
	class MultipoleLocationMap MultipoleSetupToOffset;
	class MultipoleLocationMap MultipoleSetupNewChargesOnly;
	//	UPROPERTY(BlueprintReadWrite, VisibleAnywhere);
	MultipoleLocationMap GetNewToAdd(bool ClickUp, bool SpecialButton, FIntVector  CurrentPositionInput, FIntVector DownClickPositionInput);
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		bool GridlinesFlag;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int AbsMaxRangeX;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int AbsMaxRangeY;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int AbsMaxRangeZ;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int DefaultRange;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int MultipoleAxesEnumXYZ;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int MultipoleAxesValueXYZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		bool UpdatedChargeArrays;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		bool UpdatedAxes;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int RangeX;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int RangeY;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int RangeZ;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float Spacing;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float TickMarkProportion;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float TickMarkRadiusProportion;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float AxesRadiusProportion;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float RadiusPerUnitChargeProportion;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		float RadiusPerUnitMultipoleProportion;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> PositiveChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> NegativeChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> MultipoleBarCylinders;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> AddPositiveChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> AddNegativeChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> AddMultipoleBarCylinders;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> OffsetPositiveChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> OffsetNegativeChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> OffsetMultipoleBarCylinders;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> AxesCylinders;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> TickMarkCylinders;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> TempPositiveChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> TempNegativeChargeSpheres;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<FTransform> TempMultipoleBarCylinders;

	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapPositiveChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapNegativeChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapMultipoleBarCylinders;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapAddPositiveChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapAddNegativeChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapAddMultipoleBarCylinders;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapOffsetPositiveChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapOffsetNegativeChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapOffsetMultipoleBarCylinders;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapTempPositiveChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapTempNegativeChargeSpheres;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	TMap<FTransform, int> MapTempMultipoleBarCylinders;
};
