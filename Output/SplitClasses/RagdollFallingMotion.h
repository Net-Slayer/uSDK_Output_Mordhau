// Class Mordhau.RagdollFallingMotion

// 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])

class URagdollFallingMotion : public UMordhauMotion

{

public:

	bool                                               bIsGettingUp;                                              // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LKS6[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.RagdollFallingMotion");

		return ptr;

	}







};



