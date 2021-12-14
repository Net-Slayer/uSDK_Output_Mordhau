// Class Mordhau.MordhauBeaconClient

// 0x0040 (FullSize[0x02F0] - InheritedSize[0x02B0])

class AMordhauBeaconClient : public AOnlineBeaconClient

{

public:

	Mordhau_EBeaconRequest                             Request;                                                   // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_B2BM[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	double                                             PingStartTime;                                             // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FPlayFabPlayerEntity>                PlayerEntities;                                            // 0x02C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_2R48[0x20];                                    // 0x02D0(0x0020) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauBeaconClient");

		return ptr;

	}







	void ServerReserveSlots(TArray<struct FPlayFabPlayerEntity> InPlayerEntities);

	void ServerPing();

	bool ReserveSlots(struct FURL* ConnectURL, TArray<struct FPlayFabPlayerEntity> InPlayerEntites);

	bool Ping(struct FURL* ConnectURL);

	void ClientPong();

	void ClientNotifyReservationStatus(int OpenSlots, Mordhau_EReservationStatus ReservationStatus);

};



