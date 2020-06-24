//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "MultipoleDemoActor.generated.h"
//
//UCLASS()
//class MULTIPOLEAXESDEMO_API AMultipoleDemoActor : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AMultipoleDemoActor();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//};

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
//#include "ConstructorHelpers.h"
#include "MultipoleAxesActorComponent.h"
#include "MultipoleDemoActor.generated.h"

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MULTIPOLEAXESDEMO_API AMultipoleDemoActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMultipoleDemoActor(const FObjectInitializer& ObjectInitializer);
	//float ScalingFactor = 100.0;
	//int AxesRangeX = 15;
	//int AxesRangeY = 0;
	//int AxesRangeZ = 15;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	bool bUpdatedAxes;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	bool bUpdatedCharges;
	//UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	//	bool bSuccessLoadingMeshes;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UBoxComponent* CollisionComponent;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	class UMaterial* BlackMaterial;
	//UPROPERTY(BlueprintReadWrite,EditAnywhere)
	//	class UMaterial* RedMaterial;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	class UMaterial* GreyMaterial;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	class UMaterial* GlowingMaterial;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* TickMarkInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* AxesInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* TempMultipoleBarInstancedTempMultipoleBarInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* PositiveChargeInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* NegativeChargeInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* MultipoleBarInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* TempPositiveChargeInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* TempNegativeChargeInstanced;
	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	//	class UInstancedStaticMeshComponent* TempMultipoleBarInstanced;
	//UFUNCTION(BlueprintCallable)
	//	void UpdateAxes(
	//		TArray<FTransform>& TArrayFTransformAxes, 
	//		TArray<FTransform>& TArrayFTransformTickMarks);
	//UFUNCTION(BlueprintCallable)
	//	void UpdateCharges(
	//		TArray<FTransform>& TArrayFTransformPositive,
	//		TArray<FTransform>& TArrayFTransformNegative,
	//		TArray<FTransform>& TArrayFTransformMultipoleBar,
	//		TArray<FTransform>& TArrayFTransformTempPositive,
	//		TArray<FTransform>& TArrayFTransformTempNegative,
	//		TArray<FTransform>& TArrayFTransformTempMultipoleBar);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
