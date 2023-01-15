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
	 * BlueprintGeneratedClass GS_Smoothing.GS_Smoothing_C
	 * Size -> 0x01F8 (FullSize[0x0238] - InheritedSize[0x0040])
	 */
	class UGS_Smoothing_C : public UVRGripScriptBaseBP
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_QV0K[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          cachedTransform;                                         // 0x0050(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSmoothing;                                            // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U7P7[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          lastTransform;                                           // 0x0090(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpSpeed;                                             // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBPEuroLowPassFilter                                FilterLoc;                                               // 0x00C4(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      SmoothAlpha;                                             // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBPEuroLowPassFilter                                FilterRotX;                                              // 0x0124(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotY;                                              // 0x0180(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotZ;                                              // 0x01DC(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
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
