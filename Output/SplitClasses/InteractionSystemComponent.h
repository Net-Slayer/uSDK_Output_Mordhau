// Class Mordhau.InteractionSystemComponent

// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])

class UInteractionSystemComponent : public UActorComponent

{

public:

	unsigned char                                      UnknownData_6IUU[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AActor>                       RequestedInteractionTarget;                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                NumberOfSweeps;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                SweepSphereRadius;                                         // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                SweepRadius;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDrawAllSections;                                          // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NVFL[0x1B];                                    // 0x00CD(0x001B) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.InteractionSystemComponent");

		return ptr;

	}







	void OnUnPossessed(class AAdvancedCharacter* Character);

	void OnLODTick(float DeltaTime);

	void OnLateTick(float DeltaTime);

	void OnCharacterDestroyed(class AAdvancedCharacter* Character);

};



