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
	 * Function WBP_Counter.WBP_Counter_C.Destruct
	 */
	struct UWBP_Counter_C_Destruct_Params
	{	};

	/**
	 * Function WBP_Counter.WBP_Counter_C.Clear
	 */
	struct UWBP_Counter_C_Clear_Params
	{	};

	/**
	 * Function WBP_Counter.WBP_Counter_C.UpdateType
	 */
	struct UWBP_Counter_C_UpdateType_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Counter.WBP_Counter_C.UpdateCounter
	 */
	struct UWBP_Counter_C_UpdateCounter_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Counter.WBP_Counter_C.Construct
	 */
	struct UWBP_Counter_C_Construct_Params
	{	};

	/**
	 * Function WBP_Counter.WBP_Counter_C.ExecuteUbergraph_WBP_Counter
	 */
	struct UWBP_Counter_C_ExecuteUbergraph_WBP_Counter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
