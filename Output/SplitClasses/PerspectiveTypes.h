// Class Mordhau.PerspectiveTypes

// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])

class UPerspectiveTypes : public UBlueprintFunctionLibrary

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PerspectiveTypes");

		return ptr;

	}







	class UAnimMontage* STATIC_Get(const struct FPerspectiveAnimMontage& PerspectiveType, bool bIsFirstPerson);

};



