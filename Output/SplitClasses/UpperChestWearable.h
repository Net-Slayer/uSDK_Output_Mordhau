// Class Mordhau.UpperChestWearable

// 0x0048 (FullSize[0x01E8] - InheritedSize[0x01A0])

class UUpperChestWearable : public UMordhauWearable

{

public:

	unsigned char                                      DefaultLowerChest;                                         // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9YDR[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      LowerChestWearables[0x10];                                 // 0x01A1(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      DefaultArms;                                               // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9G3W[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      ArmsWearables[0x10];                                       // 0x01B9(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      DefaultShoulders;                                          // 0x01D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_35N8[0x7];                                     // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      ShouldersWearables[0x10];                                  // 0x01D1(0x0010) UNKNOWN PROPERTY: ArrayProperty





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.UpperChestWearable");

		return ptr;

	}







	int GetShouldersWearablesNum();

	class UClass* GetShouldersWearable(int Index);

	int GetLowerChestWearablesNum();

	class UClass* GetLowerChestWearable(int Index);

	int GetArmsWearablesNum();

	class UClass* GetArmsWearable(int Index);

};



