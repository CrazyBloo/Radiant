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
	 * WidgetBlueprintGeneratedClass WBP_Button_Right.WBP_Button_Right_C
	 * Size -> 0x0281 (FullSize[0x04E1] - InheritedSize[0x0260])
	 */
	class UWBP_Button_Right_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_BG_Left;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Icon;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           SB_Icon;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           SB_Text;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                ButtonText;                                              // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         Icon;                                                    // 0x02C0(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         iconHovered;                                             // 0x0348(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         iconSelected;                                            // 0x03D0(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         iconSelectedHovered;                                     // 0x0458(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       selected;                                                // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateImages();
		void UpdateText();
		void UpdateStyles();
		void UpdateIcon();
		void GetCurrentColor(struct FLinearColor* Color);
		void ChangeText(const class FText& newText);
		void SetSelected(bool _selected);
		void SetEnabled(bool Enabled);
		void IsSelected(bool* selected);
		void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_Button_Right(int32_t EntryPoint);
		void OnPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
