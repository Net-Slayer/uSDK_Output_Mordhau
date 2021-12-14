#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "RconCommand.generated.h"
// Class Mordhau.RconCommand
class MORDHAU_API URconCommand  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRconCommandInfo CommandInfo; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bLogCommandUsage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool SendResponse(class UPlayFabJsonObject* ResponseObject, int ClientId, int PacketId);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	class UPlayFabJsonObject* RequestInfo(int ClientId, int PacketId);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool ExecuteCommand(const struct FString& CommandType, class UPlayFabJsonObject* InCommand, int ClientId, int PacketId);
UFUNCTION(BlueprintNativeEvent)
	bool CanExecuteCommand(const struct FString& CommandType, class UPlayFabJsonObject* InCommand, int ClientId, int PacketId);
};
