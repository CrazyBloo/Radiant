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
	 * BlueprintGeneratedClass BPC_Stock.BPC_Stock_C
	 * Size -> 0x0012 (FullSize[0x06E2] - InheritedSize[0x06D0])
	 */
	class UBPC_Stock_C : public UVRLeverComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        FoldedStockTag;                                          // 0x06D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       isFolded;                                                // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBlocked;                                               // 0x06E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime);
		void Setup();
		void ReceiveLeverFinishedLerping(float LeverFinalAngle);
		void OnLeverAngleUpdated();
		void SetBlocked(bool isBlocked);
		void ReceiveTick(float DeltaSeconds);
		void CheckShouldClick();
		void ExecuteUbergraph_BPC_Stock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
