// Class Mordhau.PreSkinnedPoseOracle

// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])

class APreSkinnedPoseOracle : public AActor

{

public:

	TMap<class USkeleton*, class USkeletalMeshComponent*> SkeletonToMeshComp;                                        // 0x0220(0x0050) (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PreSkinnedPoseOracle");

		return ptr;

	}







};



