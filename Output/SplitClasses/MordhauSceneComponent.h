// Class Mordhau.MordhauSceneComponent

// 0x0010 (FullSize[0x0200] - InheritedSize[0x01F0])

class UMordhauSceneComponent : public USceneComponent

{

public:

	unsigned char                                      UnknownData_7W0X[0x10];                                    // 0x01F0(0x0010) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauSceneComponent");

		return ptr;

	}







};



