// Class Mordhau.BuildableLineTrace

// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])

class UBuildableLineTrace : public UBuildableTraceBase

{

public:

	struct FVector                                     TraceStartOffset;                                          // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     TraceEndOffset;                                            // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BuildableLineTrace");

		return ptr;

	}







};



