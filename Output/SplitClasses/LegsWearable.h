// Class Mordhau.LegsWearable

// 0x0018 (FullSize[0x01B8] - InheritedSize[0x01A0])

class ULegsWearable : public UMordhauWearable

{

public:

	unsigned char                                      DefaultFeet;                                               // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GZBC[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      FeetWearables[0x10];                                       // 0x01A1(0x0010) UNKNOWN PROPERTY: ArrayProperty





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.LegsWearable");

		return ptr;

	}







	int GetFeetWearablesNum();

	class UClass* GetFeetWearable(int Index);

};



