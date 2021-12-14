// Class Mordhau.MordhauPlayerState

// 0x00F0 (FullSize[0x0410] - InheritedSize[0x0320])

class AMordhauPlayerState : public APlayerState

{

public:

	TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;                                      // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TArray<float>                                      MedianPings;                                               // 0x0328(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      MedianPingsSorted;                                         // 0x0338(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                CurMedianPingIndex;                                        // 0x0348(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PingMedian;                                                // 0x034C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                LocalStableShortID;                                        // 0x0350(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int16_t                                            ReplicatedRank;                                            // 0x0354(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int16_t                                            ReplicatedKills;                                           // 0x0356(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int16_t                                            ReplicatedAssists;                                         // 0x0358(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	uint16_t                                           ReplicatedDeathsAndFlags;                                  // 0x035A(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int8_t                                             ReplicatedTeam;                                            // 0x035C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      Badge;                                                     // 0x035D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      LevelDisplayType;                                          // 0x035E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsPartyMember;                                            // 0x035F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsFriend;                                                 // 0x0360(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WOZS[0x3];                                     // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                FilteredTeamKills;                                         // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAlive;                                                  // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_873U[0x3];                                     // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                Kills;                                                     // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Deaths;                                                    // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Assists;                                                   // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Team;                                                      // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAdmin;                                                  // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_I016[0x3];                                     // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     AdminTier;                                                 // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                KilledLocalPlayerCounter;                                  // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsMuted;                                                  // 0x0394(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_J2N1[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                KilledByLocalPlayerCounter;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_58Q0[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPlayFabPlayer                              PlayFabPlayer;                                             // 0x03A0(0x0060) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     SessionTicket;                                             // 0x0400(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauPlayerState");

		return ptr;

	}







	void SetTeam(int NewTeam);

	void SetPlayerName(const struct FString& S);

	void OnRep_ReplicatedTeam();

	void OnRep_ReplicatedKills();

	void OnRep_ReplicatedDeathsAndFlags();

	void OnRep_ReplicatedAssists();

	int GetRank();

	struct FPlayFabPlayer GetPlayFabPlayer();

	struct FString GetPlayFabId();

	class AMordhauCharacter* GetLastPossessedMordhauCharacter();

	void BanPlayer(int BanDuration, const struct FString& BanReason, bool bIsOfficialServerBan, Mordhau_EBanType BanType);

	void AddScore(int Amount);

	void AddKills(int Amount);

	void AddDeaths(int Amount);

	void AddAssists(int Amount);

};



