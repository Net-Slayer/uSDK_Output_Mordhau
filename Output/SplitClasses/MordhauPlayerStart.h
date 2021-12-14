// Class Mordhau.MordhauPlayerStart

// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])

class AMordhauPlayerStart : public APlayerStart

{

public:

	bool                                               bIsSpawnDisabled;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RVYY[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                Team;                                                      // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Token;                                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0Z3V[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauPlayerStart");

		return ptr;

	}







	void OnSpawnChosen(class AController* Player);

	bool IsAllowedSpawnFor(class AController* Player);

	float GetSpawnPreferenceFor(class AController* Player);

};



