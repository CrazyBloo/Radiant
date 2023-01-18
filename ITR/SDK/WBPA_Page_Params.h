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
	 * Function WBPA_Page.WBPA_Page_C.GetComputerRef
	 */
	struct UWBPA_Page_C_GetComputerRef_Params
	{
	public:
		class ABP_MissionComputer_C*                               ComputerRef;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBPA_Page.WBPA_Page_C.Construct
	 */
	struct UWBPA_Page_C_Construct_Params
	{	};

	/**
	 * Function WBPA_Page.WBPA_Page_C.ShowPage
	 */
	struct UWBPA_Page_C_ShowPage_Params
	{	};

	/**
	 * Function WBPA_Page.WBPA_Page_C.PageTick
	 */
	struct UWBPA_Page_C_PageTick_Params
	{	};

	/**
	 * Function WBPA_Page.WBPA_Page_C.HidePage
	 */
	struct UWBPA_Page_C_HidePage_Params
	{	};

	/**
	 * Function WBPA_Page.WBPA_Page_C.ExecuteUbergraph_WBPA_Page
	 */
	struct UWBPA_Page_C_ExecuteUbergraph_WBPA_Page_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
