#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "SkeletalMeshMordhauActor.generated.h"
// Class Mordhau.SkeletalMeshMordhauActor
class MORDHAU_API ASkeletalMeshMordhauActor  :  public AMordhauActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class USkeletalMeshComponent* SkeletalMeshComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
