#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "StaticMeshCapturePointBanner.generated.h"
// Class Mordhau.StaticMeshCapturePointBanner
class MORDHAU_API AStaticMeshCapturePointBanner  :  public ACapturePointBanner
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UStaticMeshComponent* StaticMeshComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
