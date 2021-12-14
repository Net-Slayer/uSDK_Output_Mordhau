// Class Mordhau.RconCommand

// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])

class URconCommand : public UObject

{

public:

	struct FRconCommandInfo                            CommandInfo;                                               // 0x0028(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	bool                                               bLogCommandUsage;                                          // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CGI3[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.RconCommand");

		return ptr;

	}







	bool SendResponse(class UPlayFabJsonObject* ResponseObject, int ClientId, int PacketId);

	class UPlayFabJsonObject* RequestInfo(int ClientId, int PacketId);

	bool ExecuteCommand(const struct FString& CommandType, class UPlayFabJsonObject* InCommand, int ClientId, int PacketId);

	bool CanExecuteCommand(const struct FString& CommandType, class UPlayFabJsonObject* InCommand, int ClientId, int PacketId);

};



