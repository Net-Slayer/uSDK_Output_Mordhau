// Class Mordhau.DisarmedMotion

// 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])

class UDisarmedMotion : public UMordhauMotion

{

public:

	float                                              RecoveryTime;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4KHF[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.DisarmedMotion");

		return ptr;

	}







};



