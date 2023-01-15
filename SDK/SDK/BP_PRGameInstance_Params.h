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
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.SetSharpness
	 */
	struct UBP_PRGameInstance_C_SetSharpness_Params
	{
	public:
		float                                                      Sharpen;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Mode;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.SetTAAU
	 */
	struct UBP_PRGameInstance_C_SetTAAU_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.SetFSRMode
	 */
	struct UBP_PRGameInstance_C_SetFSRMode_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.GetAnalyticsManager
	 */
	struct UBP_PRGameInstance_C_GetAnalyticsManager_Params
	{
	public:
		class UAnalyticsManager*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.SetDLSSMode
	 */
	struct UBP_PRGameInstance_C_SetDLSSMode_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.SetScreenPercent
	 */
	struct UBP_PRGameInstance_C_SetScreenPercent_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.FindGPUTier
	 */
	struct UBP_PRGameInstance_C_FindGPUTier_Params
	{
	public:
		bool                                                       Low;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       found;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L6B7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.SetQualityLevel
	 */
	struct UBP_PRGameInstance_C_SetQualityLevel_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.GetPCM
	 */
	struct UBP_PRGameInstance_C_GetPCM_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VI6P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerCameraManager*                                PCM;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.CheatAddItems
	 */
	struct UBP_PRGameInstance_C_CheatAddItems_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.OnPlayerDeath
	 */
	struct UBP_PRGameInstance_C_OnPlayerDeath_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.RestartAfterDeath
	 */
	struct UBP_PRGameInstance_C_RestartAfterDeath_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.OnShutdown
	 */
	struct UBP_PRGameInstance_C_OnShutdown_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.ReceiveOnGameStart
	 */
	struct UBP_PRGameInstance_C_ReceiveOnGameStart_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.StartNewGame
	 */
	struct UBP_PRGameInstance_C_StartNewGame_Params
	{
	public:
		int32_t                                                    ProfileNumber;                                           // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSkipTutorial;                                           // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIronman;                                                // 0x0005(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRadiusGameDifficulty                               GameDifficulty;                                          // 0x0006(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bFromMainMenu;                                           // 0x0016(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.ExitGameBP
	 */
	struct UBP_PRGameInstance_C_ExitGameBP_Params
	{
	public:
		bool                                                       bMenu;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSave;                                                   // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.OnBeforeLoad
	 */
	struct UBP_PRGameInstance_C_OnBeforeLoad_Params
	{	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.ExecuteUbergraph_BP_PRGameInstance
	 */
	struct UBP_PRGameInstance_C_ExecuteUbergraph_BP_PRGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameInstance.BP_PRGameInstance_C.GraphicsSettingsApply__DelegateSignature
	 */
	struct UBP_PRGameInstance_C_GraphicsSettingsApply__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
