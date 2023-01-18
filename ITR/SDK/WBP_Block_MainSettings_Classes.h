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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_Block_MainSettings.WBP_Block_MainSettings_C
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UWBP_Block_MainSettings_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Block_SettingsControls_C*                       Block_Controls;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_SettingsGameplay_C*                       Block_Gameplay;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_SettingsSystem_C*                         Block_System;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Button_Controls;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Button_Gameplay;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Button_System;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnGraphicsConfig;                                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OpenControls();
		void OpenSystem();
		void OpenGameplay();
		void Construct();
		void BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_15_ButtonPressed__DelegateSignature();
		void BndEvt__Button_System_K2Node_ComponentBoundEvent_16_ButtonPressed__DelegateSignature();
		void BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
		void BndEvt__Block_System_K2Node_ComponentBoundEvent_1_OnButtonGraphics__DelegateSignature();
		void ExecuteUbergraph_WBP_Block_MainSettings(int32_t EntryPoint);
		void OnGraphicsConfig__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
