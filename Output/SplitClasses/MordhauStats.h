// Class Mordhau.MordhauStats

// 0x0270 (FullSize[0x0298] - InheritedSize[0x0028])

class UMordhauStats : public UObject

{

public:

	unsigned char                                      UnknownData_81OL[0x80];                                    // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FStat                                       GameVersion;                                               // 0x00A8(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       Blocks;                                                    // 0x00B4(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       Chambers;                                                  // 0x00C0(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       ProjectilesDeflected;                                      // 0x00CC(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       ProjectilesBlocked;                                        // 0x00D8(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       Battlecries;                                               // 0x00E4(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       Disarms;                                                   // 0x00F0(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       Kills;                                                     // 0x00FC(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       Assists;                                                   // 0x0108(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       KillsOneMatch;                                             // 0x0114(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       AssistsOneMatch;                                           // 0x0120(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       KillsOneLife;                                              // 0x012C(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       DamageTakenOneLife;                                        // 0x0138(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       HeadsDecapitated;                                          // 0x0144(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       ProjectileHeadHits;                                        // 0x0150(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       ProjectileTorsoHits;                                       // 0x015C(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       ProjectileLegHits;                                         // 0x0168(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       MeleeHeadHits;                                             // 0x0174(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       MeleeTorsoHits;                                            // 0x0180(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       MeleeLegHits;                                              // 0x018C(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       KillsOneAttack;                                            // 0x0198(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       FireKills;                                                 // 0x01A4(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       CouchedHeadKills;                                          // 0x01B0(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       LadderKills;                                               // 0x01BC(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       TrampleKills;                                              // 0x01C8(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       CasualRank;                                                // 0x01D4(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       CasualRankSamples;                                         // 0x01E0(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       DuelRank;                                                  // 0x01EC(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       DuelRankSamples;                                           // 0x01F8(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       DuelRankTimestamp;                                         // 0x0204(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       DuelRankLeaderboard;                                       // 0x0210(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       TeamfightRank;                                             // 0x021C(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       TeamfightRankSamples;                                      // 0x0228(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       TeamfightRankTimestamp;                                    // 0x0234(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FStat                                       TeamfightRankLeaderboard;                                  // 0x0240(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                TheABCs;                                                   // 0x024C(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                LivedToTell;                                               // 0x0254(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                Highlander;                                                // 0x025C(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                KeepsComingOff;                                            // 0x0264(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                EagleEye;                                                  // 0x026C(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                Yoink;                                                     // 0x0274(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                JusticeFromGrave;                                          // 0x027C(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                NotSparta;                                                 // 0x0284(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	struct FAchievement                                BurningMan;                                                // 0x028C(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NHWK[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauStats");

		return ptr;

	}







	void UnlockAchievement(Mordhau_ECallResult* CallResult, const struct FAchievement& Achievement);

	void StoreStats(Mordhau_ECallResult* CallResult);

	void StorePlayerStats(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);

	void SetValue(Mordhau_ECallResult* CallResult, const struct FStat& Stat, int Value);

	void SetPlayerValue(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, const struct FStat& Stat, int Value);

	void ResetAllStats(Mordhau_ECallResult* CallResult, bool bAchievementsToo);

	void RequestStats(Mordhau_ECallResult* CallResult);

	void RequestPlayerStats(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);

	void LockAchievement(Mordhau_ECallResult* CallResult, const struct FAchievement& Achievement);

	void IsAchievementUnlocked(Mordhau_ECallResult* CallResult, const struct FAchievement& Achievement, bool* bIsUnlocked);

	void IncrementValueChecked(class UWorld* World, const struct FStat& Stat);

	bool GetValueByName(const struct FString& StatName, int* OutValue);

	void GetValue(Mordhau_ECallResult* CallResult, const struct FStat& Stat, int* Value);

	void GetPlayerValue(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, const struct FStat& Stat, int* Value);

	bool AreStatsAvailable(const struct FString& PlayFabId);

};



