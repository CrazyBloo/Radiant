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
	 * BlueprintGeneratedClass BPA_Armor_Head.BPA_Armor_Head_C
	 * Size -> 0x0014 (FullSize[0x061C] - InheritedSize[0x0608])
	 */
	class ABPA_Armor_Head_C : public ABPA_Armor_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0608(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInterface*                                  PostProcessMaterial;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HideOnAttach;                                            // 0x0618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AddGasMaskSound;                                         // 0x0619(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloseFaceTrigger;                                        // 0x061A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWearing;                                                // 0x061B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BlockFaceTrigger(bool* );
		void RemovePostProcess();
		void AddPostProcess();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnStart();
		void OnAddedToHolster(class UHolsterComponent* Holster);
		void OnRemovedFromHolster(class UHolsterComponent* Holster);
		void ExecuteUbergraph_BPA_Armor_Head(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
