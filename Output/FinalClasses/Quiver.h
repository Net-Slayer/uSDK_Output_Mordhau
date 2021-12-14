#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Quiver.generated.h"
// Class Mordhau.Quiver
class MORDHAU_API UQuiver  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName AttachSocketName; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform AttachSocketTransform; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UStaticMesh*> QuiverMeshes; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	class UStaticMesh* FindAppropriateQuiverMesh(uint8 Ammo, uint8 MaxAmmo) const;
};
