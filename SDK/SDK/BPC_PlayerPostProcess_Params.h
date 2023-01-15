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
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SwitchPPElement
	 */
	struct UBPC_PlayerPostProcess_C_SwitchPPElement_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q4PS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetVignetteEnable
	 */
	struct UBPC_PlayerPostProcess_C_SetVignetteEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetNVEnable
	 */
	struct UBPC_PlayerPostProcess_C_SetNVEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetCaptureGuideToggle
	 */
	struct UBPC_PlayerPostProcess_C_SetCaptureGuideToggle_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.VignetteChange
	 */
	struct UBPC_PlayerPostProcess_C_VignetteChange_Params
	{
	public:
		bool                                                       bIsOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.OnLevelStarted
	 */
	struct UBPC_PlayerPostProcess_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.ExecuteUbergraph_BPC_PlayerPostProcess
	 */
	struct UBPC_PlayerPostProcess_C_ExecuteUbergraph_BPC_PlayerPostProcess_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
