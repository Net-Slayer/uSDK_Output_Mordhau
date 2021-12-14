#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableTraceBase.generated.h"
// Class Mordhau.BuildableTraceBase
class MORDHAU_API UBuildableTraceBase  :  public UDataAsset
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>> TraceObjectTypes; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bTraceComplex; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIgnoreSelf; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<Engine_EDrawDebugTrace> DrawType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FColor DrawColor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText TraceTextForUI; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<class AActor*> ActorsToIgnore; // (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
