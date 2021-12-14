// Class Mordhau.ConfigCommand

// 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])

class UConfigCommand : public URconCommand

{

public:

	TMap<struct FString, Mordhau_EConfigValueType>     ValueTypes;                                                // 0x0080(0x0050) (NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ConfigCommand");

		return ptr;

	}







};



