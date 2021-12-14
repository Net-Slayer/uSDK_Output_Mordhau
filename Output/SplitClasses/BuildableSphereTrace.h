// Class Mordhau.BuildableSphereTrace

// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])

class UBuildableSphereTrace : public UBuildableTraceBase

{

public:

	struct FVector                                     TraceStartOffset;                                          // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     TraceEndOffset;                                            // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              Radius;                                                    // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0ROM[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BuildableSphereTrace");

		return ptr;

	}







};



