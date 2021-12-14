// Class Mordhau.MordhauHUDWidgetComponent

// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])

class UMordhauHUDWidgetComponent : public UActorComponent

{

public:

	bool                                               bCreateOnBeginPlay;                                        // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShowOnBeginPlay;                                          // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_HMA7[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UClass*                                      WidgetBPReference;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UUserWidget*                                 Widget;                                                    // 0x00C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bIsPendingToShow;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_FKOF[0xF];                                     // 0x00C9(0x000F) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauHUDWidgetComponent");

		return ptr;

	}







	bool ShowWidget();

	void RemoveWidget();

	void OnCharacterOwnerEndViewTarget(class AAdvancedCharacter* CharacterOwner);

	void OnCharacterOwnerBecomeViewTarget(class AAdvancedCharacter* CharacterOwner);

	void InstantiateWidget();

	void HideWidget();

	class UUserWidget* GetHUDWidget();

};



