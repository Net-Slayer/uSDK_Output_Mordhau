#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PreSkinnedPoseOracle.generated.h"
// Class Mordhau.PreSkinnedPoseOracle
class MORDHAU_API APreSkinnedPoseOracle  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Export)
	TMap<class USkeleton*, class USkeletalMeshComponent*> SkeletonToMeshComp; // (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	// Functions
};
