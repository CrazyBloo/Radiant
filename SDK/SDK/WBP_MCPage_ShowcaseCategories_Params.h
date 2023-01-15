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
	 * Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.ShowPage
	 */
	struct UWBP_MCPage_ShowcaseCategories_C_ShowPage_Params
	{	};

	/**
	 * Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.OnCategoryPressed
	 */
	struct UWBP_MCPage_ShowcaseCategories_C_OnCategoryPressed_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.InitializeByActor
	 */
	struct UWBP_MCPage_ShowcaseCategories_C_InitializeByActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.ExecuteUbergraph_WBP_MCPage_ShowcaseCategories
	 */
	struct UWBP_MCPage_ShowcaseCategories_C_ExecuteUbergraph_WBP_MCPage_ShowcaseCategories_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
