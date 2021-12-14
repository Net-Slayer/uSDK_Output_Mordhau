// Class Mordhau.GoreActor

// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])

class AGoreActor : public AActor

{

public:

	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystemComponent*                    ParticleSystemComponent;                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.GoreActor");

		return ptr;

	}







};



