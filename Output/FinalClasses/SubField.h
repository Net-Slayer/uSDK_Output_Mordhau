#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "SubField.generated.h"
// Class Mordhau.SubField
class MORDHAU_API ASubField  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UPrimitiveComponent* Area; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bIsSubFieldDeactivated; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsSubFieldHidden; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMasterField> Master; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubFieldHidden(bool bValue);
UFUNCTION(BlueprintCallable)
	class AMasterField* GetMaster();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeactivateSubField();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginSubFieldDeactivation();
};
