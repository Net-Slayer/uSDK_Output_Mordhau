#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PhysicsProxy.generated.h"
// Class Mordhau.PhysicsProxy
class MORDHAU_API APhysicsProxy  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AActor> Original; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FTransform Offset; // (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	class USkeletalMeshComponent* SkeletalMesh; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float IdleTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
