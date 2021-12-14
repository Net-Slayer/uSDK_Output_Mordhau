// Class Mordhau.InteractionComponent

// 0x0018 (FullSize[0x0430] - InheritedSize[0x0418])

class UInteractionComponent : public UBoxComponent

{

public:

	TArray<class UMeshComponent*>                      VisualMeshComponents;                                      // 0x0418(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsInteractable;                                           // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHighlighted;                                            // 0x0429(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4AFU[0x6];                                     // 0x042A(0x0006) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.InteractionComponent");

		return ptr;

	}







	void UnHighlight();

	void OnInteractionStart(class AAdvancedCharacter* Character);

	void OnInteractionEnd();

	void OnHighlightStart();

	void OnHighlightEnd();

	void InteractionStart(class AAdvancedCharacter* Character);

	void InteractionEnd();

	void Highlight();

	bool CanInteract(class AAdvancedCharacter* Character);

};



