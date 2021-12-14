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

// BlueprintGeneratedClass BTService_FLKillObjPerceptionUpdate.BTService_FLKillObjPerceptionUpdate_C
// 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
class UBTService_FLKillObjPerceptionUpdate_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      bPerceivesEnemy;                                           // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ClosestEnemyDistance;                                      // 0x00C8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTService_FLKillObjPerceptionUpdate.BTService_FLKillObjPerceptionUpdate_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_FLKillObjPerceptionUpdate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
