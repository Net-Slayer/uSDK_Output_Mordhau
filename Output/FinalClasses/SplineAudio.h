#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "SplineAudio.generated.h"
// Class Mordhau.SplineAudio
class MORDHAU_API ASplineAudio  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int NumInterpFrames; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	class UCurveFloat* Curve; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	class APlayerController* PC; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class USceneComponent* Root; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class USplineComponent* Spline; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UAudioComponent* AudioComp; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetCurve(class UCurveFloat* InCurve);
UFUNCTION(BlueprintImplementableEvent)
	void OnDeactivate();
UFUNCTION(BlueprintImplementableEvent)
	void OnActivate();
};
