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
	 * BlueprintGeneratedClass BP_Scope_Elcan.BP_Scope_Elcan_C
	 * Size -> 0x0011 (FullSize[0x0689] - InheritedSize[0x0678])
	 */
	class ABP_Scope_Elcan_C : public ABPA_Scope_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0678(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRLeverComponent*                                   VRLever;                                                 // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Lever_Status;                                            // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

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
