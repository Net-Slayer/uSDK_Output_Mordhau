// Class Mordhau.AdvProjectileMovementComponent

// 0x0010 (FullSize[0x01E0] - InheritedSize[0x01D0])

class UAdvProjectileMovementComponent : public UProjectileMovementComponent

{

public:

	float                                              DragDeceleration;                                          // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_744Z[0xC];                                     // 0x01D4(0x000C) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.AdvProjectileMovementComponent");

		return ptr;

	}







};



