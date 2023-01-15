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
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.IsInstalled
	 */
	struct UWBP_Element_Upgrade_C_IsInstalled_Params
	{
	public:
		bool                                                       Installed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.GetLinked
	 */
	struct UWBP_Element_Upgrade_C_GetLinked_Params
	{
	public:
		struct FUpgradeInfo                                        Upgrade_Info;                                            // 0x0000(0x0230)  (Parm, OutParm)
		bool                                                       selected;                                                // 0x0230(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.Link
	 */
	struct UWBP_Element_Upgrade_C_Link_Params
	{
	public:
		struct FUpgradeInfo                                        UpgradeInfo;                                             // 0x0000(0x0230)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Enabled;                                                 // 0x0230(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Installed;                                               // 0x0231(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.BndEvt__WBP_Element_Upgrade_Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Element_Upgrade_C_BndEvt__WBP_Element_Upgrade_Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.Empty
	 */
	struct UWBP_Element_Upgrade_C_Empty_Params
	{	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.PlayProgressAnimation
	 */
	struct UWBP_Element_Upgrade_C_PlayProgressAnimation_Params
	{	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.SetEnabled
	 */
	struct UWBP_Element_Upgrade_C_SetEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.SetSelected
	 */
	struct UWBP_Element_Upgrade_C_SetSelected_Params
	{
	public:
		bool                                                       select;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.ExecuteUbergraph_WBP_Element_Upgrade
	 */
	struct UWBP_Element_Upgrade_C_ExecuteUbergraph_WBP_Element_Upgrade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SQWA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.OnClicked__DelegateSignature
	 */
	struct UWBP_Element_Upgrade_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UWBP_Element_Upgrade_C*                              Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
