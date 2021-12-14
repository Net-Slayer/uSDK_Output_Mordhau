#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ParticleSystemActor.generated.h"
// Class Mordhau.ParticleSystemActor
class MORDHAU_API AParticleSystemActor  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* Template; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	class UParticleSystemComponent* ParticleSystemComponent; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void SparseTick();
};
