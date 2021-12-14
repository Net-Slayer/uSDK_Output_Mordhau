// Class Mordhau.Quiver

// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])

class UQuiver : public UObject

{

public:

	struct FName                                       AttachSocketName;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FTransform                                  AttachSocketTransform;                                     // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	TArray<class UStaticMesh*>                         QuiverMeshes;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Quiver");

		return ptr;

	}







	class UStaticMesh* FindAppropriateQuiverMesh(unsigned char Ammo, unsigned char MaxAmmo);

};



