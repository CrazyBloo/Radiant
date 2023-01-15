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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_Block_SettingsSystem.WBP_Block_SettingsSystem_C
	 * Size -> 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
	 */
	class UWBP_Block_SettingsSystem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CP_DLSS;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_FSR;                                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Quality;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Resolution;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Upscale;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_UpSharpen;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_DLSS;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_FSR;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_Resolution;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_ShowSubtitles;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_UpscaleMethod;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slider_C*                                       Slider_Brightness;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slider_C*                                       Slider_Sharpen;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slider_C*                                       Slider_VolumeAmbient;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slider_C*                                       Slider_VolumeMaster;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slider_C*                                       Slider_VolumeMusic;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slider_C*                                       Slider_VolumeSounds;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txt_UnsuportReason;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 WBP_Button_Graphics;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnButtonGraphics;                                        // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FText>                                        UpscaleVariants;                                         // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        FSRModes;                                                // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        DLSS;                                                    // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            Indexes;                                                 // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ConvertPercentages(TArray<int32_t>* In, TArray<class FText>* Out);
		void Setup();
		void Construct();
		void BndEvt__Selector_Resolution_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature();
		void BndEvt__Slider_Volume_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature();
		void BndEvt__Slider_VolumeMusic_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature();
		void BndEvt__Slider_VolumeSounds_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature();
		void BndEvt__Slider_VolumeAmbient_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature();
		void BndEvt__Slider_Brightness_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature();
		void BndEvt__Selector_DLSS_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature();
		void BndEvt__WBP_Button_Fixed_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature();
		void BndEvt__WBP_Block_SettingsSystem_Slider_DLSSSharpen_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature();
		void BndEvt__WBP_Block_SettingsSystem_Selector_Upscale_K2Node_ComponentBoundEvent_9_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_SettingsSystem_Selector_FSR_K2Node_ComponentBoundEvent_10_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_SettingsSystem_Selector_ShowSubtitles_K2Node_ComponentBoundEvent_11_OnChanged__DelegateSignature();
		void ExecuteUbergraph_WBP_Block_SettingsSystem(int32_t EntryPoint);
		void OnButtonGraphics__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
