// Class Mordhau.BuildablePlaneTrace

// 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])

class UBuildablePlaneTrace : public UBuildableTraceBase

{

public:

	TArray<class UClass*>                              CheckActorsOnPlaneTraceHit;                                // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FSpawnablePlaneInfo                         PlaneInfo;                                                 // 0x0080(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FVector                                     TraceAmount;                                               // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_70QH[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UClass*>                              ForbiddenHitActorsList;                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bInverseXYAngle;                                           // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PPT4[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MaxAllowedPlacementAngle;                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              InverseXAxisMod;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              InverseYAxisMod;                                           // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PlacementLocationOffset;                                   // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    PlacementRotationOffset;                                   // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BuildablePlaneTrace");

		return ptr;

	}







	void GetPlacementAngleAndRotation(struct FSpawnablePlaneTraceResult* OutTraceResult, const struct FSpawnableObjectInfo& ObjectInfo, float* OutAngle, struct FRotator* OutRotation);

	void DrawDebugPlane(class UObject* WorldContextObject, const struct FVector& Forward, const struct FVector& Back, const struct FVector& Right, const struct FVector& Left, const struct FVector& InTraceAmount, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType);

};



