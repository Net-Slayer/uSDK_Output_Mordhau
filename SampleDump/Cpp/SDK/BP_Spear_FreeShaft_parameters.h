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

// Function BP_Spear_FreeShaft.BP_Spear_FreeShaft_C.ReceiveBeginPlay
struct UBP_Spear_FreeShaft_C_ReceiveBeginPlay_Params
{
};

// Function BP_Spear_FreeShaft.BP_Spear_FreeShaft_C.ReceiveActorBeginOverlap
struct UBP_Spear_FreeShaft_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spear_FreeShaft.BP_Spear_FreeShaft_C.ReceiveTick
struct UBP_Spear_FreeShaft_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Spear_FreeShaft.BP_Spear_FreeShaft_C.ExecuteUbergraph_BP_Spear_FreeShaft
struct UBP_Spear_FreeShaft_C_ExecuteUbergraph_BP_Spear_FreeShaft_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
