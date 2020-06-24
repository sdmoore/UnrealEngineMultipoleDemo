// Fill out your copyright notice in the Description page of Project Settings.


#include "MultipoleDemoActor.h"

//// Sets default values
//AMultipoleDemoActor::AMultipoleDemoActor()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}
//
//// Called when the game starts or when spawned
//void AMultipoleDemoActor::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void AMultipoleDemoActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

// Fill out your copyright notice in the Description page of Project Settings.


#include "MultipoleDemoActor.h"

// Sets default values
AMultipoleDemoActor::AMultipoleDemoActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
//	bUpdatedAxes = false;
//	bUpdatedCharges = false;
//	FVector BoxExtentCalculated = FVector(ScalingFactor * (AxesRangeX + 1), ScalingFactor * (AxesRangeY + 1), ScalingFactor * (AxesRangeZ + 1));
//	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
//	CollisionComponent->InitBoxExtent(BoxExtentCalculated);
//	RootComponent = CollisionComponent;
//	PositiveChargeInstanced = NewObject<UInstancedStaticMeshComponent>();
//	PositiveChargeInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative,true));
//	NegativeChargeInstanced = NewObject<UInstancedStaticMeshComponent>();
//	NegativeChargeInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	MultipoleBarInstanced = NewObject<UInstancedStaticMeshComponent>();
//	MultipoleBarInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	TickMarkInstanced = NewObject<UInstancedStaticMeshComponent>();
//	TickMarkInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	MultipoleBarInstanced = NewObject<UInstancedStaticMeshComponent>();
//	MultipoleBarInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	AxesInstanced = NewObject<UInstancedStaticMeshComponent>();
//	AxesInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	TempPositiveChargeInstanced = NewObject<UInstancedStaticMeshComponent>();
//	TempPositiveChargeInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	TempNegativeChargeInstanced = NewObject<UInstancedStaticMeshComponent>();
//	TempNegativeChargeInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	TempMultipoleBarInstanced = NewObject<UInstancedStaticMeshComponent>();
//	TempMultipoleBarInstanced->AttachToComponent(
//		this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	
//	//BlackMaterial = CreateDefaultSubobject<UMaterial>(TEXT("BlackMaterial"));
//	//RedMaterial = CreateDefaultSubobject<UMaterial>(TEXT("RedMaterial"));
//	//GreyMaterial = CreateDefaultSubobject<UMaterial>(TEXT("GreyMaterial"));
//	//GlowingMaterial = CreateDefaultSubobject<UMaterial>(TEXT("GlowingMaterial"));
//
//	//PositiveChargeInstanced->SetMaterial(0, BlackMaterial);
//
//	//static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));
//	//static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("C:\\Program Files\\Epic Games\\UE_4.25\\Engine\\Content\\BasicShape\\Sphere.uasset"));
//	//static ConstructorHelpers::FObjectFinder<UMaterial> BasicBlackAsset(TEXT("Material'/Game/M_BasicBlack.M_BasicBlack'"));
//	//static ConstructorHelpers::FObjectFinder<UMaterial> BasicRedAsset(TEXT("Material'/Game/M_BasicRed.M_BasicRed'"));
//	//static ConstructorHelpers::FObjectFinder<UMaterial> BasicGreyAsset(TEXT("Material'/Game/M_BasicGrey.M_BasicGrey'"));
//	//static ConstructorHelpers::FObjectFinder<UMaterial> BasicGlowingAsset(TEXT("Material'/Game/M_BasicGlowing.M_BasicGlowing'"));
//	BlackMaterial = CreateDefaultSubobject<UMaterial>("Material'/Game/M_BasicBlack.M_BasicBlack'");
//	RedMaterial = CreateDefaultSubobject<UMaterial>("Material'/Game/M_BasicRed.M_BasicRed'");
//	GreyMaterial = CreateDefaultSubobject<UMaterial>("Material'/Game/M_BasicGrey.M_BasicGrey'");
//	GlowingMaterial = CreateDefaultSubobject<UMaterial>("Material'/Game/M_BasicGlowing.M_BasicGlowing'");
//	//if (BasicBlackAsset.Succeeded() &&
//	//	BasicRedAsset.Succeeded() &&
//	//	BasicGreyAsset.Succeeded() &&
//	//	BasicGlowingAsset.Succeeded())
//	//{
//	//	PositiveChargeInstanced->SetMaterial(0, BasicBlackAsset);
//	//	NegativeChargeInstanced->SetMaterial(0, BasicRedAsset);
//	//	MultipoleBarInstanced->SetMaterial(0, BasicGreyAsset);
//	//	TempPositiveChargeInstanced->SetMaterial(0, BasicGlowingAsset);
//	//	TempNegativeChargeInstanced->SetMaterial(0, BasicGlowingAsset);
//	//	TempMultipoleBarInstanced->SetMaterial(0, BasicGlowingAsset);
//	//	AxesInstanced->SetMaterial(0, BasicBlackAsset);
//	//	TickMarkInstanced->SetMaterial(0, BasicGlowingAsset);
//	//}
//	//TickMarkInstanced->SetMaterial(0, BasicGlowingAsset);
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
//	if (SphereAsset.Succeeded())
//	{
//		PositiveChargeInstanced->SetStaticMesh(SphereAsset.Object);
//		PositiveChargeInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		PositiveChargeInstanced->SetWorldScale3D(FVector(1.f));
//
//		NegativeChargeInstanced->SetStaticMesh(SphereAsset.Object);
//		NegativeChargeInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		NegativeChargeInstanced->SetWorldScale3D(FVector(1.f));
//
//		TempPositiveChargeInstanced->SetStaticMesh(SphereAsset.Object);
//		TempPositiveChargeInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		TempPositiveChargeInstanced->SetWorldScale3D(FVector(1.f));
//
//		TempNegativeChargeInstanced->SetStaticMesh(SphereAsset.Object);
//		TempNegativeChargeInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		TempNegativeChargeInstanced->SetWorldScale3D(FVector(1.f));
//	}
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
//	//static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("C:\\Program Files\\Epic Games\\UE_4.25\\Engine\\Content\\BasicShape\\Cylinder.uasset"));
//	if (CylinderAsset.Succeeded())
//	{
//		MultipoleBarInstanced->SetStaticMesh(CylinderAsset.Object);
//		MultipoleBarInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		MultipoleBarInstanced->SetWorldScale3D(FVector(1.f));
//		TempMultipoleBarInstanced->SetStaticMesh(CylinderAsset.Object);
//		TempMultipoleBarInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		TempMultipoleBarInstanced->SetWorldScale3D(FVector(1.f));
//		AxesInstanced->SetStaticMesh(CylinderAsset.Object);
//		AxesInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		AxesInstanced->SetWorldScale3D(FVector(1.f));
//		TickMarkInstanced->SetStaticMesh(CylinderAsset.Object);
//		TickMarkInstanced->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
//		TickMarkInstanced->SetWorldScale3D(FVector(1.f));
//	}
//	//	(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
//	//// Check if the MeshAsset is valid before setting it
//	//if (MeshAsset.Object != nullptr)
//	//{
//	//	Mesh->SetStaticMesh(MeshAsset.Object);
//	//};
//	//UMaterialInterface* BlackMaterialInterface = CreateDefaultSubobject<UMaterialInterface>(TEXT("Black Material"));
//	//BlackMaterial = BlackMaterialInterface;// ->GetMaterial();
////	PrimaryMultipoleAxesActorComponent = *UMultipoleAxesActorComponent();
//
//	//BlackMaterial = CreateDefaultSubobject<UMaterialInterface>(TEXT("Black Material"));
//	//RedMaterial = CreateDefaultSubobject<UMaterialInterface>(TEXT("Red Material"));
//	//GreyMaterial = CreateDefaultSubobject<UMaterialInterface>(TEXT("Grey Material"));
//	//GlowingMaterial = CreateDefaultSubobject<UMaterialInterface>(TEXT("Glowing Material"));
//
//
//	//PositiveChargeInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TPositiveCharge"));
//	//NegativeChargeInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("NegativeCharge"));
//	//MultipoleBarInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent >(TEXT("MultipoleBar"));
//	//TickMarkInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TickMarks"));
//	//AxesInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Axes"));
//	//TempPositiveChargeInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TempPositiveCharge"));
//	//TempNegativeChargeInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TempNegativeCharge"));
//	//TempMultipoleBarInstanced = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TempMultipoleBar"));
//
//	//PositiveChargeInstanced->SetMaterial(0, BlackMaterial);
//	NegativeChargeInstanced->SetMaterial(0, RedMaterial);
//	MultipoleBarInstanced->SetMaterial(0, GreyMaterial);
//	TickMarkInstanced->SetMaterial(0, GlowingMaterial);
//	AxesInstanced->SetMaterial(0, BlackMaterial);
//	TempPositiveChargeInstanced->SetMaterial(0, GlowingMaterial);
//	TempNegativeChargeInstanced->SetMaterial(0, GlowingMaterial);
//	TempMultipoleBarInstanced->SetMaterial(0, GlowingMaterial);
//
//	//PrimaryMultipoleAxesActorComponent = PrimaryMultipoleAxesActorComponent();
//	//PrimaryMultipoleAxesActorComponent->AttachToComponent(
//	//	this->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
//	//auto MeshAssetSphere = ConstructorHelpers::FObjectFinder<UStaticMesh>
//	//	(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
//	// Check if the MeshAsset is valid before setting it
//	//
//	//if (MeshAssetSphere.Object != nullptr)
//	//{
//	//	PositiveChargeInstanced->SetStaticMesh(MeshAssetSphere.Object);
//	//	NegativeChargeInstanced->SetStaticMesh(MeshAssetSphere.Object);
//	//	TempPositiveChargeInstanced->SetStaticMesh(MeshAssetSphere.Object);
//	//	TempNegativeChargeInstanced->SetStaticMesh(MeshAssetSphere.Object);
//	//}
//	//auto MeshAssetCylinder = ConstructorHelpers::FObjectFinder<UStaticMesh>
//	//	(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
//	//// Check if the MeshAsset is valid before setting it
//	//if (MeshAssetCylinder.Object != nullptr)
//	//{
//	//	MultipoleBarInstanced->SetStaticMesh(MeshAssetCylinder.Object);
//	//	TickMarkInstanced->SetStaticMesh(MeshAssetCylinder.Object);
//	//	AxesInstanced->SetStaticMesh(MeshAssetCylinder.Object);
//	//	TempMultipoleBarInstanced->SetStaticMesh(MeshAssetCylinder.Object);
//	//}
//	//// Check if the MeshAsset is valid before setting it
//	//if (MeshAssetSphere.Object != nullptr && MeshAssetCylinder.Object != nullptr) 
//	//	bSuccessLoadingMeshes = true;
//	//else 
//	//	bSuccessLoadingMeshes = false;
//	bSuccessLoadingMeshes = true;
}


// Called when the game starts or when spawned
void AMultipoleDemoActor::BeginPlay()
{
	Super::BeginPlay();
	//bUpdatedAxes = false;
	//bUpdatedCharges = false;
	////UpdateAxes();
	////UpdateCharges();
	////if (bSuccessLoadingMeshes)
	////{
	////	UpdateAxes();
	////	UpdateCharges();
	////}
}
void AMultipoleDemoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (!bUpdatedAxes)
	//	UpdateAxes();
	//if (!bUpdatedCharges)
	//	UpdateCharges();

}
//void AMultipoleDemoActor::UpdateAxes(
//	TArray<FTransform>& TArrayFTransformAxes, 
//	TArray<FTransform>& TArrayFTransformTickMarks)
//{
//	AxesInstanced->ClearInstances();
//	for (auto& iter : TArrayFTransformAxes)
//	{
//		AxesInstanced->AddInstance(iter);
//	}
//	TickMarkInstanced->ClearInstances();
//	for (auto& iter : TArrayFTransformTickMarks)
//	{
//		TickMarkInstanced->AddInstance(iter);
//	}
//	bUpdatedAxes = true;
//	return;
//}
//void AMultipoleDemoActor::UpdateCharges(
//	TArray<FTransform>& TArrayFTransformPositive,
//	TArray<FTransform>& TArrayFTransformNegative,
//	TArray<FTransform>& TArrayFTransformMultipoleBar,
//	TArray<FTransform>& TArrayFTransformTempPositive,
//	TArray<FTransform>& TArrayFTransformTempNegative,
//	TArray<FTransform>& TArrayFTransformTempMultipoleBar)
//{
//	PositiveChargeInstanced->ClearInstances();
//	for (auto& iter : TArrayFTransformPositive)
//	{
//		PositiveChargeInstanced->AddInstance(iter);
//	}
//	NegativeChargeInstanced->ClearInstances();
//	for (auto& iter : TArrayFTransformNegative)
//	{
//		NegativeChargeInstanced->AddInstance(iter);
//	}
//	MultipoleBarInstanced->ClearInstances();
//	for (auto& iter : TArrayFTransformMultipoleBar)
//	{
//		MultipoleBarInstanced->AddInstance(iter);
//	}
//	bUpdatedCharges = true;
//	return;
//}

