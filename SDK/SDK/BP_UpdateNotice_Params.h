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
	 * Function BP_UpdateNotice.BP_UpdateNotice_C.ReceiveBeginPlay
	 */
	struct ABP_UpdateNotice_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_UpdateNotice.BP_UpdateNotice_C.ButtonClickedEvent
	 */
	struct ABP_UpdateNotice_C_ButtonClickedEvent_Params
	{
	public:
		bool                                                       doNotShowAgain;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_UpdateNotice.BP_UpdateNotice_C.ExecuteUbergraph_BP_UpdateNotice
	 */
	struct ABP_UpdateNotice_C_ExecuteUbergraph_BP_UpdateNotice_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UpdateNotice.BP_UpdateNotice_C.OnContinue__DelegateSignature
	 */
	struct ABP_UpdateNotice_C_OnContinue__DelegateSignature_Params
	{
	public:
		bool                                                       doNotShowAgain;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
