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
	 * BlueprintGeneratedClass BP_SpectatorCapture.BP_SpectatorCapture_C
	 * Size -> 0x01F0 (FullSize[0x0470] - InheritedSize[0x0280])
	 */
	class ABP_SpectatorCapture_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureFPS;                                              // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmoothAlpha;                                             // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBPEuroLowPassFilter                                FilterLoc;                                               // 0x0298(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotX;                                              // 0x02F4(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTransform                                          cachedTransform;                                         // 0x0350(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotY;                                              // 0x0380(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FBPEuroLowPassFilter                                FilterRotZ;                                              // 0x03DC(0x005C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_57UC[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          lastTransform;                                           // 0x0440(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void RenderFrame();
		void ReceiveTick(float DeltaSeconds);
		void Reset();
		void ExecuteUbergraph_BP_SpectatorCapture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
