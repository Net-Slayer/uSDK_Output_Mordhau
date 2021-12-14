// Class Mordhau.MordhauSpectator

// 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])

class AMordhauSpectator : public ASpectatorPawn

{

public:

	float                                              BlockInputAfterDeathTime;                                  // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAutomaticallyAsksForSpawn;                                // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanOnlyViewOwnTeam;                                       // 0x02AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_21JG[0x2];                                     // 0x02AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CreatedTime;                                               // 0x02B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastSentCameraUpdate;                                      // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothedTurnValue;                                    // 0x02B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothingTurnVelocity;                                // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothedLookUpValue;                                  // 0x02C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothingLookUpVelocity;                              // 0x02C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsFirstTick;                                              // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_841W[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauSpectator");

		return ptr;

	}







	void TertiarySpectatorAction();

	void SwitchToFreeCam();

	void SecondarySpectatorAction();

	void PrimarySpectatorAction();

	bool IsWatchingOwnDeath();

};



