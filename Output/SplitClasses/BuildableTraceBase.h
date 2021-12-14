// Class Mordhau.BuildableTraceBase

// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])

class UBuildableTraceBase : public UDataAsset

{

public:

	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       TraceObjectTypes;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bTraceComplex;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIgnoreSelf;                                               // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TEnumAsByte<Engine_EDrawDebugTrace>                DrawType;                                                  // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_3WWN[0x1];                                     // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FColor                                      DrawColor;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FText                                       TraceTextForUI;                                            // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0060(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BuildableTraceBase");

		return ptr;

	}







};



