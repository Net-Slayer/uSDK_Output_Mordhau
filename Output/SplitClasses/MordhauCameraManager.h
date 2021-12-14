// Class Mordhau.MordhauCameraManager

// 0x0650 (FullSize[0x2D90] - InheritedSize[0x2740])

class AMordhauCameraManager : public APlayerCameraManager

{

public:

	class UTagSystemComponent*                         TagSystemComponent;                                        // 0x2740(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      ClosestWidgetVisibilityQueueDistances;                     // 0x2748(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ClosestWidgetVisibilityQueueMaxDistance;                   // 0x2758(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QO10[0x4];                                     // 0x275C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class AAtmosphericFog*                             AtmosphericFog;                                            // 0x2760(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_K7D1[0x4];                                     // 0x2768(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              AtmosphericFogMultiplierChangeSpeed;                       // 0x276C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsInMainMenu;                                             // 0x2770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_5K86[0xF];                                     // 0x2771(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FMinimalViewInfo                            LastViewInfo;                                              // 0x2780(0x05D0) (NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AActor>                       QueuedViewTarget;                                          // 0x2D50(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<TWeakObjectPtr<class UMordhauWidgetComponent>> LateTickRequests;                                          // 0x2D58(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HitFlashFadeInDuration;                                    // 0x2D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HitFlashStayDuration;                                      // 0x2D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HitFlashFadeOutDuration;                                   // 0x2D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_BP18[0x8];                                     // 0x2D74(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HitFlashValue;                                             // 0x2D7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHitFlashDirectional;                                    // 0x2D80(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_R7M2[0x3];                                     // 0x2D81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AActor>                       HitFlashSource;                                            // 0x2D84(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HitFlashDegrees;                                           // 0x2D8C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauCameraManager");

		return ptr;

	}







	void SetViewTargetBP(class AActor* NewTarget);

	void SetCameraStyleBP(const struct FName& NewCameraStyle);

	void OnHitFlash(bool bIsDirectional, class AActor* Source);

	void LeaveMapView();

	void LeaveCustomization();

	class AActor* GetViewTargetBP();

	bool GetIsInMapView();

	bool GetIsInCustomization();

	struct FName GetCameraStyleBP();

	struct FMinimalViewInfo GetCameraCache();

	void EnterMapView();

	void EnterCustomization(class AActor* CustomizationTarget);

};



