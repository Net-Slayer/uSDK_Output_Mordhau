// Class Mordhau.HealthStatComponent

// 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])

class UHealthStatComponent : public UStatComponent

{

public:

	bool                                               bPlaysHeartbeatSound;                                      // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_KUBO[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USoundCue*                                   HeartbeatSound;                                            // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                HeartbeatSoundPlayBelowHealth;                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              LastHeartbeat;                                             // 0x00EC(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9OAW[0x14];                                    // 0x00F4(0x0014) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.HealthStatComponent");

		return ptr;

	}







	void OnCharacterDied(class AAdvancedCharacter* Character);

};



