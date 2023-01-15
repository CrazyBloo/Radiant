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
	 * Function BP_SpectatorCapture.BP_SpectatorCapture_C.UserConstructionScript
	 */
	struct ABP_SpectatorCapture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SpectatorCapture.BP_SpectatorCapture_C.ReceiveBeginPlay
	 */
	struct ABP_SpectatorCapture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpectatorCapture.BP_SpectatorCapture_C.RenderFrame
	 */
	struct ABP_SpectatorCapture_C_RenderFrame_Params
	{	};

	/**
	 * Function BP_SpectatorCapture.BP_SpectatorCapture_C.ReceiveTick
	 */
	struct ABP_SpectatorCapture_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorCapture.BP_SpectatorCapture_C.Reset
	 */
	struct ABP_SpectatorCapture_C_Reset_Params
	{	};

	/**
	 * Function BP_SpectatorCapture.BP_SpectatorCapture_C.ExecuteUbergraph_BP_SpectatorCapture
	 */
	struct ABP_SpectatorCapture_C_ExecuteUbergraph_BP_SpectatorCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EQBG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
