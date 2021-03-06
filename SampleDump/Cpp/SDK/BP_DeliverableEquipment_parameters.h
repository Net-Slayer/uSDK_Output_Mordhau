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

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanInteract
struct ABP_DeliverableEquipment_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanHeldInteract
struct ABP_DeliverableEquipment_C_CanHeldInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Break
struct ABP_DeliverableEquipment_C_Break_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnRep_Broke
struct ABP_DeliverableEquipment_C_OnRep_Broke_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume
struct ABP_DeliverableEquipment_C_Consume_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript
struct ABP_DeliverableEquipment_C_UserConstructionScript_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud
struct ABP_DeliverableEquipment_C_OnThud_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile
struct ABP_DeliverableEquipment_C_FireProjectile_Params
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Orientation;                                               // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AController*                                 OwningController;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExpectedDelay;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp
struct ABP_DeliverableEquipment_C_OnPickedUp_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnBroken
struct ABP_DeliverableEquipment_C_OnBroken_Params
{
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnHeldInteractionStart
struct ABP_DeliverableEquipment_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment
struct ABP_DeliverableEquipment_C_ExecuteUbergraph_BP_DeliverableEquipment_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
