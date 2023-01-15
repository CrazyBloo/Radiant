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
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Switch Trigger Help
	 */
	struct UWBP_GuitarChordSet_C_Switch_Trigger_Help_Params
	{
	public:
		bool                                                       bIsRightHand;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SetHoldingHand
	 */
	struct UWBP_GuitarChordSet_C_SetHoldingHand_Params
	{
	public:
		bool                                                       bIsRight;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Set Guitar Mode
	 */
	struct UWBP_GuitarChordSet_C_Set_Guitar_Mode_Params
	{
	public:
		bool                                                       bIsPickInHand;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPlayMode;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q5R3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.AddChordToQueue
	 */
	struct UWBP_GuitarChordSet_C_AddChordToQueue_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayTime;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchSelectSongMenu
	 */
	struct UWBP_GuitarChordSet_C_SwitchSelectSongMenu_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.InitSlots
	 */
	struct UWBP_GuitarChordSet_C_InitSlots_Params
	{	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.UpdateTracksChordSet
	 */
	struct UWBP_GuitarChordSet_C_UpdateTracksChordSet_Params
	{	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchMinigame
	 */
	struct UWBP_GuitarChordSet_C_SwitchMinigame_Params
	{
	public:
		bool                                                       bIsOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ClearMinigame
	 */
	struct UWBP_GuitarChordSet_C_ClearMinigame_Params
	{	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetNextChordInQueue
	 */
	struct UWBP_GuitarChordSet_C_GetNextChordInQueue_Params
	{
	public:
		class UWBP_ChordIcon_C*                                    NextInQueue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetQueueTrack
	 */
	struct UWBP_GuitarChordSet_C_GetQueueTrack_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VUC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ChordQueue_C*                                   QueueWidget;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstSet;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.OutlineChord
	 */
	struct UWBP_GuitarChordSet_C_OutlineChord_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SetDotPosition
	 */
	struct UWBP_GuitarChordSet_C_SetDotPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Highlight Trigget Set
	 */
	struct UWBP_GuitarChordSet_C_Highlight_Trigget_Set_Params
	{
	public:
		bool                                                       bFirstSet;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.UpdateOutlinedChord
	 */
	struct UWBP_GuitarChordSet_C_UpdateOutlinedChord_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.IsOutlinedChordFromOtherSet
	 */
	struct UWBP_GuitarChordSet_C_IsOutlinedChordFromOtherSet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetChordAdjustment
	 */
	struct UWBP_GuitarChordSet_C_GetChordAdjustment_Params
	{
	public:
		bool                                                       bFirstSet;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_605F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ClearOutline
	 */
	struct UWBP_GuitarChordSet_C_ClearOutline_Params
	{	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.PreConstruct
	 */
	struct UWBP_GuitarChordSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchChordSet
	 */
	struct UWBP_GuitarChordSet_C_SwitchChordSet_Params
	{
	public:
		TArray<class FString>                                      ChordNames;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bFirstSet;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsRightHand;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.HighlightChord
	 */
	struct UWBP_GuitarChordSet_C_HighlightChord_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.PlaySusscessfulChord
	 */
	struct UWBP_GuitarChordSet_C_PlaySusscessfulChord_Params
	{
	public:
		bool                                                       bIsLate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ChordQueueTickPosition
	 */
	struct UWBP_GuitarChordSet_C_ChordQueueTickPosition_Params
	{
	public:
		float                                                      SongTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Construct
	 */
	struct UWBP_GuitarChordSet_C_Construct_Params
	{	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchPromode
	 */
	struct UWBP_GuitarChordSet_C_SwitchPromode_Params
	{
	public:
		bool                                                       bIsProMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ExecuteUbergraph_WBP_GuitarChordSet
	 */
	struct UWBP_GuitarChordSet_C_ExecuteUbergraph_WBP_GuitarChordSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1QOM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
