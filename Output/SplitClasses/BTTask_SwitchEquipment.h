// Class Mordhau.BTTask_SwitchEquipment

// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])

class UBTTask_SwitchEquipment : public UBTTaskNode

{

public:

	bool                                               bMelee;                                                    // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_P0S0[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UClass*>                              AllowedSubclasses;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              NotAllowedSubclasses;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BTTask_SwitchEquipment");

		return ptr;

	}







};



