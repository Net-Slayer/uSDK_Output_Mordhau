// Class Mordhau.MoveSoundComponent

// 0x0060 (FullSize[0x0830] - InheritedSize[0x07D0])

class UMoveSoundComponent : public UAudioComponent

{

public:

	bool                                               bShouldPlayMoveSound;                                      // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShouldPlayTurnSound;                                      // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_R1EU[0x2];                                     // 0x07D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FName                                       MoveSoundAttachSocket;                                     // 0x07D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MoveSoundFadeOut;                                          // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   MinRotationVelocityToPlayMoveSound;                        // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     MinTranslationVelocityToPlayMoveSound;                     // 0x07E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RotationVelocityInterpSpeed;                               // 0x07F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RotationVelocityMax;                                       // 0x07FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_FFHY[0x4];                                     // 0x0804(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USoundCue*                                   MoveSoundCue;                                              // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              LastMoveSound;                                             // 0x0810(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   PreviousRotation;                                          // 0x0818(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RotationVelocity;                                          // 0x0820(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_67AZ[0x8];                                     // 0x0828(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MoveSoundComponent");

		return ptr;

	}







	void OnLODTick(float DeltaTime);

	void OnCharacterDied(class AAdvancedCharacter* Character);

};



