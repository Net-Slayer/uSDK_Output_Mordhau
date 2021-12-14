#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "LODStaticMeshActor.generated.h"
// Class Mordhau.LODStaticMeshActor
class MORDHAU_API ALODStaticMeshActor  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class ULODStaticMeshComponent* StaticMeshComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
