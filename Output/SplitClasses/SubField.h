// Class Mordhau.SubField

// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])

class ASubField : public AActor

{

public:

	class UPrimitiveComponent*                         Area;                                                      // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsSubFieldDeactivated;                                    // 0x0228(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsSubFieldHidden;                                         // 0x0229(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_X2PD[0x2];                                     // 0x022A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AMasterField>                 Master;                                                    // 0x022C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_S2JI[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.SubField");

		return ptr;

	}







	void SetSubFieldHidden(bool bValue);

	class AMasterField* GetMaster();

	void DeactivateSubField();

	void BeginSubFieldDeactivation();

};



