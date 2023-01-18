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
	 * BlueprintGeneratedClass GS_Smoothing.GS_Smoothing_C
	 * Size -> 0x0212 (FullSize[0x0252] - InheritedSize[0x0040])
	 */
	class UGS_Smoothing_C : public UVRGripScriptBaseBP
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_HZON[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          cachedTransform;                                         // 0x0050(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSmoothing;                                            // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9PHD[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          lastTransform;                                           // 0x0090(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpSpeed;                                             // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBPEuroLowPassFilter                                FilterLoc;                                               // 0x00C4(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      SmoothAlpha;                                             // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBPEuroLowPassFilter                                FilterRotX;                                              // 0x0124(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotY;                                              // 0x0180(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotZ;                                              // 0x01DC(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bIsOn;                                                   // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GCUX[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     SmoothingSoundLoop;                                      // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmoothIntensitySetting;                                  // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentSmoothAlpha;                                      // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsViveSmoothingOn;                                      // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRecoil;                                               // 0x0251(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetRecoilState(bool bIsRecoil);
		void GetIsOn(bool* bIsOn);
		void SwitchAimSmoothing(bool bSwitchOn);
		float GetSmoothingAlpha();
		bool GetWorldTransform(class UGripMotionControllerComponent* GrippingController, float DeltaTime, struct FTransform* WorldTransform, const struct FTransform& ParentTransform, struct FBPActorGripInformation* Grip, class AActor* Actor, class UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport);
		void Reset();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void ExecuteUbergraph_GS_Smoothing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
