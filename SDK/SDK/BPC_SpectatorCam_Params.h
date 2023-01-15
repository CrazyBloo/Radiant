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
	 * Function BPC_SpectatorCam.BPC_SpectatorCam_C.Init
	 */
	struct UBPC_SpectatorCam_C_Init_Params
	{	};

	/**
	 * Function BPC_SpectatorCam.BPC_SpectatorCam_C.ReceiveBeginPlay
	 */
	struct UBPC_SpectatorCam_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_SpectatorCam.BPC_SpectatorCam_C.ExecuteUbergraph_BPC_SpectatorCam
	 */
	struct UBPC_SpectatorCam_C_ExecuteUbergraph_BPC_SpectatorCam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QY5K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
