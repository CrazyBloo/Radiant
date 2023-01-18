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
	 * WidgetBlueprintGeneratedClass WBP_CheckBox.WBP_CheckBox_C
	 * Size -> 0x03D0 (FullSize[0x0630] - InheritedSize[0x0260])
	 */
	class UWBP_CheckBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Icon;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           SB_Icon;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CheckBoxPressed;                                         // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       selected;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_NHSY[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CheckBoxText;                                            // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         TextColor;                                               // 0x02B8(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         TextHoveredColor;                                        // 0x02E0(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		class UTexture2D*                                          iconPlus;                                                // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         plusColor;                                               // 0x0310(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         plusColorHovered;                                        // 0x0338(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		class UTexture2D*                                          iconMinus;                                               // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         minusColor;                                              // 0x0368(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         minusColorHovered;                                       // 0x0390(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FButtonStyle                                        styleCache;                                              // 0x03B8(0x0278) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateText(bool Hovered);
		void UpdateIcon(bool Hovered);
		void ChangeText(const class FText& newText);
		void SetSelected(bool _selected);
		void SetEnabled(bool Enabled);
		void IsSelected(bool* selected);
		void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CheckBox(int32_t EntryPoint);
		void CheckBoxPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
