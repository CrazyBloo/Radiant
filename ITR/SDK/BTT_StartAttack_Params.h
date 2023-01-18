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
	 * Function BTT_StartAttack.BTT_StartAttack_C.ReceiveExecute
	 */
	struct UBTT_StartAttack_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_StartAttack.BTT_StartAttack_C.CheckFinish
	 */
	struct UBTT_StartAttack_C_CheckFinish_Params
	{	};

	/**
	 * Function BTT_StartAttack.BTT_StartAttack_C.ExecuteUbergraph_BTT_StartAttack
	 */
	struct UBTT_StartAttack_C_ExecuteUbergraph_BTT_StartAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
