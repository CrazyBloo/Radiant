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
	 * AnimBlueprintGeneratedClass BTR70_Anim_BP.BTR70_Anim_BP_C
	 * Size -> 0x063C (FullSize[0x109C] - InheritedSize[0x0A60])
	 */
	class UBTR70_Anim_BP_C : public UVehicleAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0A68(0x0030)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose;                               // 0x0A98(0x0010)
		struct FAnimNode_WheelHandler                              AnimGraphNode_WheelHandler;                              // 0x0AA8(0x00E0)
		struct FAnimNode_CopyBoneDelta                             AnimGraphNode_CopyBoneDelta_4;                           // 0x0B88(0x00F8)
		struct FAnimNode_CopyBoneDelta                             AnimGraphNode_CopyBoneDelta_3;                           // 0x0C80(0x00F8)
		struct FAnimNode_CopyBoneDelta                             AnimGraphNode_CopyBoneDelta_2;                           // 0x0D78(0x00F8)
		struct FAnimNode_CopyBoneDelta                             AnimGraphNode_CopyBoneDelta;                             // 0x0E70(0x00F8)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0F68(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0F88(0x0108)
		struct FRotator                                            TurretRot;                                               // 0x1090(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BTR70_Anim_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
