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
	 * BlueprintGeneratedClass BP_MP5K.BP_MP5K_C
	 * Size -> 0x008F (FullSize[0x0F20] - InheritedSize[0x0E91])
	 */
	class ABP_MP5K_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_NWHO[0x7];                                   // 0x0E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_AtSl_Integrated_Pistol_Supressor_C*             BPC_AtSl_Integrated_Pistol_Supressor;                    // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_B_C*                                  BPC_AtSl_Rail_B;                                         // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_S_C*                                  BPC_AtSl_Rail_S;                                         // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRSliderComponent*                                  VRSlider_stock;                                          // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WPN_AKM_WPN_AKM_safetyswitch;                            // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        SliderTagParent;                                         // 0x0EC8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<struct FGameplayTag, float>                           SliderTagToValue;                                        // 0x0ED0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateVirtualStock();
		void OnReconfigure();
		void BndEvt__VRSlider_stock_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature(float SliderProgressPoint);
		void ExecuteUbergraph_BP_MP5K(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
