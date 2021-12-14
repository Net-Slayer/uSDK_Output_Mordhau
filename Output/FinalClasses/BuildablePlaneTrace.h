#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildablePlaneTrace.generated.h"
// Class Mordhau.BuildablePlaneTrace
class MORDHAU_API UBuildablePlaneTrace  :  public UBuildableTraceBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> CheckActorsOnPlaneTraceHit; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpawnablePlaneInfo PlaneInfo; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TraceAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> ForbiddenHitActorsList; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bInverseXYAngle; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxAllowedPlacementAngle; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float InverseXAxisMod; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float InverseYAxisMod; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector PlacementLocationOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator PlacementRotationOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void GetPlacementAngleAndRotation(struct FSpawnablePlaneTraceResult* OutTraceResult, const struct FSpawnableObjectInfo& ObjectInfo, float* OutAngle, struct FRotator* OutRotation);
UFUNCTION()
	void DrawDebugPlane(class UObject* WorldContextObject, const struct FVector& Forward, const struct FVector& Back, const struct FVector& Right, const struct FVector& Left, const struct FVector& InTraceAmount, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType) const;
};
