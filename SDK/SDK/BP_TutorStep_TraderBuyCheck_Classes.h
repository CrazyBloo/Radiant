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
	 * BlueprintGeneratedClass BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C
	 * Size -> 0x0020 (FullSize[0x0458] - InheritedSize[0x0438])
	 */
	class ABP_TutorStep_TraderBuyCheck_C : public ABPA_TutorStep_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        Timer;                                                   // 0x0440(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_ShopShowcase_C*                                  showcaseRef;                                             // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ShopComputer_C*                                  ShopComputerRef;                                         // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetShopShowCaseRef(class ABP_ShopShowcase_C** Ref);
		void GetShopComputerRef(class ABP_ShopComputer_C** Ref);
		void DoExecute();
		void checkTimer();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_TutorStep_TraderBuyCheck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
