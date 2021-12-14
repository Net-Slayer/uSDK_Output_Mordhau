#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "EquipmentSystemComponent.generated.h"
// Class Mordhau.EquipmentSystemComponent
class MORDHAU_API UEquipmentSystemComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TArray<TWeakObjectPtr<class AMordhauEquipment>> PrevReplicatedEquipment; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment> PrevReplicatedLeftHandEquipment; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment> PrevReplicatedRightHandEquipment; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	class UStaticMeshComponent* QuiverStaticMeshComponent; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float DeathEquipmentRagdollAngularFactor; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float DeathEquipmentRagdollTranslationalFactor; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void OnUnPossessed(class AAdvancedCharacter* Character);
UFUNCTION()
	void OnPreBeginPlay(class AMordhauCharacter* Character);
UFUNCTION()
	void OnLODTick(float DeltaTime);
UFUNCTION()
	void OnLateTick(float DeltaTime);
UFUNCTION()
	void OnCharacterVehicleChanged(class AMordhauCharacter* Character);
UFUNCTION()
	void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);
UFUNCTION()
	void OnAnyEquipmentStateChanged();
};
