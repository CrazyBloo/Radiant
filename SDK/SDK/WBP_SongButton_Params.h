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
	 * Function WBP_SongButton.WBP_SongButton_C.PreConstruct
	 */
	struct UWBP_SongButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SongButton.WBP_SongButton_C.BndEvt__WBP_SongButton_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SongButton_C_BndEvt__WBP_SongButton_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SongButton.WBP_SongButton_C.ExecuteUbergraph_WBP_SongButton
	 */
	struct UWBP_SongButton_C_ExecuteUbergraph_WBP_SongButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SongButton.WBP_SongButton_C.OnRButtonPressed__DelegateSignature
	 */
	struct UWBP_SongButton_C_OnRButtonPressed__DelegateSignature_Params
	{
	public:
		class UWBP_SongButton_C*                                   PressedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
