#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.GetShopShowCaseRef
	 */
	struct ABP_TutorStep_TraderBuyCheck_C_GetShopShowCaseRef_Params
	{
	public:
		class ABP_ShopShowcase_C*                                  Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.GetShopComputerRef
	 */
	struct ABP_TutorStep_TraderBuyCheck_C_GetShopComputerRef_Params
	{
	public:
		class ABP_ShopComputer_C*                                  Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.DoExecute
	 */
	struct ABP_TutorStep_TraderBuyCheck_C_DoExecute_Params
	{	};

	/**
	 * Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.checkTimer
	 */
	struct ABP_TutorStep_TraderBuyCheck_C_checkTimer_Params
	{	};

	/**
	 * Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.ReceiveTick
	 */
	struct ABP_TutorStep_TraderBuyCheck_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.ExecuteUbergraph_BP_TutorStep_TraderBuyCheck
	 */
	struct ABP_TutorStep_TraderBuyCheck_C_ExecuteUbergraph_BP_TutorStep_TraderBuyCheck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJLO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
