#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_ShortSwordCommonGuard.BP_ShortSwordCommonGuard_C.ReceiveBeginPlay
struct UBP_ShortSwordCommonGuard_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShortSwordCommonGuard.BP_ShortSwordCommonGuard_C.ReceiveActorBeginOverlap
struct UBP_ShortSwordCommonGuard_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ShortSwordCommonGuard.BP_ShortSwordCommonGuard_C.ReceiveTick
struct UBP_ShortSwordCommonGuard_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ShortSwordCommonGuard.BP_ShortSwordCommonGuard_C.ExecuteUbergraph_BP_ShortSwordCommonGuard
struct UBP_ShortSwordCommonGuard_C_ExecuteUbergraph_BP_ShortSwordCommonGuard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
