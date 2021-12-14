#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauBeaconClient.generated.h"
// Class Mordhau.MordhauBeaconClient
class MORDHAU_API AMordhauBeaconClient  :  public AOnlineBeaconClient
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	Mordhau_EBeaconRequest Request; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	double PingStartTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FPlayFabPlayerEntity> PlayerEntities; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerReserveSlots(TArray<struct FPlayFabPlayerEntity> InPlayerEntities);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerPing();
UFUNCTION()
	bool ReserveSlots(struct FURL* ConnectURL, TArray<struct FPlayFabPlayerEntity> InPlayerEntites);
UFUNCTION()
	bool Ping(struct FURL* ConnectURL);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientPong();
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientNotifyReservationStatus(int OpenSlots, Mordhau_EReservationStatus ReservationStatus);
};
