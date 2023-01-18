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
	 * BlueprintGeneratedClass BP_Pencil.BP_Pencil_C
	 * Size -> 0x008C (FullSize[0x0684] - InheritedSize[0x05F8])
	 */
	class ABP_Pencil_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Sphere;                                                  // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       pen;                                                     // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BI6F[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TestCache;                                               // 0x060C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PrevPos;                                                 // 0x061C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InterFrameDistance;                                      // 0x0628(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrawStepSize;                                            // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DrawComplete;                                            // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1DJZ[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     UVhits;                                                  // 0x0640(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTextureRenderTarget2D*                              RT;                                                      // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDrawToRenderTargetContext                          Canvas;                                                  // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FLinearColor                                        DrawColor;                                               // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           DrawSize;                                                // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxIterationsPerTick;                                    // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EPRHandPoseType GetDefaultPoseType();
		void ReceiveTick(float DeltaSeconds);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void ThumbLeft();
		void OnUsed();
		void OnEndUsed();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Pencil(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
