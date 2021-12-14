// Class Mordhau.BuildableBoxTrace

// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])

class UBuildableBoxTrace : public UBuildableTraceBase

{

public:

	struct FName                                       ProfileName;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StartTraceXAxisPercentage;                                 // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_1697[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BuildableBoxTrace");

		return ptr;

	}







};



