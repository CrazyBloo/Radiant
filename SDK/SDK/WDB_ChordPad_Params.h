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
	 * Function WDB_ChordPad.WDB_ChordPad_C.SwitchSet
	 */
	struct UWDB_ChordPad_C_SwitchSet_Params
	{
	public:
		bool                                                       bIsFirstSet;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z0L3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WDB_ChordPad.WDB_ChordPad_C.SetOutlined
	 */
	struct UWDB_ChordPad_C_SetOutlined_Params
	{
	public:
		bool                                                       bIsOutlined;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsOtherSet;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WDB_ChordPad.WDB_ChordPad_C.SetHighlighted
	 */
	struct UWDB_ChordPad_C_SetHighlighted_Params
	{
	public:
		bool                                                       bIsHighlighted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WDB_ChordPad.WDB_ChordPad_C.SetChordName
	 */
	struct UWDB_ChordPad_C_SetChordName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WDB_ChordPad.WDB_ChordPad_C.ShowChordError
	 */
	struct UWDB_ChordPad_C_ShowChordError_Params
	{	};

	/**
	 * Function WDB_ChordPad.WDB_ChordPad_C.PreConstruct
	 */
	struct UWDB_ChordPad_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WDB_ChordPad.WDB_ChordPad_C.ExecuteUbergraph_WDB_ChordPad
	 */
	struct UWDB_ChordPad_C_ExecuteUbergraph_WDB_ChordPad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
