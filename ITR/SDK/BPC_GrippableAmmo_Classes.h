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
	 * BlueprintGeneratedClass BPC_GrippableAmmo.BPC_GrippableAmmo_C
	 * Size -> 0x0024 (FullSize[0x0614] - InheritedSize[0x05F0])
	 */
	class UBPC_GrippableAmmo_C : public UGrippableStaticMeshComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        LoadedAmmoTag;                                           // 0x05F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTaken;                                                 // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Index;                                                   // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateBullet(bool IsFired);
		void Initialize(const struct FGameplayTag& AmmoTag, int32_t Index, bool IsFired);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void ExecuteUbergraph_BPC_GrippableAmmo(int32_t EntryPoint);
		void OnTaken__DelegateSignature(int32_t AmmoIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
