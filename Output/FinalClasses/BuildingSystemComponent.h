#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildingSystemComponent.generated.h"
// Class Mordhau.BuildingSystemComponent
class MORDHAU_API UBuildingSystemComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FSpawnableObjectInfo> SpawnableObjects; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UBuildableTraceBase*> TraceList; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, Instanced)
	class UMeshComponent* PreviewMeshComponent; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterial* PreviewMaterial; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bShowPreview; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UMordhauHUDWidgetComponent* MordhauHUDWidgetComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnMeshPreviewCreated; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnMeshPreviewDestroyed; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	bool ValidateSpot(const struct FVector& Offset, struct FVector* OutLocation, struct FRotator* OutRotation, class USceneComponent** AttachToComponent, class UBuildableTraceBase** BuildableTraceHit, int SpawnableObjectIndex, bool bDrawObjectPreview, bool bForceFail);
UFUNCTION(BlueprintCallable)
	void SetupMeshPreview() const;
UFUNCTION(BlueprintCallable)
	int GetEquipmentPlaceableMaxLimit(int SpawnableObjectIndex);
UFUNCTION(BlueprintCallable)
	struct FName GetEquipmentPlaceableLimitName(int SpawnableObjectIndex);
UFUNCTION(BlueprintCallable)
	struct FSpawnableObjectInfo GetEquipmentInfo(int SpawnableObjectIndex);
UFUNCTION(BlueprintCallable)
	struct FName GetEquipmentDisplayName(int SpawnableObjectIndex);
UFUNCTION(BlueprintCallable)
	int GetEquipmentAmmoCost(int SpawnableObjectIndex);
UFUNCTION()
	void DisplayPreview(bool bDrawObjectPreview, bool bIsValid, const struct FSpawnableObjectInfo& ObjectInfo, const struct FTransform& ObjectTransform, int SpawnableObjectIndex);
UFUNCTION(BlueprintCallable)
	void DestroyMeshPreview();
UFUNCTION(BlueprintCallable)
	void AddStaticMeshPreviewIfNone(class UStaticMesh* StaticMesh);
UFUNCTION(BlueprintCallable)
	void AddSkeletalMeshPreviewIfNone(class USkeletalMesh* SkeletalMesh);
};
