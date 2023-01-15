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
	 * BlueprintGeneratedClass BPC_TutHelper.BPC_TutHelper_C
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class UBPC_TutHelper_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_V9HM[0x8];                                   // 0x0228(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ItemsSold();
		void ItemsBought();
		void SetControllActor(class ABPA_TutorStep_C* Ref);
		void LockFunctions(bool lock);
		void ItemPutToBin();
		void ItemREmovedFromBin();
		void TargetActorHeldInHand(bool IsHeld, bool HeldInLeft);
		void StartHelper();
		void StopHelper();
		void ExecuteUbergraph_BPC_TutHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
