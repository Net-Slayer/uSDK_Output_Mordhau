#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "EnvironmentMovable.generated.h"
// Class Mordhau.EnvironmentMovable
class MORDHAU_API AEnvironmentMovable  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_ESwayMethod SwayMethod; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class USceneComponent> SwayingComponent; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector RollPitchYawFrequency; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector RollPitchYawMagnitude; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector RollPitchYawSpeed; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void InitializeMovable(class USceneComponent* InSwayingComponent, const struct FVector& InRollPitchYawFrequency, const struct FVector& InRollPitchYawMagnitude, const struct FVector& InRollPitchYawSpeed);
};
