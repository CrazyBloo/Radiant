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
	 * BlueprintGeneratedClass BTT_Bot_MoveTo.BTT_Bot_MoveTo_C
	 * Size -> 0x0034 (FullSize[0x00DC] - InheritedSize[0x00A8])
	 */
	class UBTT_Bot_MoveTo_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              LocationVector;                                          // 0x00B0(0x0028) Edit, BlueprintVisible
		float                                                      AcceptanceRadius;                                        // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6(EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6();
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTT_Bot_MoveTo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
