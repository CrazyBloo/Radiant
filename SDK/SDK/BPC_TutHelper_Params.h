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
	 * Function BPC_TutHelper.BPC_TutHelper_C.ItemsSold
	 */
	struct UBPC_TutHelper_C_ItemsSold_Params
	{	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.ItemsBought
	 */
	struct UBPC_TutHelper_C_ItemsBought_Params
	{	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.SetControllActor
	 */
	struct UBPC_TutHelper_C_SetControllActor_Params
	{
	public:
		class ABPA_TutorStep_C*                                    Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.LockFunctions
	 */
	struct UBPC_TutHelper_C_LockFunctions_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.ItemPutToBin
	 */
	struct UBPC_TutHelper_C_ItemPutToBin_Params
	{	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.ItemREmovedFromBin
	 */
	struct UBPC_TutHelper_C_ItemREmovedFromBin_Params
	{	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.TargetActorHeldInHand
	 */
	struct UBPC_TutHelper_C_TargetActorHeldInHand_Params
	{
	public:
		bool                                                       IsHeld;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HeldInLeft;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.StartHelper
	 */
	struct UBPC_TutHelper_C_StartHelper_Params
	{	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.StopHelper
	 */
	struct UBPC_TutHelper_C_StopHelper_Params
	{	};

	/**
	 * Function BPC_TutHelper.BPC_TutHelper_C.ExecuteUbergraph_BPC_TutHelper
	 */
	struct UBPC_TutHelper_C_ExecuteUbergraph_BPC_TutHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3TJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
