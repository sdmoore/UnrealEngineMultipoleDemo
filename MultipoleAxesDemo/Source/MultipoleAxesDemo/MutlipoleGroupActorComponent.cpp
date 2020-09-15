// Fill out your copyright notice in the Description page of Project Settings.


#include "MutlipoleGroupActorComponent.h"
//
//class Multipole
//{
//public:
//	Multipole(int, TArray<FIntVector>&);
//	//Multipole(Multipole&, FIntVector);
//	Multipole(int);
//	int Charge;
//	TArray<FIntVector> MultipoleVectors;
//	int AppendBarMultiMap(FIntVector, TMultiMap<FIntVector, MultipoleBar >&);
//	int AppendChargeMap(FIntVector, TMap<FIntVector, int>&);
//	FString ToFStringMultipole(FIntVector InputPosition);
//	int IncrementCharge();
//	int DecrementCharge();
//};
//class myClass {
//private:
//	int MonopoleMoment_;
//	int DipoleMoment_[3];
//	int QuadrupoleMoment_[3][3];
//	int OctupoleMoment_[3][3][3];
//public:
//	void f() {
//		MonopoleMoment_ = 10; // Note use of private var
//	}
//	const int& MonopoleMoment;
//	const int DipoleMoment[3];
//	const int QuadrupoleMoment[3][3];
//	const int OctupoleMoment[3][3][3];
//	myClass() : 
//		MonopoleMoment_(0), MonopoleMoment(MonopoleMoment_),
//		x_(0), x(x_),
//		x_(0), x(x_),
//		x_(0), x(x_)
//	{} // must have constructor to initialize reference
//};
// Sets default values for this component's properties
UMutlipoleGroupActorComponent::UMutlipoleGroupActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMutlipoleGroupActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMutlipoleGroupActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

