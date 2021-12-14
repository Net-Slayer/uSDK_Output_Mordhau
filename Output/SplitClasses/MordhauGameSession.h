// Class Mordhau.MordhauGameSession

// 0x08C8 (FullSize[0x0B00] - InheritedSize[0x0238])

class AMordhauGameSession : public AGameSession

{

public:

	unsigned char                                      UnknownData_ABZG[0x32C];                                   // 0x0238(0x032C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                MaxSlots;                                                  // 0x0564(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     ServerName;                                                // 0x0568(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_6FEW[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     ServerPassword;                                            // 0x0580(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<int>                                        Mods;                                                      // 0x0590(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     AdminPassword;                                             // 0x05A0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     RconPassword;                                              // 0x05B0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RconTimeout;                                               // 0x05C0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                RconPort;                                                  // 0x05C4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bRconTieredAdmins;                                         // 0x05C8(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowHttpRequests;                                        // 0x05C9(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_6VJ4[0x2];                                     // 0x05CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                MaxNetSkip;                                                // 0x05CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                FriendlyNetSkipOffset;                                     // 0x05D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CTFD[0x4];                                     // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             Admins;                                                    // 0x05D8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FString, int64_t>                      BannedPlayers;                                             // 0x05E8(0x0050) (Config, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_1GOA[0xA0];                                    // 0x0638(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TMap<struct FString, int64_t>                      MutedPlayers;                                              // 0x06D8(0x0050) (Config, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GGUA[0xA0];                                    // 0x0728(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<uint64_t>                                   LegacyAdmins;                                              // 0x07C8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<uint64_t, int64_t>                            LegacyBannedPlayers;                                       // 0x07D8(0x0050) (Config, NativeAccessSpecifierPublic)

	TMap<uint64_t, int64_t>                            LegacyMutedPlayers;                                        // 0x0828(0x0050) (Config, NativeAccessSpecifierPublic)

	bool                                               bAdvertiseServerViaSteam;                                  // 0x0878(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseLegacyPakMounting;                                     // 0x0879(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseOfficialBanList;                                       // 0x087A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseOfficialMuteList;                                      // 0x087B(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_O0IK[0x4];                                     // 0x087C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FScriptMulticastDelegate                    OnRequestBan;                                              // 0x0880(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRequestUnban;                                            // 0x0890(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRequestMute;                                             // 0x08A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRequestUnmute;                                           // 0x08B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRequestKick;                                             // 0x08C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnMatchStateChanged;                                       // 0x08D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	bool                                               bAllowJsonForRconClients;                                  // 0x08E0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_O0QX[0x3];                                     // 0x08E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                MaxRconPacketSize;                                         // 0x08E4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseAdminTierSystem;                                       // 0x08E8(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_K72I[0x7];                                     // 0x08E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     AdminActionWebhookURL;                                     // 0x08F0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     AdminActionChatColor;                                      // 0x0900(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     AdminPunishmentWebhookURL;                                 // 0x0910(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     AdminPunishmentColor;                                      // 0x0920(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     AdminChatCommandWebhookURL;                                // 0x0930(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     AdminChatCommandColor;                                     // 0x0940(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     ServerLagReportsWebhookURL;                                // 0x0950(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     ServerLagReportColor;                                      // 0x0960(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     ServerLagReportColor2;                                     // 0x0970(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     ChatFeedWebhookURL;                                        // 0x0980(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FString                                     ChatFeedColor;                                             // 0x0990(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class URconCommand*>                        RconCommands;                                              // 0x09A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FString, struct FRconFlag>             RconFlags;                                                 // 0x09B0(0x0050) (NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_8XTU[0x100];                                   // 0x0A00(0x0100) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauGameSession");

		return ptr;

	}







	void UploadAdminActionDataToWebhook(const struct FString& Command, const struct FPlayFabPlayer& Sender, const struct FString& Details);

	bool UnmutePlayer(const struct FString& PlayFabId, bool bExpired);

	bool UnbanPlayer(const struct FString& PlayFabId, bool bExpired);

	void TriggerRewardDropForPlayer(class APlayerController* Player);

	void TriggerRewardDrop();

	void ReportTimeLeft(TArray<float> TimeLeft);

	bool ReportPlayer(const struct FString& ReporteePlayFabID, const struct FString& ReporterPlayFabID, const struct FString& ReportType, const struct FString& ScreenshotFilename);

	void RemoveAdmin(class APlayerController* AdminPlayer);

	bool MutePlayerWithDuration(class APlayerController* MutedPlayer, int MuteDuration);

	bool MutePlayer(class APlayerController* MutedPlayer);

	bool KickPlayer(class APlayerController* KickedPlayer, const struct FText& KickReason);

	bool IsPlayerMuted(const struct FString& PlayFabId);

	bool IsPlayerBanned(const struct FString& PlayFabId);

	int GetPlayerMuteDuration(const struct FString& PlayFabId);

	int GetPlayerBanDuration(const struct FString& PlayFabId);

	bool BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const struct FText& BanReason);

	bool BanPlayer(class APlayerController* BannedPlayer, const struct FText& BanReason);

	bool AllowsJoin();

	void AllowJoin(bool bInAllowJoin);

	void AddTieredAdmin(class APlayerController* AdminPlayer, const struct FString& Tier);

	void AddAdmin(class APlayerController* AdminPlayer);

};



