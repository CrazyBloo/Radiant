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
	 * BlueprintGeneratedClass BP_Scope_NF.BP_Scope_NF_C
	 * Size -> 0x0014 (FullSize[0x06A0] - InheritedSize[0x068C])
	 */
	class ABP_Scope_NF_C : public ABPA_Scope_C
	{
	public:
		unsigned char                                              UnknownData_XMVK[0x4];                                   // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0690(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRDialComponent*                                    VRDial;                                                  // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__BP_Scope_NF_VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature(float DialMilestoneAngle);
		void ExecuteUbergraph_BP_Scope_NF(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
