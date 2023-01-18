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
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.updateTransform
	 */
	struct ABP_SubtitlesController_C_updateTransform_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.HideSubtitles
	 */
	struct ABP_SubtitlesController_C_HideSubtitles_Params
	{	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.ReceiveTick
	 */
	struct ABP_SubtitlesController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSubtitles
	 */
	struct ABP_SubtitlesController_C_ShowSubtitles_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Duration;                                                // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPRSubtitleType                                            Type;                                                    // 0x001C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSwitchable;                                             // 0x001D(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSubtitlesString
	 */
	struct ABP_SubtitlesController_C_ShowSubtitlesString_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPRSubtitleType                                            Type;                                                    // 0x0014(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSwitchable;                                             // 0x0015(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.SetDressingMode
	 */
	struct ABP_SubtitlesController_C_SetDressingMode_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.OnGameStarted
	 */
	struct ABP_SubtitlesController_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSaveIcon
	 */
	struct ABP_SubtitlesController_C_ShowSaveIcon_Params
	{
	public:
		bool                                                       bAutoSave;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SubtitlesController.BP_SubtitlesController_C.ExecuteUbergraph_BP_SubtitlesController
	 */
	struct ABP_SubtitlesController_C_ExecuteUbergraph_BP_SubtitlesController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S4JC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
