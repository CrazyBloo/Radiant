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
	 * BlueprintGeneratedClass BP_Scope_Elcan.BP_Scope_Elcan_C
	 * Size -> 0x0015 (FullSize[0x06A1] - InheritedSize[0x068C])
	 */
	class ABP_Scope_Elcan_C : public ABPA_Scope_C
	{
	public:
		unsigned char                                              UnknownData_44RK[0x4];                                   // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0690(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRLeverComponent*                                   VRLever;                                                 // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       LeverStatus;                                             // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime);
		void OnReconfigure();
		void UpdateFov();
		void ExecuteUbergraph_BP_Scope_Elcan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
