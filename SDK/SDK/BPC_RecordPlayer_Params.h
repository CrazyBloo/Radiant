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
	 * Function BPC_RecordPlayer.BPC_RecordPlayer_C.PlayRecord
	 */
	struct UBPC_RecordPlayer_C_PlayRecord_Params
	{
	public:
		struct FDialogue                                           Record;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class UAudioComponent*                                     audioRef;                                                // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_RecordPlayer.BPC_RecordPlayer_C.StopRecord
	 */
	struct UBPC_RecordPlayer_C_StopRecord_Params
	{	};

	/**
	 * Function BPC_RecordPlayer.BPC_RecordPlayer_C.OnGamePaused_Event_1
	 */
	struct UBPC_RecordPlayer_C_OnGamePaused_Event_1_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_RecordPlayer.BPC_RecordPlayer_C.PlayRecordLine
	 */
	struct UBPC_RecordPlayer_C_PlayRecordLine_Params
	{	};

	/**
	 * Function BPC_RecordPlayer.BPC_RecordPlayer_C.ExecuteUbergraph_BPC_RecordPlayer
	 */
	struct UBPC_RecordPlayer_C_ExecuteUbergraph_BPC_RecordPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_RecordPlayer.BPC_RecordPlayer_C.OnRecordFinished__DelegateSignature
	 */
	struct UBPC_RecordPlayer_C_OnRecordFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
