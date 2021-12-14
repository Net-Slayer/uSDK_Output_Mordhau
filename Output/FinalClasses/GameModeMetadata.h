#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GameModeMetadata.generated.h"
// Class Mordhau.GameModeMetadata
class MORDHAU_API UGameModeMetadata  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString Prefix; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText Name; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText Description; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D* Thumbnail; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FText> Tips; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<MordhauOnlineSubsystem_EServerRegion, struct FPlayerCountArray> PlayerCount; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	TArray<int> GetPlayerCount(MordhauOnlineSubsystem_EServerRegion ServerRegion);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UGameModeMetadata* GetDefaultObject(class UClass* MetadataClass);
};
