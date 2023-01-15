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
	 * BlueprintGeneratedClass BP_Scope_NF.BP_Scope_NF_C
	 * Size -> 0x0010 (FullSize[0x0688] - InheritedSize[0x0678])
	 */
	class ABP_Scope_NF_C : public ABPA_Scope_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0678(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRDialComponent*                                    VRDial;                                                  // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__BP_Scope_NF_VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature(float DialMilestoneAngle);
		void ExecuteUbergraph_BP_Scope_NF(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
