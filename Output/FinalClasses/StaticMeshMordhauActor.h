#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "StaticMeshMordhauActor.generated.h"
// Class Mordhau.StaticMeshMordhauActor
class MORDHAU_API AStaticMeshMordhauActor  :  public AMordhauActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UStaticMeshComponent* StaticMeshComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
