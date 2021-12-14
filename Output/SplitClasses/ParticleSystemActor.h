// Class Mordhau.ParticleSystemActor

// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])

class AParticleSystemActor : public AActor

{

public:

	unsigned char                                      UnknownData_2XG6[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UParticleSystem*                             Template;                                                  // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystemComponent*                    ParticleSystemComponent;                                   // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ParticleSystemActor");

		return ptr;

	}







	void SparseTick();

};



