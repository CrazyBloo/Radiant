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
	 * WidgetBlueprintGeneratedClass WBP_HMap_TabText.WBP_HMap_TabText_C
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UWBP_HMap_TabText_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Text;                                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetText(const class FText& InText);
		void SetTextColor(const struct FLinearColor& Color);
		void ExecuteUbergraph_WBP_HMap_TabText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
