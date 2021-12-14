// Class Mordhau.TagSystemComponent

// 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])

class UTagSystemComponent : public UActorComponent

{

public:

	struct FGameplayTagContainer                       OwnTags;                                                   // 0x00B0(0x0020) (NativeAccessSpecifierPublic)

	struct FGameplayTagContainer                       Tags;                                                      // 0x00D0(0x0020) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

	TArray<class UTagSystemComponent*>                 ParentTagSystemComponents;                                 // 0x00F0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UTagSystemComponent*>                 ChildrenTagSystemComponents;                               // 0x0100(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FGameplayTagConditionDelegate>       ConditionDelegates;                                        // 0x0110(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.TagSystemComponent");

		return ptr;

	}







	void SetTags(const struct FGameplayTagContainer& TagContainer);

	void RemoveTags(const struct FGameplayTagContainer& TagContainer);

	void RemoveTag(const struct FGameplayTag& Tag);

	void RegisterTagConditionDelegate(const struct FGameplayTagCondition& Condition, class UObject* Object, const struct FName& Function);

	void FlashTags(const struct FGameplayTagContainer& TagContainer);

	void FlashTag(const struct FGameplayTag& Tag);

	void AddTags(const struct FGameplayTagContainer& TagContainer);

	void AddTag(const struct FGameplayTag& Tag);

	void AddAndRemoveTags(const struct FGameplayTagContainer& TagsToAdd, const struct FGameplayTagContainer& TagsToRemove);

	void AddAndRemoveTag(const struct FGameplayTag& TagToAdd, const struct FGameplayTag& TagToRemove);

};



