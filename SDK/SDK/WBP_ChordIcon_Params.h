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
	 * Function WBP_ChordIcon.WBP_ChordIcon_C.GetChordInfo
	 */
	struct UWBP_ChordIcon_C_GetChordInfo_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayTime;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChordIcon.WBP_ChordIcon_C.PreConstruct
	 */
	struct UWBP_ChordIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ChordIcon.WBP_ChordIcon_C.AutoDestroy
	 */
	struct UWBP_ChordIcon_C_AutoDestroy_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChordIcon.WBP_ChordIcon_C.DoDestroy
	 */
	struct UWBP_ChordIcon_C_DoDestroy_Params
	{
	public:
		bool                                                       bIsSuccess;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ChordIcon.WBP_ChordIcon_C.ExecuteUbergraph_WBP_ChordIcon
	 */
	struct UWBP_ChordIcon_C_ExecuteUbergraph_WBP_ChordIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
