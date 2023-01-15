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
	 * Function WBP_holsterIndicator.WBP_holsterIndicator_C.Construct
	 */
	struct UWBP_holsterIndicator_C_Construct_Params
	{	};

	/**
	 * Function WBP_holsterIndicator.WBP_holsterIndicator_C.ShowSides
	 */
	struct UWBP_holsterIndicator_C_ShowSides_Params
	{
	public:
		bool                                                       showLeft;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       showRight;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_holsterIndicator.WBP_holsterIndicator_C.ExecuteUbergraph_WBP_holsterIndicator
	 */
	struct UWBP_holsterIndicator_C_ExecuteUbergraph_WBP_holsterIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
