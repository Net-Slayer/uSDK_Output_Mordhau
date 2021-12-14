#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MasterField.generated.h"
// Class Mordhau.MasterField
class MORDHAU_API AMasterField  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	float CreatedTime; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float DeactivatedTime; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float DeactivationStartedTime; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bAreSubfieldsHidden; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsFieldActive; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasBegunDeactivation; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Export)
	TArray<class UFieldSpawnComponent*> SubFieldSpawns; // (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<TWeakObjectPtr<class ASubField>> SubFields; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBox CombinedBoundsBox; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FieldLifeTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FieldDeactivationTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FieldFadeOutTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> CollisionFilter; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class AActor*, int> ActorPresenceTickCount; // (BlueprintVisible, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateField();
UFUNCTION(BlueprintCallable)
	void SetSubFieldsHidden(bool bAreHidden);
UFUNCTION(BlueprintCallable)
	void RecomputeCombinedBoundingBox();
UFUNCTION(BlueprintCallable)
	TArray<class ASubField*> GetSubFields();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector GetFieldBoundsCenter() const;
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeactivateAndDestroyField();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void CreateField();
UFUNCTION(BlueprintCallable)
	float ComputeDistanceIntoField(const struct FVector& Location);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginFieldDeactivation();
};
