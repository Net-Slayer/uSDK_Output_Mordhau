// Class Mordhau.LateTickComponent

// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])

class ULateTickComponent : public UActorComponent

{

public:

	float                                              LODDeltaTime;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7L5A[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.LateTickComponent");

		return ptr;

	}







};



