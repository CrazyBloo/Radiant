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
	 * Function WBP_Block_Text.WBP_Block_Text_C.Construct
	 */
	struct UWBP_Block_Text_C_Construct_Params
	{	};

	/**
	 * Function WBP_Block_Text.WBP_Block_Text_C.PreConstruct
	 */
	struct UWBP_Block_Text_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Block_Text.WBP_Block_Text_C.UpdateText
	 */
	struct UWBP_Block_Text_C_UpdateText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Block_Text.WBP_Block_Text_C.ExecuteUbergraph_WBP_Block_Text
	 */
	struct UWBP_Block_Text_C_ExecuteUbergraph_WBP_Block_Text_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
