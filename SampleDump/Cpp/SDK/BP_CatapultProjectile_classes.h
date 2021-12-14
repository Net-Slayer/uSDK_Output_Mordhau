﻿#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CatapultProjectile.BP_CatapultProjectile_C
// 0x000C (FullSize[0x07E0] - InheritedSize[0x07D4])
class ABP_CatapultProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData_LWOF[0x4];                                     // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatapultProjectile.BP_CatapultProjectile_C");
		return ptr;
	}



	void SetProjectileInitialSpeed(unsigned char InByte);
	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);
	void Fire();
	void ExecuteUbergraph_BP_CatapultProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
