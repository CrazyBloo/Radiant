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
	 * BlueprintGeneratedClass BP_PaperNote.BP_PaperNote_C
	 * Size -> 0x00D0 (FullSize[0x06C8] - InheritedSize[0x05F8])
	 */
	class ABP_PaperNote_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    WC_Note;                                                 // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWBP_PaperNote_C*                                    widgetPaperNote;                                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            PaperTexture;                                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                      FontInfo;                                                // 0x0618(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FPaperNote                                          Note;                                                    // 0x0670(0x0058) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateMaterialDamage();
		void GetNote(bool* success, struct FPaperNote* Note);
		void UserConstructionScript();
		void OnReconfigure();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_PaperNote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
