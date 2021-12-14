// Class Mordhau.MapCameraActor

// 0x0010 (FullSize[0x07A0] - InheritedSize[0x0790])

class AMapCameraActor : public ACameraActor

{

public:

	int                                                Team;                                                      // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AtmosphericFogMultiplierOverride;                          // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CE6W[0x8];                                     // 0x0798(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MapCameraActor");

		return ptr;

	}







};



