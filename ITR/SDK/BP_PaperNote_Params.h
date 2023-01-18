#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PaperNote.BP_PaperNote_C.UpdateMaterialDamage
	 */
	struct ABP_PaperNote_C_UpdateMaterialDamage_Params
	{	};

	/**
	 * Function BP_PaperNote.BP_PaperNote_C.GetNote
	 */
	struct ABP_PaperNote_C_GetNote_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DCWW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPaperNote                                          Note;                                                    // 0x0008(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function BP_PaperNote.BP_PaperNote_C.UserConstructionScript
	 */
	struct ABP_PaperNote_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PaperNote.BP_PaperNote_C.OnReconfigure
	 */
	struct ABP_PaperNote_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_PaperNote.BP_PaperNote_C.OnGrip
	 */
	struct ABP_PaperNote_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YOM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PaperNote.BP_PaperNote_C.ReceiveBeginPlay
	 */
	struct ABP_PaperNote_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PaperNote.BP_PaperNote_C.ExecuteUbergraph_BP_PaperNote
	 */
	struct ABP_PaperNote_C_ExecuteUbergraph_BP_PaperNote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9F8F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
