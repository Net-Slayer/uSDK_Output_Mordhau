// Class Mordhau.HolsterMotion

// 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])

class UHolsterMotion : public UMordhauMotion

{

public:

	unsigned char                                      Mode;                                                      // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Z5YS[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.HolsterMotion");

		return ptr;

	}







};



