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
	 * Function BPC_PlayerCheats.BPC_PlayerCheats_C.ReceiveBeginPlay
	 */
	struct UBPC_PlayerCheats_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_PlayerCheats.BPC_PlayerCheats_C.ReceiveTick
	 */
	struct UBPC_PlayerCheats_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerCheats.BPC_PlayerCheats_C.TriggerPressed
	 */
	struct UBPC_PlayerCheats_C_TriggerPressed_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_PlayerCheats.BPC_PlayerCheats_C.ExecuteUbergraph_BPC_PlayerCheats
	 */
	struct UBPC_PlayerCheats_C_ExecuteUbergraph_BPC_PlayerCheats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
