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
	 * BlueprintGeneratedClass BP_DVL.BP_DVL_C
	 * Size -> 0x0050 (FullSize[0x0D81] - InheritedSize[0x0D31])
	 */
	class ABP_DVL_C : public ABPA_Firearm_BoltAction_C
	{
	public:
		unsigned char                                              UnknownData_632C[0x7];                                   // 0x0D31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D38(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_safety;                                               // 0x0D40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_B_C*                                  BPC_AtSl_Rail_B;                                         // 0x0D48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Integrated_Rail_B_C*                       BPC_AtSl_Integrated_Rail_B;                              // 0x0D50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Stock_C*                                        BPC_Stock;                                               // 0x0D58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_DVL10_trigger;                                        // 0x0D60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MagEject;                                                // 0x0D68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MagPoint;                                                // 0x0D70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ExternalMAg_C*                                  BPC_ExternalMAg;                                         // 0x0D78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnWithMagInserted;                                    // 0x0D80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsCanLoadRound(bool* Return);
		void GetAttachmentsList(TArray<class FString>* Attachments);
		struct FTransform GetPoseShift(EPRHandPoseType poseType);
		void EjectMag();
		void DropEjectedMag();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void LoadRound();
		void UpdateAmmoInBolt();
		void BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature(EWeaponBoltState prevState);
		void OnReconfigure();
		void ExecuteUbergraph_BP_DVL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
