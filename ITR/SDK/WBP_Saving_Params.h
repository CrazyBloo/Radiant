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
	 * Function WBP_Saving.WBP_Saving_C.ShowSave
	 */
	struct UWBP_Saving_C_ShowSave_Params
	{	};

	/**
	 * Function WBP_Saving.WBP_Saving_C.ShowAutoSave
	 */
	struct UWBP_Saving_C_ShowAutoSave_Params
	{	};

	/**
	 * Function WBP_Saving.WBP_Saving_C.Construct
	 */
	struct UWBP_Saving_C_Construct_Params
	{	};

	/**
	 * Function WBP_Saving.WBP_Saving_C.HideIcons
	 */
	struct UWBP_Saving_C_HideIcons_Params
	{	};

	/**
	 * Function WBP_Saving.WBP_Saving_C.ExecuteUbergraph_WBP_Saving
	 */
	struct UWBP_Saving_C_ExecuteUbergraph_WBP_Saving_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G7TI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
