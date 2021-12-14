// Class Mordhau.BuildingSystemComponent

// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])

class UBuildingSystemComponent : public UActorComponent

{

public:

	TArray<struct FSpawnableObjectInfo>                SpawnableObjects;                                          // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UBuildableTraceBase*>                 TraceList;                                                 // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMeshComponent*                              PreviewMeshComponent;                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterial*                                   PreviewMaterial;                                           // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShowPreview;                                              // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0HD5[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UMordhauHUDWidgetComponent*                  MordhauHUDWidgetComponent;                                 // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnMeshPreviewCreated;                                      // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnMeshPreviewDestroyed;                                    // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QKIZ[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BuildingSystemComponent");

		return ptr;

	}







	bool ValidateSpot(const struct FVector& Offset, struct FVector* OutLocation, struct FRotator* OutRotation, class USceneComponent** AttachToComponent, class UBuildableTraceBase** BuildableTraceHit, int SpawnableObjectIndex, bool bDrawObjectPreview, bool bForceFail);

	void SetupMeshPreview();

	int GetEquipmentPlaceableMaxLimit(int SpawnableObjectIndex);

	struct FName GetEquipmentPlaceableLimitName(int SpawnableObjectIndex);

	struct FSpawnableObjectInfo GetEquipmentInfo(int SpawnableObjectIndex);

	struct FName GetEquipmentDisplayName(int SpawnableObjectIndex);

	int GetEquipmentAmmoCost(int SpawnableObjectIndex);

	void DisplayPreview(bool bDrawObjectPreview, bool bIsValid, const struct FSpawnableObjectInfo& ObjectInfo, const struct FTransform& ObjectTransform, int SpawnableObjectIndex);

	void DestroyMeshPreview();

	void AddStaticMeshPreviewIfNone(class UStaticMesh* StaticMesh);

	void AddSkeletalMeshPreviewIfNone(class USkeletalMesh* SkeletalMesh);

};



