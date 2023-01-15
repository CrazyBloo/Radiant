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
	 * Function WBP_ChordQueue.WBP_ChordQueue_C.AddNewChord
	 */
	struct UWBP_ChordQueue_C_AddNewChord_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayTime;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_ChordIcon_C*                                    AddedChord;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChordQueue.WBP_ChordQueue_C.PreConstruct
	 */
	struct UWBP_ChordQueue_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ChordQueue.WBP_ChordQueue_C.ClearTrack
	 */
	struct UWBP_ChordQueue_C_ClearTrack_Params
	{	};

	/**
	 * Function WBP_ChordQueue.WBP_ChordQueue_C.SwitchSet
	 */
	struct UWBP_ChordQueue_C_SwitchSet_Params
	{
	public:
		bool                                                       bIsFirstSet;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ChordQueue.WBP_ChordQueue_C.ExecuteUbergraph_WBP_ChordQueue
	 */
	struct UWBP_ChordQueue_C_ExecuteUbergraph_WBP_ChordQueue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
