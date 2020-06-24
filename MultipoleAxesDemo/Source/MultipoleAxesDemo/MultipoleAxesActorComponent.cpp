// Fill out your copyright notice in the Description page of Project Settings.


#include "MultipoleAxesActorComponent.h"

// Sets default values for this component's properties
//UMultipoleAxesActorComponent::UMultipoleAxesActorComponent()
//{
//	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
//	// off to improve performance if you don't need them.
//	PrimaryComponentTick.bCanEverTick = true;
//
//	// ...
//}
// Called when the game starts
void UMultipoleAxesActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UMultipoleAxesActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


//////// START OTHER
//
//FIntVector::FIntVector(int a, int b, int c) { x = a, y = b, z = c; };
//FIntVector::FIntVector() { x = 0, y = 0, z = 0; };
//FIntVector FIntVector::operator+(FIntVector in0)
//{
//	FIntVector ReturnValue;
//	ReturnValue.X = x + in0.X;
//	ReturnValue.Y = y + in0.Y;
//	ReturnValue.Z = z + in0.Z;
//	return ReturnValue;
//	//return FIntVector(in0.X + x, in0.Y + y, in0.Z + z);
//}
//FIntVector FIntVector::operator-(FIntVector in0)
//{
//	FIntVector ReturnValue;
//	ReturnValue.X = x - in0.X;
//	ReturnValue.Y = y - in0.Y;
//	ReturnValue.Z = z - in0.Z;
//	return ReturnValue;
//	//return FIntVector(in0.X - x, in0.Y - y, in0.Z - z);
//}
//FIntVector FIntVector::operator*(FIntVector in0)
//{
//	FIntVector ReturnValue;
//	ReturnValue.X = x * in0.X;
//	ReturnValue.Y = y * in0.Y;
//	ReturnValue.Z = z * in0.Z;
//	return ReturnValue;
//	//return FIntVector(in0.X * x, in0.Y * y, in0.Z * z);
//}
//void FIntVector::operator+=(FIntVector in0)
//{
//	x += in0.X;
//	y += in0.Y;
//	z += in0.Z;
//	return;
//}
//void FIntVector::operator-=(FIntVector in0)
//{
//	x -= in0.X;
//	y -= in0.Y;
//	z -= in0.Z;
//	return;
//}
//FString FIntVector::ToFStringFIntVector( )
//{
//	FString FStringOutput;
//	FStringOutput += "(";
//	FStringOutput += FString::FromInt(x);
//	FStringOutput += ",";
//	FStringOutput += FString::FromInt(y);
//	FStringOutput += ",";
//	FStringOutput += FString::FromInt(z);
//	FStringOutput += ")";
//	//	FStringOutput = FString::Format("(%d,%d,%d)", Args);
//	return FStringOutput;
//}

int Multipole::AppendChargeMap(FIntVector InputPosition, TMap<FIntVector, int>& InputChargeMapRef)
{
	int PermutationDigits = MultipoleVectors.Num();
	int PermutationTotal = ((int)(pow(2, MultipoleVectors.Num()) + 0.001));
	for (int index = 0; index < PermutationTotal; index++)
	{
		int indexcurrent = index;
		FIntVector CurrentPositionLocal = FIntVector(InputPosition.X, InputPosition.Y, InputPosition.Z);
		int CurrentCharge = Charge;
		for (int i = 0; i < PermutationDigits; i++)
		{
			if (indexcurrent % 2 == 1) {
				CurrentPositionLocal += MultipoleVectors[i];
			}
			else
			{
				CurrentPositionLocal -= MultipoleVectors[i];
				CurrentCharge *= -1;
			}
			indexcurrent /= 2;
		}
		if (InputChargeMapRef.Contains(CurrentPositionLocal))
		{
			int ExistingCharge = *(InputChargeMapRef.Find(CurrentPositionLocal));
			int NewCharge = ExistingCharge + CurrentCharge;
			InputChargeMapRef.Add(CurrentPositionLocal, NewCharge);
		}
		else
		{
			InputChargeMapRef.Add(CurrentPositionLocal, CurrentCharge);
		}
	}
	return 0;
}
Multipole::Multipole(int InputCharge, TArray<FIntVector>& InputMultipoleVectors)
{
	Charge = InputCharge;
	for (auto& CurrentFIntVector : InputMultipoleVectors)
	{
		MultipoleVectors.Add(FIntVector(CurrentFIntVector));
	}
}
Multipole::Multipole(int InputCharge)
{
	Charge = InputCharge;
}
int Multipole::AppendBarMultiMap(FIntVector InputPosition, TMultiMap<FIntVector, MultipoleBar >& InputBarMultiMapRef)
{
	if (!(MultipoleVectors.Num() > 0))
	{
		InputBarMultiMapRef.AddUnique(InputPosition, MultipoleBar(Charge, 0, InputPosition, InputPosition));
	}
	else
	{
		for (int Order = 1; Order <= MultipoleVectors.Num(); Order++)
		{
			int PermutationDigits = MultipoleVectors.Num() - Order;
			int PermutationTotal = ((int)(pow(2, PermutationDigits) + 0.001));
			for (int index = 0; index < PermutationTotal; index++)
			{
				int indexcurrent = index;
				FIntVector CurrentPositionLocal = FIntVector(InputPosition.X, InputPosition.Y, InputPosition.Z);
				int CurrentCharge = Charge;
				for (int i = 0; i < PermutationDigits; i++)
				{
					if (indexcurrent % 2 == 1)
					{
						CurrentPositionLocal += MultipoleVectors[i];
						
					}
					else
					{
						CurrentPositionLocal -= MultipoleVectors[i];
						CurrentCharge *= -1;
					}
					indexcurrent /= 2;
					
				}
				FIntVector StartLocal = CurrentPositionLocal - MultipoleVectors[PermutationDigits];
				FIntVector EndLocal = CurrentPositionLocal + MultipoleVectors[PermutationDigits];
				MultipoleBar MultipoleBarLocal = MultipoleBar(CurrentCharge, Order, StartLocal, EndLocal);
				InputBarMultiMapRef.AddUnique(InputPosition, MultipoleBarLocal);
			}
			if (Order == 1000)
			{
				UE_LOG(LogTemp, Warning, TEXT("BIGMULTIPOLE"));//CurrentPositionLocal% d% d% d"), CurrentPositionLocal.X, CurrentPositionLocal.Y, CurrentPositionLocal.Z);
			}
			
		}
	}
	return 0;
}
FString Multipole::ToFStringMultipole(FIntVector InputPosition)
{
	FString FStringOutput = "";
	//FStringOutput += InputPosition.ToFStringFIntVector();
	FStringOutput += "->";
	FStringOutput += FString::FromInt(Charge);

	for (auto& iter : MultipoleVectors)
	{
		FStringOutput += ",";
		//FStringOutput += iter.ToFStringFIntVector();

	}
	return FStringOutput;
}
int Multipole::IncrementCharge()
{
	if (MultipoleVectors.Num() == 0)
	{
		Charge += 1;
	}
	else if (Charge > 0)
	{
		Charge += 1;
	}
	else if (Charge < 0)
	{
		Charge -= 1;
	}
	return 0;
}
int Multipole::DecrementCharge()
{
	if (MultipoleVectors.Num() == 0)
	{
		Charge -= 1;
	}
	else if (Charge > 0)
	{
		Charge -= 1;
	}
	else if (Charge < 0)
	{
		Charge += 1;
	}
	return 0;
}
TMap<FIntVector, int> MultipoleLocationMap::ChargeMap()
{
	TMap<FIntVector, int> OutputChargeMap;
	for (auto& CurrentPair : MultipoleMap) {
		Multipole CurrentMP = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		CurrentMP.AppendChargeMap(CurrentKey, OutputChargeMap);
	}

	return OutputChargeMap;
}
//MultipoleMoment MultipoleLocationMap::GetMultipoleMoment(MultipoleMap& MultipoleMapInput)
//{
//	MultipoleMoment MultipoleMomentOutput;
//	MultipoleMomentOutput.MonopoleMoment = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		MultipoleMomentOutput.DipoleMoment[i] = 0;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			MultipoleMomentOutput.QuadrupoleMoment[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				if (i == 0 && j == 0 && k == 0)
//				{
//					MultipoleMomentOutput.QuadrupoleMoment[i][j][k] = 0;
//				}
//			}
//		}
//	}
//	TMap<FIntVector, int> ChargeMapToProcess = MultipoleMapInput.ChargeMap();
//	for(auto& iter : ChargeMapToProcess)
//	{
//		FIntVector CurrentKey = iter.Key;
//		int q = iter.Value;
//		int x = CurrentKey.X;
//		int y = CurrentKey.Y;
//		int z = CurrentKey.Z;
//		MultipoleMomentOutput.MonopoleMoment += q;
//		MultipoleMomentOutput.DipoleMoment[0] += q * (x);
//		MultipoleMomentOutput.DipoleMoment[1] += q * (y);
//		MultipoleMomentOutput.DipoleMoment[2] += q * (z);
//		MultipoleMomentOutput.QuadrupoleMoment[0][0] += q * (2 * x ^ 2 - y ^ 2 - z ^ 2);
//		MultipoleMomentOutput.QuadrupoleMoment[0][1] += q * (3 * x * y);
//		MultipoleMomentOutput.QuadrupoleMoment[0][2] += q * (3 * x * z);
//		MultipoleMomentOutput.QuadrupoleMoment[1][0] += q * (3 * x * y);
//		MultipoleMomentOutput.QuadrupoleMoment[1][1] += q * (-x ^ 2 + 2 * y ^ 2 - z ^ 2);
//		MultipoleMomentOutput.QuadrupoleMoment[1][2] += q * (3 * y * z);
//		MultipoleMomentOutput.QuadrupoleMoment[2][0] += q * (3 * x * z);
//		MultipoleMomentOutput.QuadrupoleMoment[2][1] += q * (3 * y * z);
//		MultipoleMomentOutput.QuadrupoleMoment[2][2] += q * (-x ^ 2 - y ^ 2 + 2 * z ^ 2);
//		MultipoleMomentOutput.OctupoleMoment[0][0][0] += q * (3 * x * (2 * x ^ 2 - 3 * (y ^ 2 + z ^ 2)));
//		MultipoleMomentOutput.OctupoleMoment[0][0][1] += q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[0][0][2] += q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[0][1][0] += q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[0][1][1] += q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[0][1][2] += q * (15 * x * y * z);
//		MultipoleMomentOutput.OctupoleMoment[0][2][0] += q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[0][2][1] += q * (15 * x * y * z);
//		MultipoleMomentOutput.OctupoleMoment[0][2][2] += q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
//		MultipoleMomentOutput.OctupoleMoment[1][0][0] += q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[1][0][1] += q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[1][0][2] += q * (15 * x * y * z);
//		MultipoleMomentOutput.OctupoleMoment[1][1][0] += q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[1][1][1] += q * (-3 * y * (3 * x ^ 2 - 2 * y ^ 2 + 3 * z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[1][1][2] += q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[1][2][0] += q * (15 * x * y * z);
//		MultipoleMomentOutput.OctupoleMoment[1][2][1] += q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[1][2][2] += q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
//		MultipoleMomentOutput.OctupoleMoment[2][0][0] += q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[2][0][1] += q * (15 * x * y * z);
//		MultipoleMomentOutput.OctupoleMoment[2][0][2] += q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
//		MultipoleMomentOutput.OctupoleMoment[2][1][0] += q * (15 * x * y * z);
//		MultipoleMomentOutput.OctupoleMoment[2][1][1] += q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
//		MultipoleMomentOutput.OctupoleMoment[2][1][2] += q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
//		MultipoleMomentOutput.OctupoleMoment[2][2][0] += q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
//		MultipoleMomentOutput.OctupoleMoment[2][2][1] += q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
//		MultipoleMomentOutput.OctupoleMoment[2][2][2] += q * (-3 * z * (3 * x ^ 2 + 3 * y ^ 2 - 2 * z ^ 2));
//	}
//	return MultipoleMomentOutput;
//}
int MultipoleLocationMap::GetMonopoleMoment(int q, int x, int y, int z)
{
	return q;
}
int MultipoleLocationMap::GetDipoleMoment(int q, int x, int y, int z, int Index0)
{

	if (Index0 == 0) 
	{
		return (q * (x));
	}
	else if (Index0 == 1) 
	{
		return (q * (y));
	}
	else if (Index0 == 2) 
	{
		return (q * (z));
	}
	else return 0;
}
int MultipoleLocationMap::GetQuadrupoleMoment(int q, int x, int y, int z, int Index1, int Index0)
{
	if (Index1 == 0) 
	{
		if (Index0 == 0)
		{
			return (q * (2 * x ^ 2 - y ^ 2 - z ^ 2));
		}
		else if (Index0 == 1) 
		{
			return (q * (3 * x * y));
		}
		else if (Index0 == 2) 
		{
			return (q * (3 * x * z));
		}
	}
	else if (Index1 == 1) 
	{
		if (Index0 == 0) 
		{
			return (q * (3 * x * y));
		}
		else if (Index0 == 1) 
		{
			return (q * (-x ^ 2 + 2 * y ^ 2 - z ^ 2));
		}
		else if (Index0 == 2) 
		{
			return (q * (3 * y * z));
		}
	}
	else if (Index1 == 2) 
	{
		if (Index0 == 0) 
		{
			return (q * (3 * x * z));
		}
		else if (Index0 == 1) 
		{
			return (q * (3 * y * z));
		}
		else if (Index0 == 2) 
		{
			return (q * (-x ^ 2 - y ^ 2 + 2 * z ^ 2));
		}
	}
	return 0;
}
int MultipoleLocationMap::GetOctupoleMoment(int q, int x, int y, int z, int Index2, int Index1, int Index0)
{
	if (Index2 == 0) 
	{
		if (Index1 == 0) 
		{
			if (Index0 == 0) 
			{
				return (q * (3 * x * (2 * x ^ 2 - 3 * (y ^ 2 + z ^ 2))));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
			}
			else return 0;
		}
		else if (Index1 == 1) 
		{
			if (Index0 == 0) 
			{
				return (q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 2) 
			{
				return (q * (15 * x * y * z));
			}
			else return 0;
		}
		else if (Index1 == 2) 
		{
			if (Index0 == 0) 
			{
				return (q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 1) 
			{
				return (q * (15 * x * y * z));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
			}
			else return 0;
		}
		else return 0;
	}
	else if (Index2 == 1) 
	{
		if (Index1 == 0) 
		{
			if (Index0 == 0) 
			{
				return (q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 2) 
			{
				return (q * (15 * x * y * z));
			}
			else return 0;
		}
		else if (Index1 == 1) 
		{
			if (Index0 == 0) 
			{
				return (q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * y * (3 * x ^ 2 - 2 * y ^ 2 + 3 * z ^ 2)));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
			}
			else return 0;
		}
		else if (Index1 == 2) 
		{
			if (Index0 == 0) 
			{
				return (q * (15 * x * y * z));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
			}
			else return 0;
		}
		else return 0;
	}
	else if (Index2 == 2) 
	{
		if (Index1 == 0) 
		{
			if (Index0 == 0) 
			{
				return (q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 1) 
			{
				return (q * (15 * x * y * z));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
			}
			else return 0;
		}
		else if (Index1 == 1) 
		{
			if (Index0 == 0) 
			{
				return (q * (15 * x * y * z));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
			}
			else return 0;
		}
		else if (Index1 == 2) 
		{
			if (Index0 == 0) 
			{
				return (q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
			}
			else if (Index0 == 1) 
			{
				return (q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
			}
			else if (Index0 == 2) 
			{
				return (q * (-3 * z * (3 * x ^ 2 + 3 * y ^ 2 - 2 * z ^ 2)));
			}
			else return 0;
		}
		else return 0;
	}
	else return 0;
}
int MultipoleLocationMap::GetTotalMonopoleMoment()
{
	TMap<FIntVector, int> ChargeMapToProcess = ChargeMap();
	int ReturnValue = 0;
	for (auto& iter : ChargeMapToProcess)
	{
		FIntVector Key = iter.Key;
		int x = Key.X;
		int y = Key.Y;
		int z = Key.Z;
		int q = iter.Value;
		ReturnValue += q;
	}
	return ReturnValue;
}
int MultipoleLocationMap::GetTotalDipoleMoment(int Index0)
{
	TMap<FIntVector, int> ChargeMapToProcess = ChargeMap();
	int ReturnValue = 0;
	if (Index0 == 0)
	{
		for (auto& iter : ChargeMapToProcess)
		{
			FIntVector Key = iter.Key;
			int x = Key.X;
			int y = Key.Y;
			int z = Key.Z;
			int q = iter.Value;
			ReturnValue += (q * (x));
		}
		return ReturnValue;
	}
	else if (Index0 == 1)
	{
		for (auto& iter : ChargeMapToProcess)
		{
			FIntVector Key = iter.Key;
			int x = Key.X;
			int y = Key.Y;
			int z = Key.Z;
			int q = iter.Value;
			ReturnValue += (q * (y));
		}
		return ReturnValue;
	}
	else if (Index0 == 2)
	{
		for (auto& iter : ChargeMapToProcess)
		{
			FIntVector Key = iter.Key;
			int x = Key.X;
			int y = Key.Y;
			int z = Key.Z;
			int q = iter.Value;
			ReturnValue += (q * (z));
		}
		return ReturnValue;
	}
	else return 0;
}
int MultipoleLocationMap::GetTotalQuadrupoleMoment(int Index1, int Index0)
{
	TMap<FIntVector, int> ChargeMapToProcess = ChargeMap();
	int ReturnValue = 0;
	if (Index1 == 0)
	{
		if (Index0 == 0)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (2 * x ^ 2 - y ^ 2 - z ^ 2));
			}
			return ReturnValue;
		}
		else if (Index0 == 1)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (3 * x * y));
			}
			return ReturnValue;
		}
		else if (Index0 == 2)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (3 * x * z));
			}
			return ReturnValue;
		}
	}
	else if (Index1 == 1)
	{
		if (Index0 == 0)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (3 * x * y));
			}
			return ReturnValue;
		}
		else if (Index0 == 1)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (-x ^ 2 + 2 * y ^ 2 - z ^ 2));
			}
			return ReturnValue;
		}
		else if (Index0 == 2)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (3 * y * z));
			}
			return ReturnValue;
		}
	}
	else if (Index1 == 2)
	{
		if (Index0 == 0)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (3 * x * z));
			}
			return ReturnValue;
		}
		else if (Index0 == 1)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (3 * y * z));
			}
			return ReturnValue;
		}
		else if (Index0 == 2)
		{
			for (auto& iter : ChargeMapToProcess)
			{
				FIntVector Key = iter.Key;
				int x = Key.X;
				int y = Key.Y;
				int z = Key.Z;
				int q = iter.Value;
				ReturnValue += (q * (-x ^ 2 - y ^ 2 + 2 * z ^ 2));
			}
			return ReturnValue;
		}
	}
	;
	for (auto& iter : ChargeMapToProcess)
	{
		FIntVector Key = iter.Key;
		int x = Key.X;
		int y = Key.Y;
		int z = Key.Z;
		int q = iter.Value;
		ReturnValue += 0;
	}
	return ReturnValue;
}
int MultipoleLocationMap::GetTotalOctupoleMoment(int Index2, int Index1, int Index0)
{
	TMap<FIntVector, int> ChargeMapToProcess = ChargeMap();
	int ReturnValue = 0;
	if (Index2 == 0)
	{
		if (Index1 == 0)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (3 * x * (2 * x ^ 2 - 3 * (y ^ 2 + z ^ 2))));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else if (Index1 == 1)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (15 * x * y * z));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else if (Index1 == 2)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (15 * x * y * z));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else return 0;
	}
	else if (Index2 == 1)
	{
		if (Index1 == 0)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (15 * x * y * z));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else if (Index1 == 1)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (3 * x ^ 2 - 2 * y ^ 2 + 3 * z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else if (Index1 == 2)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (15 * x * y * z));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else return 0;
	}
	else if (Index2 == 2)
	{
		if (Index1 == 0)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (15 * x * y * z));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else if (Index1 == 1)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (15 * x * y * z));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2)));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else if (Index1 == 2)
		{
			if (Index0 == 0)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
				}
				return ReturnValue;
			}
			else if (Index0 == 1)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z))));
				}
				return ReturnValue;
			}
			else if (Index0 == 2)
			{
				for (auto& iter : ChargeMapToProcess)
				{
					FIntVector Key = iter.Key;
					int x = Key.X;
					int y = Key.Y;
					int z = Key.Z;
					int q = iter.Value;
					ReturnValue += (q * (-3 * z * (3 * x ^ 2 + 3 * y ^ 2 - 2 * z ^ 2)));
				}
				return ReturnValue;
			}
			else return 0;
		}
		else return 0;
	}
	else return 0;
}
TMultiMap< FIntVector, MultipoleBar > MultipoleLocationMap::BarMultiMap() {
	TMultiMap<FIntVector, MultipoleBar > OutputBarMultiMap;
	for (auto& CurrentPair : MultipoleMap) {
		Multipole CurrentMP = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		CurrentMP.AppendBarMultiMap(CurrentKey, OutputBarMultiMap);

	}
	return OutputBarMultiMap;
}
MultipoleLocationMap::MultipoleLocationMap() {  };
MultipoleMoment::MultipoleMoment()
{
	MonopoleMoment = 0;
	for (int i = 0; i < 3; i++)
	{
		DipoleMoment[i] = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			QuadrupoleMoment[i][j] = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i == 0 && j == 0 && k == 0)
				{
					OctupoleMoment[i][j][k] = 0;
				}
			}
		}
	}
}

MultipoleMoment MultipoleMoment::operator+(MultipoleMoment& InputMultipoleMoment)
{
	MultipoleMoment MultipoleMomentOutput = MultipoleMoment();
	for (int i = 0; i < 3; i++)
	{
		MultipoleMomentOutput.DipoleMoment[i] =
			DipoleMoment[i] + InputMultipoleMoment.DipoleMoment[i];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MultipoleMomentOutput.QuadrupoleMoment[i][j] =
				QuadrupoleMoment[i][j] + InputMultipoleMoment.QuadrupoleMoment[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i == 0 && j == 0 && k == 0)
				{
					MultipoleMomentOutput.OctupoleMoment[i][j][k] =
						OctupoleMoment[i][j][k] + InputMultipoleMoment.OctupoleMoment[i][j][k];
				}
			}
		}
	}
	return MultipoleMomentOutput;
}
void MultipoleMoment::MultipoleMomentSet(MultipoleLocationMap& InputMultipoleLocationMap)
{
	MonopoleMoment = 0;
	for (int i = 0; i < 3; i++)
	{
		DipoleMoment[i] = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			QuadrupoleMoment[i][j] = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i == 0 && j == 0 && k == 0)
				{
					OctupoleMoment[i][j][k] = 0;
				}
			}
		}
	}
	TMap<FIntVector, int> ChargeMapToProcess = InputMultipoleLocationMap.ChargeMap();
	for (auto& iter : ChargeMapToProcess)
	{
		FIntVector CurrentKey = iter.Key;
		int q = iter.Value;
		int x = CurrentKey.X;
		int y = CurrentKey.Y;
		int z = CurrentKey.Z;
		
		MonopoleMoment += q;
		
		DipoleMoment[0] += q * x;
		DipoleMoment[1] += q * y;
		DipoleMoment[2] += q * z;
		
		//QuadrupoleMoment[0][0] += q * (2 * x ^ 2 - y ^ 2 - z ^ 2);
		//QuadrupoleMoment[0][1] += q * (3 * x * y);
		//QuadrupoleMoment[0][2] += q * (3 * x * z);
		//QuadrupoleMoment[1][0] += q * (3 * x * y);
		//QuadrupoleMoment[1][1] += q * (-x ^ 2 + 2 * y ^ 2 - z ^ 2);
		//QuadrupoleMoment[1][2] += q * (3 * y * z);
		//QuadrupoleMoment[2][0] += q * (3 * x * z);
		//QuadrupoleMoment[2][1] += q * (3 * y * z);
		//QuadrupoleMoment[2][2] += q * (-x ^ 2 - y ^ 2 + 2 * z ^ 2);
		
		QuadrupoleMoment[0][0] += iter.Value * (2 * (CurrentKey.X * CurrentKey.X) - (CurrentKey.Y * CurrentKey.Y) - (CurrentKey.Z * CurrentKey.Z));
		QuadrupoleMoment[0][1] += iter.Value * (3 * CurrentKey.X * CurrentKey.Y);
		QuadrupoleMoment[0][2] += iter.Value * (3 * CurrentKey.X * CurrentKey.Z);
		QuadrupoleMoment[1][0] += iter.Value * (3 * CurrentKey.X * CurrentKey.Y);
		QuadrupoleMoment[1][1] += iter.Value * (-(CurrentKey.X * CurrentKey.X) + 2 * (CurrentKey.Y * CurrentKey.Y) - (CurrentKey.Z * CurrentKey.Z));
		QuadrupoleMoment[1][2] += iter.Value * (3 * CurrentKey.Y * CurrentKey.Z);
		QuadrupoleMoment[2][0] += iter.Value * (3 * CurrentKey.X * CurrentKey.Z);
		QuadrupoleMoment[2][1] += iter.Value * (3 * CurrentKey.Y * CurrentKey.Z);
		QuadrupoleMoment[2][2] += iter.Value * (-(CurrentKey.X * CurrentKey.X) - (CurrentKey.Y * CurrentKey.Y) + 2 * (CurrentKey.Z * CurrentKey.Z));
		
		OctupoleMoment[0][0][0] += q * (3 * x * (2 * x ^ 2 - 3 * (y ^ 2 + z ^ 2)));
		OctupoleMoment[0][0][1] += q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
		OctupoleMoment[0][0][2] += q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
		OctupoleMoment[0][1][0] += q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
		OctupoleMoment[0][1][1] += q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
		OctupoleMoment[0][1][2] += q * (15 * x * y * z);
		OctupoleMoment[0][2][0] += q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
		OctupoleMoment[0][2][1] += q * (15 * x * y * z);
		OctupoleMoment[0][2][2] += q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
		OctupoleMoment[1][0][0] += q * (-3 * y * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
		OctupoleMoment[1][0][1] += q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
		OctupoleMoment[1][0][2] += q * (15 * x * y * z);
		OctupoleMoment[1][1][0] += q * (-3 * x * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
		OctupoleMoment[1][1][1] += q * (-3 * y * (3 * x ^ 2 - 2 * y ^ 2 + 3 * z ^ 2));
		OctupoleMoment[1][1][2] += q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
		OctupoleMoment[1][2][0] += q * (15 * x * y * z);
		OctupoleMoment[1][2][1] += q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
		OctupoleMoment[1][2][2] += q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
		OctupoleMoment[2][0][0] += q * (-3 * z * (-4 * x ^ 2 + y ^ 2 + z ^ 2));
		OctupoleMoment[2][0][1] += q * (15 * x * y * z);
		OctupoleMoment[2][0][2] += q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
		OctupoleMoment[2][1][0] += q * (15 * x * y * z);
		OctupoleMoment[2][1][1] += q * (-3 * z * (x ^ 2 - 4 * y ^ 2 + z ^ 2));
		OctupoleMoment[2][1][2] += q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
		OctupoleMoment[2][2][0] += q * (-3 * x * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
		OctupoleMoment[2][2][1] += q * (-3 * y * (x ^ 2 + (2 * z - y) * (-y - 2 * z)));
		OctupoleMoment[2][2][2] += q * (-3 * z * (3 * x ^ 2 + 3 * y ^ 2 - 2 * z ^ 2));
	}
	return;
}
int UMultipoleAxesActorComponent::FromMapGetTotalMonopoleMoment()
{
	return MultipoleSetup.GetTotalMonopoleMoment();
}
int UMultipoleAxesActorComponent::FromMapGetTotalDipoleMoment(int Index0)
{
	return MultipoleSetup.GetTotalDipoleMoment(Index0);
}
int UMultipoleAxesActorComponent::FromMapGetTotalQuadrupoleMoment(int Index1, int Index0)
{
	return MultipoleSetup.GetTotalQuadrupoleMoment(Index1, Index0);
}
int UMultipoleAxesActorComponent::FromMapGetTotalOctupoleMoment(int Index2, int Index1, int Index0)
{
	return MultipoleSetup.GetTotalOctupoleMoment(Index2, Index1, Index0);
}
int UMultipoleAxesActorComponent::FromAlteredMapGetTotalMonopoleMoment()
{
	return MultipoleSetupNewChargesOnly.GetTotalMonopoleMoment();
}
int UMultipoleAxesActorComponent::FromAlteredMapGetTotalDipoleMoment(int Index0)
{
	return MultipoleSetupNewChargesOnly.GetTotalDipoleMoment(Index0);
}
int UMultipoleAxesActorComponent::FromAlteredMapGetTotalQuadrupoleMoment(int Index1, int Index0)
{
	return MultipoleSetupNewChargesOnly.GetTotalQuadrupoleMoment(Index1, Index0);
}
int UMultipoleAxesActorComponent::FromAlteredMapGetTotalOctupoleMoment(int Index2, int Index1, int Index0)
{
	return MultipoleSetupNewChargesOnly.GetTotalOctupoleMoment(Index2, Index1, Index0);
}

int UMultipoleAxesActorComponent::CurrentMonopoleMoment()
{
	return MultipoleMomentCurrent.MonopoleMoment;
}
int UMultipoleAxesActorComponent::CurrentDipoleMoment(int Index0)
{
	return MultipoleMomentCurrent.DipoleMoment[Index0];
}
int UMultipoleAxesActorComponent::CurrentQuadrupoleMoment(int Index1, int Index0)
{
	return MultipoleMomentCurrent.QuadrupoleMoment[Index1][Index0];
}
int UMultipoleAxesActorComponent::CurrentOctupoleMoment(int Index2, int Index1, int Index0)
{
	return MultipoleMomentCurrent.OctupoleMoment[Index2][Index1][Index0];
}
int UMultipoleAxesActorComponent::AddedOffsetMonopoleMoment()
{
	return MultipoleMomentAddedOffset.MonopoleMoment;
}
int UMultipoleAxesActorComponent::AddedOffsetDipoleMoment(int Index0)
{
	return MultipoleMomentAddedOffset.DipoleMoment[Index0];
}
int UMultipoleAxesActorComponent::AddedOffsetQuadrupoleMoment(int Index1, int Index0)
{
	return MultipoleMomentAddedOffset.QuadrupoleMoment[Index1][Index0];
}
int UMultipoleAxesActorComponent::AddedOffsetOctupoleMoment(int Index2, int Index1, int Index0)
{
	return MultipoleMomentAddedOffset.OctupoleMoment[Index2][Index1][Index0];
}
int UMultipoleAxesActorComponent::IfChangedMonopoleMoment()
{
	return MultipoleMomentIfChanged.MonopoleMoment;
}
int UMultipoleAxesActorComponent::IfChangedDipoleMoment(int Index0)
{
	return MultipoleMomentIfChanged.DipoleMoment[Index0];
}
int UMultipoleAxesActorComponent::IfChangedQuadrupoleMoment(int Index1, int Index0)
{
	return MultipoleMomentIfChanged.QuadrupoleMoment[Index1][Index0];
}
int UMultipoleAxesActorComponent::IfChangedOctupoleMoment(int Index2, int Index1, int Index0)
{
	return MultipoleMomentIfChanged.OctupoleMoment[Index2][Index1][Index0];
}
int UMultipoleAxesActorComponent::GetIfChangedCartesianMultipoleMoment(TArray<int>& InputTArrray)
{
	int ReturnInt = 0;
	if (InputTArrray.Num() == 0)
	{
		ReturnInt = MultipoleMomentIfChanged.MonopoleMoment;
	}
	else if (InputTArrray.Num() == 1)
	{
		ReturnInt = MultipoleMomentIfChanged.DipoleMoment[InputTArrray[0]];
	}
	else if (InputTArrray.Num() == 2)
	{
		ReturnInt = MultipoleMomentIfChanged.QuadrupoleMoment[InputTArrray[0]][InputTArrray[1]];
	}
	else if (InputTArrray.Num() == 3)
	{
		ReturnInt = MultipoleMomentIfChanged.OctupoleMoment[InputTArrray[0]][InputTArrray[1]][InputTArrray[2]];
	}
	return ReturnInt;
}
int UMultipoleAxesActorComponent::GetCurrentCartesianMultipoleMoment(TArray<int>& InputTArrray)
{
	int ReturnInt = 0;
	if (InputTArrray.Num() == 0)
	{
		ReturnInt = MultipoleMomentCurrent.MonopoleMoment;
	}
	else if (InputTArrray.Num() == 1)
	{
		ReturnInt = MultipoleMomentCurrent.DipoleMoment[InputTArrray[0]];
	}
	else if (InputTArrray.Num() == 2)
	{
		ReturnInt = MultipoleMomentCurrent.QuadrupoleMoment[InputTArrray[0]][InputTArrray[1]];
	}
	else if (InputTArrray.Num() == 3)
	{
		ReturnInt = MultipoleMomentCurrent.OctupoleMoment[InputTArrray[0]][InputTArrray[1]][InputTArrray[2]];
	}
	return ReturnInt;
}
int UMultipoleAxesActorComponent::GetAddedOffsetCartesianMultipoleMoment(TArray<int>& InputTArrray)
{
	int ReturnInt = 0;
	if (InputTArrray.Num() == 0)
	{
		ReturnInt = MultipoleMomentAddedOffset.MonopoleMoment;
	}
	else if (InputTArrray.Num() == 1)
	{
		ReturnInt = MultipoleMomentAddedOffset.DipoleMoment[InputTArrray[0]];
	}
	else if (InputTArrray.Num() == 2)
	{
		ReturnInt = MultipoleMomentAddedOffset.QuadrupoleMoment[InputTArrray[0]][InputTArrray[1]];
	}
	else if (InputTArrray.Num() == 3)
	{
		ReturnInt = MultipoleMomentAddedOffset.OctupoleMoment[InputTArrray[0]][InputTArrray[1]][InputTArrray[2]];
	}
	return ReturnInt;
}
FIntPoint UMultipoleAxesActorComponent::GetIfChangedSphericalMultipoleMomentCoefficient(int InputL, int InputM)
{
	FIntPoint ReturnFIntPoint = FIntPoint(0, 0);
//if (InputL >= 0 &&
//	((InputM = < 0 && -InputM <= InputL) ||
//		(InputM >= 0 && InputM <= InputL)))
//{
	if (InputL == 0)
	{
		ReturnFIntPoint.X = MultipoleMomentIfChanged.MonopoleMoment;
	}
	else if (InputL == 1)
	{
		if (InputM == -1)
		{
			ReturnFIntPoint.X = -MultipoleMomentIfChanged.DipoleMoment[0];
			ReturnFIntPoint.Y = -MultipoleMomentIfChanged.DipoleMoment[1];
		}
		else if (InputM == 0)
		{
			ReturnFIntPoint.X = MultipoleMomentIfChanged.DipoleMoment[2];
		}
		else if (InputM == 1)
		{
			ReturnFIntPoint.X = MultipoleMomentIfChanged.DipoleMoment[0];
			ReturnFIntPoint.Y = -MultipoleMomentIfChanged.DipoleMoment[1];
		}
	}
	else if (InputL == 2)
	{
		if (InputM == -2)
		{
			ReturnFIntPoint.X =
				MultipoleMomentIfChanged.QuadrupoleMoment[0][0] -
				MultipoleMomentIfChanged.QuadrupoleMoment[1][1];
			ReturnFIntPoint.Y = 2 * MultipoleMomentIfChanged.QuadrupoleMoment[0][1];
		}
		else if (InputM == -1)
		{
			ReturnFIntPoint.X = -MultipoleMomentIfChanged.QuadrupoleMoment[0][2];
			ReturnFIntPoint.Y = -MultipoleMomentIfChanged.QuadrupoleMoment[1][2];
		}
		else if (InputM == 0)
		{
			ReturnFIntPoint.X = MultipoleMomentIfChanged.QuadrupoleMoment[2][2];
		}
		else if (InputM == 1)
		{
			ReturnFIntPoint.X = MultipoleMomentIfChanged.QuadrupoleMoment[0][2];
			ReturnFIntPoint.Y = -MultipoleMomentIfChanged.QuadrupoleMoment[1][2];
		}
		else if (InputM == 2)
		{
			ReturnFIntPoint.X =
				MultipoleMomentIfChanged.QuadrupoleMoment[0][0] -
				MultipoleMomentIfChanged.QuadrupoleMoment[1][1];
			ReturnFIntPoint.Y = -2 * MultipoleMomentIfChanged.QuadrupoleMoment[0][1];
		}
	}
//}
	return ReturnFIntPoint;
}
FIntPoint UMultipoleAxesActorComponent::GetCurrentSphericalMultipoleMomentCoefficient(int InputL, int InputM)
{
	FIntPoint ReturnFIntPoint = FIntPoint(0, 0);
//if (InputL >= 0 &&
//	((InputM =< 0 && -InputM <= InputL) || 
//		(InputM >= 0 && InputM <= InputL)))
//{
	if (InputL == 0)
	{
		ReturnFIntPoint.X = MultipoleMomentCurrent.MonopoleMoment;
	}
	else if (InputL == 1)
	{
		if (InputM == -1)
		{
			ReturnFIntPoint.X = -MultipoleMomentCurrent.DipoleMoment[0];
			ReturnFIntPoint.Y = -MultipoleMomentCurrent.DipoleMoment[1];
		}
		else if (InputM == 0)
		{
			ReturnFIntPoint.X = MultipoleMomentCurrent.DipoleMoment[2];
		}
		else if (InputM == 1)
		{
			ReturnFIntPoint.X = MultipoleMomentCurrent.DipoleMoment[0];
			ReturnFIntPoint.Y = -MultipoleMomentCurrent.DipoleMoment[1];
		}
	}
	else if (InputL == 2)
	{
		if (InputM == -2)
		{
			ReturnFIntPoint.X =
				MultipoleMomentCurrent.QuadrupoleMoment[0][0] -
				MultipoleMomentCurrent.QuadrupoleMoment[1][1];
			ReturnFIntPoint.Y = 2 * MultipoleMomentCurrent.QuadrupoleMoment[0][1];
		}
		else if (InputM == -1)
		{
			ReturnFIntPoint.X = -MultipoleMomentCurrent.QuadrupoleMoment[0][2];
			ReturnFIntPoint.Y = -MultipoleMomentCurrent.QuadrupoleMoment[1][2];
		}
		else if (InputM == 0)
		{
			ReturnFIntPoint.X = MultipoleMomentCurrent.QuadrupoleMoment[2][2];
		}
		else if (InputM == 1)
		{
			ReturnFIntPoint.X = MultipoleMomentCurrent.QuadrupoleMoment[0][2];
			ReturnFIntPoint.Y = -MultipoleMomentCurrent.QuadrupoleMoment[1][2];
		}
		else if (InputM == 2)
		{
			ReturnFIntPoint.X = 
				MultipoleMomentCurrent.QuadrupoleMoment[0][0] -
				MultipoleMomentCurrent.QuadrupoleMoment[1][1];
			ReturnFIntPoint.Y = -2*MultipoleMomentCurrent.QuadrupoleMoment[0][1];
		}
	}
//}
	return ReturnFIntPoint;
}
FIntPoint UMultipoleAxesActorComponent::GetAddedOffsetSphericalMultipoleMomentCoefficient(int InputL, int InputM)
{
	FIntPoint ReturnFIntPoint = FIntPoint(0, 0);
//if (InputL >= 0 &&
//	((InputM = < 0 && -InputM <= InputL) ||
//		(InputM >= 0 && InputM <= InputL)))
//{
	if (InputL == 0)
	{
		ReturnFIntPoint.X = MultipoleMomentAddedOffset.MonopoleMoment;
	}
	else if (InputL == 1)
	{
		if (InputM == -1)
		{
			ReturnFIntPoint.X = -MultipoleMomentAddedOffset.DipoleMoment[0];
			ReturnFIntPoint.Y = -MultipoleMomentAddedOffset.DipoleMoment[1];
		}
		else if (InputM == 0)
		{
			ReturnFIntPoint.X = MultipoleMomentAddedOffset.DipoleMoment[2];
		}
		else if (InputM == 1)
		{
			ReturnFIntPoint.X = MultipoleMomentAddedOffset.DipoleMoment[0];
			ReturnFIntPoint.Y = -MultipoleMomentAddedOffset.DipoleMoment[1];
		}
	}
	else if (InputL == 2)
	{
		if (InputM == -2)
		{
			ReturnFIntPoint.X =
				MultipoleMomentAddedOffset.QuadrupoleMoment[0][0] -
				MultipoleMomentAddedOffset.QuadrupoleMoment[1][1];
			ReturnFIntPoint.Y = 2 * MultipoleMomentAddedOffset.QuadrupoleMoment[0][1];
		}
		else if (InputM == -1)
		{
			ReturnFIntPoint.X = -MultipoleMomentAddedOffset.QuadrupoleMoment[0][2];
			ReturnFIntPoint.Y = -MultipoleMomentAddedOffset.QuadrupoleMoment[1][2];
		}
		else if (InputM == 0)
		{
			ReturnFIntPoint.X = MultipoleMomentAddedOffset.QuadrupoleMoment[2][2];
		}
		else if (InputM == 1)
		{
			ReturnFIntPoint.X = MultipoleMomentAddedOffset.QuadrupoleMoment[0][2];
			ReturnFIntPoint.Y = -MultipoleMomentAddedOffset.QuadrupoleMoment[1][2];
		}
		else if (InputM == 2)
		{
			ReturnFIntPoint.X =
				MultipoleMomentAddedOffset.QuadrupoleMoment[0][0] -
				MultipoleMomentAddedOffset.QuadrupoleMoment[1][1];
			ReturnFIntPoint.Y = -2 * MultipoleMomentAddedOffset.QuadrupoleMoment[0][1];
		}
	}
//}
	return ReturnFIntPoint;
}

FTransform UMultipoleAxesActorComponent::GetCylinderTransform(FVector StartPosition, FVector EndPosition, float Radius)
{
	FVector AddedVector = UKismetMathLibrary::Add_VectorVector(StartPosition, EndPosition);
	FVector SubtractedVector = UKismetMathLibrary::Subtract_VectorVector(EndPosition, StartPosition);
	FVector AveragePosition = UKismetMathLibrary::Multiply_VectorFloat(AddedVector, 0.5);
	FVector Direction = UKismetMathLibrary::Normal(SubtractedVector);
	float Magnitude = UKismetMathLibrary::VSize(SubtractedVector);
	float ScaleXY = Radius / 50;
	float ScaleZ = Magnitude / 100;
	FRotator RotatorFinal = UKismetMathLibrary::MakeRotFromZ(Direction);
	FVector ScaleFinal = FVector(ScaleXY, ScaleXY, ScaleZ);
	FTransform FTransformFinal = FTransform(RotatorFinal, AveragePosition, ScaleFinal);
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformFromMultipoleFIntVectorFIntVectorChargeOrder(int Charge, int Order, FIntVector StartCoord, FIntVector EndCoord)
{
	float RadiusLocal = abs(Charge) * (RadiusPerUnitMultipoleProportion * Spacing * 0.5);
	FVector StartPosition = GetVector(StartCoord);
	FVector EndPosition = GetVector(EndCoord);
	FTransform FTransformFinal = GetCylinderTransform(StartPosition, EndPosition, RadiusLocal);
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformFromFIntVectorFIntVectorTickMark(FIntVector PositionCoord, FIntVector SingleDisplacement)
{
	float RadiusLocal = (TickMarkRadiusProportion * Spacing * 0.5);
	FVector FVectorPosition = GetVector(PositionCoord);
	FVector FVectorDisplacement = UKismetMathLibrary::Multiply_VectorFloat(GetVector(SingleDisplacement), 0.5 * TickMarkProportion);
	FVector StartPosition = UKismetMathLibrary::Subtract_VectorVector(FVectorPosition, FVectorDisplacement);
	FVector EndPosition = UKismetMathLibrary::Add_VectorVector(FVectorPosition, FVectorDisplacement);
	FTransform FTransformFinal = GetCylinderTransform(StartPosition, EndPosition, RadiusLocal);
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformFromFIntVectorTickMarkX(FIntVector PositionCoord)
{
	FTransform FTransformFinal = GetCylinderTransformFromFIntVectorFIntVectorTickMark(PositionCoord, FIntVector(1, 0, 0));
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformFromFIntVectorTickMarkY(FIntVector PositionCoord)
{
	FTransform FTransformFinal = GetCylinderTransformFromFIntVectorFIntVectorTickMark(PositionCoord, FIntVector(0, 1, 0));
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector PositionCoord)
{
	FTransform FTransformFinal = GetCylinderTransformFromFIntVectorFIntVectorTickMark(PositionCoord, FIntVector(0, 0, 1));
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformAxes(FIntVector StartCoord, FIntVector EndCoord)
{
	float RadiusLocal = (AxesRadiusProportion * Spacing * 0.5);
	FVector StartPosition = GetVector(StartCoord);
	FVector EndPosition = GetVector(EndCoord);
	FTransform FTransformFinal = GetCylinderTransform(StartPosition, EndPosition, RadiusLocal);
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetCylinderTransformGridLine(FIntVector StartCoord, FIntVector EndCoord)
{
	float RadiusLocal = (TickMarkRadiusProportion * Spacing * 0.5);
	FVector StartPosition = GetVector(StartCoord);
	FVector EndPosition = GetVector(EndCoord);
	FTransform FTransformFinal = GetCylinderTransform(StartPosition, EndPosition, RadiusLocal);
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetSphereTransform(FVector Position, float Radius)
{
	float ScalingValue = Radius / 50;
	FVector ScalingVector = FVector(ScalingValue, ScalingValue, ScalingValue);
	FRotator RotatorInput = FRotator(0.0, 0.0, 0.0);
	FTransform FTransformFinal = FTransform(RotatorInput, Position, ScalingVector);
	return FTransformFinal;
}
FTransform UMultipoleAxesActorComponent::GetSphereTransformFromFIntVector(FIntVector PositionCoord, int Charge)
{
	float RadiusLocal = abs(Charge) * (RadiusPerUnitChargeProportion * Spacing * 0.5);
	FVector TranslationVector = GetVector(PositionCoord);
	FTransform FTransformFinal = GetSphereTransform(TranslationVector, RadiusLocal);
	return FTransformFinal;
}
int UMultipoleAxesActorComponent::UpdateChargeArrays()
{
	PositiveChargeSpheres.Empty();
	NegativeChargeSpheres.Empty();
	MultipoleBarCylinders.Empty();
	AddPositiveChargeSpheres.Empty();
	AddNegativeChargeSpheres.Empty();
	AddMultipoleBarCylinders.Empty();
	OffsetPositiveChargeSpheres.Empty();
	OffsetNegativeChargeSpheres.Empty();
	OffsetMultipoleBarCylinders.Empty();
	UpdatedChargeArrays = true;
	MultipoleMomentCurrent.MultipoleMomentSet(MultipoleSetup);
	MultipoleMomentAdded.MultipoleMomentSet(MultipoleSetupToAdd);
	MultipoleMomentOffset.MultipoleMomentSet(MultipoleSetupToOffset);
	MultipoleMomentAddedOffset = MultipoleMomentAdded + MultipoleMomentOffset;
	MultipoleMomentIfChanged = MultipoleMomentCurrent + MultipoleMomentAddedOffset;
	//for (auto& iter : MultipoleSetup.MultipoleMap)
	//{
	//	Multipole & MultipoleValue = iter.Value;
	//	FIntVector FIntVectorKey = iter.Key;
	//	if (MultipoleValue.Charge == 0)
	//	{
	//		MultipoleSetup.MultipoleMap.Remove(FIntVectorKey);
	//	}
	//}
	TMap<FIntVector, int> ChargeMapCurrent = MultipoleSetup.ChargeMap();
	TMultiMap< FIntVector, MultipoleBar > BarMultiMapCurrent = MultipoleSetup.BarMultiMap();
	for (auto& CurrentPair : ChargeMapCurrent)
	{
		int CurrentValue = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		FTransform FTransformFinal = GetSphereTransformFromFIntVector(CurrentKey, CurrentValue);
		if (CurrentValue < 0)
		{
			NegativeChargeSpheres.Add(FTransformFinal);
		}
		else
		{
			PositiveChargeSpheres.Add(FTransformFinal);
		}

	}
	for (auto& CurrentPair : BarMultiMapCurrent)
	{
		MultipoleBar MultipoleBarCurrent = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		FTransform FTransformFinal = GetCylinderTransformFromMultipoleFIntVectorFIntVectorChargeOrder(
			MultipoleBarCurrent.Charge,
			MultipoleBarCurrent.Order,
			MultipoleBarCurrent.StartBar,
			MultipoleBarCurrent.EndBar);
		MultipoleBarCylinders.Add(FTransformFinal);
	}
	TMap<FIntVector, int> AddChargeMapCurrent = MultipoleSetupToAdd.ChargeMap();
	TMultiMap< FIntVector, MultipoleBar > AddBarMultiMapCurrent = MultipoleSetupToAdd.BarMultiMap();
	for (auto& CurrentPair : AddChargeMapCurrent)
	{
		int CurrentValue = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		FTransform FTransformFinal = GetSphereTransformFromFIntVector(CurrentKey, CurrentValue);
		if (CurrentValue < 0)
		{
			AddNegativeChargeSpheres.Add(FTransformFinal);
			TempNegativeChargeSpheres.Add(FTransformFinal);
		}
		else
		{
			AddPositiveChargeSpheres.Add(FTransformFinal);
			TempPositiveChargeSpheres.Add(FTransformFinal);
		}

	}
	for (auto& CurrentPair : AddBarMultiMapCurrent)
	{
		MultipoleBar MultipoleBarCurrent = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		FTransform FTransformFinal = GetCylinderTransformFromMultipoleFIntVectorFIntVectorChargeOrder(
			MultipoleBarCurrent.Charge,
			MultipoleBarCurrent.Order,
			MultipoleBarCurrent.StartBar,
			MultipoleBarCurrent.EndBar);
		AddMultipoleBarCylinders.Add(FTransformFinal);
		TempMultipoleBarCylinders.Add(FTransformFinal);

	}
	TMap<FIntVector, int> OffsetChargeMapCurrent = MultipoleSetupToOffset.ChargeMap();
	TMultiMap< FIntVector, MultipoleBar > OffsetBarMultiMapCurrent = MultipoleSetupToOffset.BarMultiMap();
	for (auto& CurrentPair : OffsetChargeMapCurrent)
	{
		int CurrentValue = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		FTransform FTransformFinal = GetSphereTransformFromFIntVector(CurrentKey, CurrentValue);
		if (CurrentValue < 0)
		{
			OffsetNegativeChargeSpheres.Add(FTransformFinal);
		}
		else
		{
			OffsetPositiveChargeSpheres.Add(FTransformFinal);
		}

	}
	for (auto& CurrentPair : OffsetBarMultiMapCurrent)
	{
		MultipoleBar MultipoleBarCurrent = CurrentPair.Value;
		FIntVector CurrentKey = CurrentPair.Key;
		FTransform FTransformFinal = GetCylinderTransformFromMultipoleFIntVectorFIntVectorChargeOrder(
			MultipoleBarCurrent.Charge,
			MultipoleBarCurrent.Order,
			MultipoleBarCurrent.StartBar,
			MultipoleBarCurrent.EndBar);
		OffsetMultipoleBarCylinders.Add(FTransformFinal);
	}
	return 0;
}
int UMultipoleAxesActorComponent::UpdateAxes()
{
	AxesCylinders.Empty();
	TickMarkCylinders.Empty();
	TickMarkCylinders.Empty();
	UpdatedAxes = true;
	bool FlagX = false;
	bool FlagY = false;
	bool FlagZ = false;
	if (RangeX != 0)
	{
		AxesCylinders.Add(GetCylinderTransformAxes(FIntVector(-(RangeX + 1), 0, 0), FIntVector(RangeX + 1, 0, 0)));
		FlagX = true;
	}
	if (RangeY != 0)
	{
		AxesCylinders.Add(GetCylinderTransformAxes(FIntVector(0, -(RangeY + 1), 0), FIntVector(0, RangeY + 1, 0)));
		FlagY = true;
	}
	if (RangeZ != 0)
	{
		AxesCylinders.Add(GetCylinderTransformAxes(FIntVector(0, 0, -(RangeZ + 1)), FIntVector(0, 0, RangeZ + 1)));
		FlagZ = true;
	}
	if (GridlinesFlag) {
		for (int IndicesX = -RangeX; IndicesX <= RangeX; IndicesX++)
		{

			if (IndicesX != 0) TickMarkCylinders.Add(
				GetCylinderTransformGridLine(FIntVector(IndicesX, 0, -RangeZ), FIntVector(IndicesX, 0, RangeZ)));
		}
		for (int IndicesZ = -RangeZ; IndicesZ <= RangeZ; IndicesZ++)
		{

			if (IndicesZ != 0) TickMarkCylinders.Add(
				GetCylinderTransformGridLine(FIntVector(-RangeX, 0, IndicesZ), FIntVector(RangeX, 0, IndicesZ)));
		}
		if (!FlagX && FlagY && FlagZ)
		{
			for (int IndicesY = -RangeY; IndicesY <= RangeY; IndicesY++)
			{
				for (int IndicesZ = -RangeZ; IndicesZ <= RangeZ; IndicesZ++)
				{
					if (FlagY && IndicesZ != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkY(FIntVector(0, IndicesY, IndicesZ)));
					if (FlagZ && IndicesY != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector(0, IndicesY, IndicesZ)));
				}
			}
		}
		else if (FlagX && !FlagY && FlagZ)
		{
			for (int IndicesX = -RangeX; IndicesX <= RangeX; IndicesX++)
			{
				for (int IndicesZ = -RangeZ; IndicesZ <= RangeZ; IndicesZ++)
				{
					if (FlagX && IndicesZ != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkX(FIntVector(IndicesX, 0, IndicesZ)));
					if (FlagZ && IndicesX != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector(IndicesX, 0, IndicesZ)));
				}
			}
		}
		else if (FlagX && FlagY && !FlagZ)
		{
			for (int IndicesX = -RangeX; IndicesX <= RangeX; IndicesX++)
			{
				for (int IndicesY = -RangeZ; IndicesY <= RangeY; IndicesY++)
				{
					if (FlagX && IndicesY != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkX(FIntVector(IndicesX, IndicesY, 0)));
					if (FlagY && IndicesX != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkY(FIntVector(IndicesX, IndicesY, 0)));
				}
			}
		}
		else
		{
			for (int IndicesX = -RangeX; IndicesX <= RangeX; IndicesX++)
			{
				for (int IndicesY = -RangeY; IndicesY <= RangeY; IndicesY++)
				{
					for (int IndicesZ = -RangeZ; IndicesZ <= RangeZ; IndicesZ++)
					{
						if (FlagX && !(IndicesY == 0 && IndicesZ == 0)) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkX(FIntVector(IndicesX, IndicesY, IndicesZ)));
						if (FlagY && !(IndicesX == 0 && IndicesZ == 0)) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkY(FIntVector(IndicesX, IndicesY, IndicesZ)));
						if (FlagZ && !(IndicesX == 0 && IndicesY == 0)) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector(IndicesX, IndicesY, IndicesZ)));
					}
				}
			}
		}
	}
	else
	{
		TMap<FIntVector, int> ChargeMapCurrent = MultipoleSetup.ChargeMap();
		if (FlagX && !FlagY && FlagZ)
		{
			for (int IndicesX = -RangeX; IndicesX <= RangeX; IndicesX++)
			{
				for (int IndicesZ = -RangeZ; IndicesZ <= RangeZ; IndicesZ++)
				{
					if (FlagX && IndicesZ != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkX(FIntVector(IndicesX, 0, IndicesZ)));
					if (FlagZ && IndicesX != 0) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector(IndicesX, 0, IndicesZ)));
				}
			}
		}
		else
		{
			for (int IndicesX = -RangeX; IndicesX <= RangeX; IndicesX++)
			{
				for (int IndicesY = -RangeY; IndicesY <= RangeY; IndicesY++)
				{
					for (int IndicesZ = -RangeZ; IndicesZ <= RangeZ; IndicesZ++)
					{
						if (FlagX && !(IndicesY == 0 && IndicesZ == 0)) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkX(FIntVector(IndicesX, IndicesY, IndicesZ)));
						if (FlagY && !(IndicesX == 0 && IndicesZ == 0)) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkY(FIntVector(IndicesX, IndicesY, IndicesZ)));
						if (FlagZ && !(IndicesX == 0 && IndicesY == 0)) TickMarkCylinders.Add(GetCylinderTransformFromFIntVectorTickMarkZ(FIntVector(IndicesX, IndicesY, IndicesZ)));
					}
				}
			}
		}
	}

	return 0;
}
//UMultipoleAxesActorComponent::UMultipoleAxesActorComponent(int InputRange, float InputSpacing, float InputTickMarkCoverage, 
//	float InputTickMarkRadius, float InputAxesRadius,float InputRadiusPerUnitCharge) : Range(InputRange), Spacing(InputSpacing), TickMarkCoverage(InputTickMarkCoverage), 
//	TickMarkRadius(InputTickMarkRadius), AxesRadius(InputAxesRadius), RadiusPerUnitCharge(InputRadiusPerUnitCharge)

FVector UMultipoleAxesActorComponent::GetVector(FIntVector InputVectorFIntVector)
{
	return FVector(InputVectorFIntVector.X * Spacing, InputVectorFIntVector.Y * Spacing, InputVectorFIntVector.Z * Spacing);
}

int UMultipoleAxesActorComponent::MouseButtonEventProcess(bool ButtonUpFlagInput, bool SpecialButtonFlagInput)
{
	if (CurrentFocusEnum_None_Ordinary_Special == 0)
	{
		if (!ButtonUpFlagInput)
		{
			DownClickFocusPositionState = CurrentPositionState;
			if (!SpecialButtonFlagInput)
			{
				CurrentFocusEnum_None_Ordinary_Special = 1;
				// call
			}
			else
			{
				CurrentFocusEnum_None_Ordinary_Special = 2;
				// call
			}
		}
	}
	else if (CurrentFocusEnum_None_Ordinary_Special == 1)
	{
		if (ButtonUpFlagInput && !SpecialButtonFlagInput)
		{
			CurrentFocusEnum_None_Ordinary_Special = 0;
			// call
			InputUpdate(true, false, CurrentPositionState, DownClickFocusPositionState);
		}
	}
	else if (CurrentFocusEnum_None_Ordinary_Special == 2)
	{
		if (ButtonUpFlagInput && SpecialButtonFlagInput)
		{
			CurrentFocusEnum_None_Ordinary_Special = 0;
			// call
			InputUpdate(true, true, CurrentPositionState, DownClickFocusPositionState);
		}
	}
	return 0;
}
int UMultipoleAxesActorComponent::MovementEventProcess(int x0, int y0, int z0)
{
	CurrentPositionState = FIntVector(x0, y0, z0);
	if (CurrentFocusEnum_None_Ordinary_Special == 0)
	{

	}
	else if (CurrentFocusEnum_None_Ordinary_Special == 1)
	{
		InputUpdate(false, false, CurrentPositionState, DownClickFocusPositionState);
	}
	else if (CurrentFocusEnum_None_Ordinary_Special == 2)
	{
		InputUpdate(false, true, CurrentPositionState, DownClickFocusPositionState);
	}
	return 0;
}
int UMultipoleAxesActorComponent::InputUpdate(bool ClickUp, bool SpecialButton, FIntVector  CurrentPositionInput, FIntVector DownClickPositionInput)
{
	MultipoleLocationMap MultipoleLocationMapReturnValue = MultipoleLocationMap();
	MultipoleSetupToAdd.MultipoleMap.Empty();
	MultipoleSetupToOffset.MultipoleMap.Empty();
	// CLICK ON MULTIPOLE
	if (MultipoleSetup.MultipoleMap.Contains(DownClickPositionInput))
	{
		Multipole& RefTempMP = MultipoleSetup.MultipoleMap.FindChecked(DownClickPositionInput);
		// RIGHT CLICK ON MULTIPOLE
		if (SpecialButton)
		{
			// RIGHT CLICK ON MULTIPOLE THEN RELEASED
			if (ClickUp)
			{
				// RIGHT CLICKED ON MULTIPOLE THEN RELEASED IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{
					RefTempMP.DecrementCharge();
					if (RefTempMP.Charge == 0)
					{
						MultipoleSetup.MultipoleMap.Remove(DownClickPositionInput);
					}
				}
				// RIGHT CLICKED ONE SPOT ON MULTIPOLE AND RELEASED ELSEWHERE
				else
				{
					// RIGHT CLICKED ONE SPOT ON MULTIPOLE AND RELEASED ELSEWHERE IN OCCUPIED SPOT
					if (MultipoleSetup.MultipoleMap.Contains(CurrentPositionInput))
					{
						// code here
					}
					// RIGHT CLICKED ONE SPOT ON MULTIPOLE AND RELEASED ELSEWHERE IN EMPTY SPOT
					else
					{
						FIntVector OffsetVector = CurrentPositionInput - DownClickPositionInput;
						Multipole MultipoleAdded = Multipole(RefTempMP.Charge);
						MultipoleAdded.MultipoleVectors.Add(OffsetVector);
						for (auto& iter : RefTempMP.MultipoleVectors)
						{
							MultipoleAdded.MultipoleVectors.Add(iter);
						}
						MultipoleSetup.MultipoleMap.Remove(DownClickPositionInput);
						MultipoleSetup.MultipoleMap.Add(DownClickPositionInput, MultipoleAdded);
					}
					

				}
			}
			// RIGHT CLICK HELD DOWN
			else
			{
				// RIGHT CLICK ON MULTIPOLE AND HELD DOWN IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{

				}
				// RIGHT CLICK ON MULTIPOLE AND HELD DOWN WHILE MOVING ELSEWHERE
				else
				{
					// RIGHT CLICK ON MULTIPOLE AND HELD DOWN WHILE MOVING ELSEWHERE IN OCCUPIED SPOT
					if (MultipoleSetup.MultipoleMap.Contains(CurrentPositionInput))
					{
						// code here
					}
					// RIGHT CLICK ON MULTIPOLE AND HELD DOWN WHILE MOVING ELSEWHERE IN EMPTY SPOT
					else
					{
						// code here
					}
					FIntVector OffsetVector = CurrentPositionInput - DownClickPositionInput;
					Multipole MultipoleAdded = Multipole(RefTempMP.Charge);
					MultipoleAdded.MultipoleVectors.Add(OffsetVector);
					for (auto& iter : RefTempMP.MultipoleVectors)
					{
						MultipoleAdded.MultipoleVectors.Add(iter);
					}
					MultipoleSetupToAdd.MultipoleMap.Add(DownClickPositionInput, MultipoleAdded);
					Multipole MultipoleOffset = Multipole(-RefTempMP.Charge, RefTempMP.MultipoleVectors);
					MultipoleSetupToOffset.MultipoleMap.Add(DownClickPositionInput, MultipoleOffset);
				}
			}
		}
		// LEFT CLICK ON MULTIPOLE
		else
		{
			// LEFT CLICK ON MULTIPOLE THEN RELEASED
			if (ClickUp)
			{
				// LEFT CLICKED ON MULTIPOLE AND RELEASED IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{
					RefTempMP.IncrementCharge();
					if (RefTempMP.Charge == 0)
					{
						MultipoleSetup.MultipoleMap.Remove(DownClickPositionInput);
					}
				}
				// LEFT CLICKED ONE SPOT ON MULTIPOLE AND RELEASED ELSEWHERE
				else
				{
					// LEFT CLICKED ONE SPOT ON MULTIPOLE AND RELEASED ELSEWHERE IN OCCUPIED SPOT
					if (MultipoleSetup.MultipoleMap.Contains(CurrentPositionInput))
					{
						// code here
					}
					// LEFT CLICKED ONE SPOT ON MULTIPOLE AND RELEASED ELSEWHERE IN EMPTY SPOT
					else
					{
						// code here
						Multipole NewMultipole = Multipole(RefTempMP.Charge, RefTempMP.MultipoleVectors);
						MultipoleSetup.MultipoleMap.Remove(DownClickPositionInput);
						MultipoleSetup.MultipoleMap.Add(CurrentPositionInput, NewMultipole);
					}
					
				}
			}
			// LEFT CLICK ON MULTIPOLE HELD DOWN
			else
			{
				// LEFT CLICK ON MULTIPOLE AND HELD DOWN IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{

				}
				// LEFT CLICK ON MULTIPOLE AND HELD DOWN WHILE MOVING ELSEWHERE
				else
				{
					// LEFT CLICK ON MULTIPOLE AND HELD DOWN WHILE MOVING ELSEWHERE IN OCCUPIED SPOT
					if (MultipoleSetup.MultipoleMap.Contains(CurrentPositionInput))
					{
						// code here
					}
					// LEFT CLICK ON MULTIPOLE AND HELD DOWN WHILE MOVING ELSEWHERE IN EMPTY SPOT
					else
					{
						// code here
					}
					Multipole MultipoleAdded = Multipole(RefTempMP.Charge, RefTempMP.MultipoleVectors);
					MultipoleSetupToAdd.MultipoleMap.Add(CurrentPositionInput, MultipoleAdded);
					Multipole MultipoleOffset = Multipole(-RefTempMP.Charge, RefTempMP.MultipoleVectors);
					MultipoleSetupToOffset.MultipoleMap.Add(DownClickPositionInput, MultipoleOffset);

				}
			}
		}
	}
	// CLICK ON EMPTY SPACE
	else
	{
		// RIGHT CLICK ON EMPTY SPACE
		if (SpecialButton)
		{
			// RIGHT CLICK ON EMPTY SPACE THEN RELEASED
			if (ClickUp)
			{
				// RIGHT CLICKED ON EMPTY SPACE THEN RELEASED IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{
					Multipole NewMultipole = Multipole(-1);
					MultipoleSetup.MultipoleMap.Add(CurrentPositionInput, NewMultipole);
				}
				// RIGHT CLICKED ONE SPOT ON EMPTY SPACE AND RELEASED ELSEWHERE
				else
				{

				}
			}
			// RIGHT CLICK ON EMPTY SPACE AND HELD DOWN
			else
			{
				// RIGHT CLICK ON EMPTY SPACE AND HELD DOWN IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{

				}
				// RIGHT CLICK ON EMPTY SPACE AND HELD DOWN WHILE MOVING ELSEWHERE
				else
				{

				}
			}
		}
		// LEFT CLICK ON EMPTY SPACE
		else
		{
			// LEFT CLICK ON EMPTY SPACE THEN RELEASED
			if (ClickUp)
			{
				// LEFT CLICKED ON EMPTY SPACE AND RELEASED IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{
					Multipole NewMultipole = Multipole(1);
					MultipoleSetup.MultipoleMap.Add(CurrentPositionInput, NewMultipole);
				}
				// LEFT CLICKED ONE SPOT ON EMPTY SPACE AND RELEASED ELSEWHERE
				else
				{

				}
			}
			// LEFT CLICK ON EMPTY SPACE HELD DOWN
			else
			{
				// LEFT CLICK ON EMPTY SPACE AND HELD DOWN IN SAME SPOT
				if (CurrentPositionInput == DownClickPositionInput)
				{

				}
				// LEFT CLICK ON EMPTY SPACE AND HELD DOWN WHILE MOVING ELSEWHERE
				else
				{

				}
			}
		}
	}
	TMap<FIntVector, int> FinalChargeMap;
	MultipoleSetupNewChargesOnly = MultipoleLocationMap();
	MultipoleSetupNewChargesOnly.MultipoleMap.Empty();
	//for (auto& iter : MultipoleSetup.ChargeMap())
	//{
	//	if (FinalChargeMap.Contains(iter.Key))
	//	{
	//		int NewValue = *(FinalChargeMap.Find(iter.Key)) + iter.Value;
	//		FinalChargeMap.Add(iter.Key, NewValue);
	//	}
	//	else
	//	{
	//		FinalChargeMap.Add(iter.Key, iter.Value);
	//	}
	//}
	for (auto& iter : MultipoleSetupToAdd.ChargeMap())
	{
		if (FinalChargeMap.Contains(iter.Key))
		{
			int NewValue = *(FinalChargeMap.Find(iter.Key)) + iter.Value;
			FinalChargeMap.Add(iter.Key, NewValue);
		}
		else
		{
			FinalChargeMap.Add(iter.Key, iter.Value);
		}
	}
	for (auto& iter : MultipoleSetupToOffset.ChargeMap())
	{
		if (FinalChargeMap.Contains(iter.Key))
		{
			int NewValue = *(FinalChargeMap.Find(iter.Key)) + iter.Value;
			FinalChargeMap.Add(iter.Key, NewValue);
		}
		else
		{
			FinalChargeMap.Add(iter.Key, iter.Value);
		}
	}
	for (auto& iter : FinalChargeMap)
	{
		TArray<FIntVector> PlaceholderTArray;
		Multipole PlaceholderMultipole = Multipole(iter.Value, PlaceholderTArray);
		MultipoleSetupNewChargesOnly.MultipoleMap.Add(iter.Key, PlaceholderMultipole);
	}
	UpdateChargeArrays();
	return 0;
}
UMultipoleAxesActorComponent::UMultipoleAxesActorComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = false;
	InputErrorFlag = false;
	InputNotInitialized = true;
	OrdinaryButtonUpFlag = true;
	SpecialButtonUpFlag = true;
	WaitTillReleaseAllFlag = false;
	ValuesNotInitialized = false;
	OrdinaryButtonNotInitialized = true;
	SpecialButtonNotInitialized = true;
	CurrentFocusEnum_None_Ordinary_Special = 0;
	UpdatedChargeArrays = false;
	UpdatedAxes = false;
	TArray<FIntVector> TestList;
	Multipole TestMP = Multipole(3, TestList);
	MultipoleSetup.MultipoleMap.Add(FIntVector(0, 0, 0), TestMP);

	//TArray<FIntVector> MPTA, MPTB, MPTC;
	//MPTA.Add(FIntVector(0, 0, 1));
	//MPTB.Add(FIntVector(0, 0, 3));
	//MPTB.Add(FIntVector(0, 0, 1));
	//MPTC.Add(FIntVector(0, 0, 6));
	//MPTC.Add(FIntVector(0, 0, 3));
	//MPTC.Add(FIntVector(0, 0, 1));
	//Multipole MPA = Multipole(1, MPTA);
	//Multipole MPB = Multipole(2, MPTB);
	//Multipole MPC = Multipole(3, MPTC);
	//TArray<FIntVector> TA, TB, TC;
	//Multipole A = Multipole(4, TA);
	//Multipole B = Multipole(5, TB);
	//Multipole C = Multipole(6, TC);
	//MultipoleSetup.MultipoleMap.Add(FIntVector(-10, 0, 0), A);
	//MultipoleSetup.MultipoleMap.Add(FIntVector(-6, 0, 0), B);
	//MultipoleSetup.MultipoleMap.Add(FIntVector(-2, 0, 0), C);
	//MultipoleSetup.MultipoleMap.Add(FIntVector(2, 0, 0), MPA);
	//MultipoleSetup.MultipoleMap.Add(FIntVector(6, 0, 0), MPB);
	//MultipoleSetup.MultipoleMap.Add(FIntVector(10, 0, 0), MPC);
	UpdateAxes();
	UpdateChargeArrays();
	//int test = MultipoleSetup.GetTotalMonopoleMoment();
	//int test0 = MultipoleSetup.GetTotalDipoleMoment(0);
	//int test1 = MultipoleSetup.GetTotalDipoleMoment(1);
	//int test2 = MultipoleSetup.GetTotalDipoleMoment(2);
	//int test00 = MultipoleSetup.GetTotalQuadrupoleMoment(0,0);
	//int test01 = MultipoleSetup.GetTotalQuadrupoleMoment(0,1);
	//int test02 = MultipoleSetup.GetTotalQuadrupoleMoment(0,2);
	//int test10 = MultipoleSetup.GetTotalQuadrupoleMoment(1,0);
	//int test11 = MultipoleSetup.GetTotalQuadrupoleMoment(1,1);
	//int test12 = MultipoleSetup.GetTotalQuadrupoleMoment(1,2);
	//int test20 = MultipoleSetup.GetTotalQuadrupoleMoment(2,0);
	//int test21 = MultipoleSetup.GetTotalQuadrupoleMoment(2,1);
	//int test22 = MultipoleSetup.GetTotalQuadrupoleMoment(2,2);

}

int UMultipoleAxesActorComponent::ChangeRangeX(int InputRangeX)
{
	RangeX = InputRangeX;
	UpdateAxes();
	return 0;
}
int UMultipoleAxesActorComponent::ChangeRangeZ(int InputRangeZ)
{
	RangeZ = InputRangeZ;
	UpdateAxes();
	return 0;
}
int UMultipoleAxesActorComponent::ChangeSpacing(float InputSpacing)
{
	Spacing = InputSpacing;
	UpdateChargeArrays();
	UpdateAxes();
	return 0;
}

FTransform UMultipoleAxesActorComponent::GetSphereForClickCurrent()
{
	return GetSphereTransformFromFIntVector(CurrentPositionState, 3);
}
FTransform UMultipoleAxesActorComponent::GetSphereForClickOrdinary()
{
	return GetSphereTransformFromFIntVector(DownClickOrdinaryPositionState, 3);
}
FTransform UMultipoleAxesActorComponent::GetSphereForClickSpecial()
{
	return GetSphereTransformFromFIntVector(DownClickOrdinaryPositionState, 3);
}
//UMultipoleAxesActorComponent::ClickDownOrdinary()
//{
//	
//}
