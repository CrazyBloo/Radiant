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
	 * BlueprintGeneratedClass BP_Consumable_Sweet.BP_Consumable_Sweet_C
	 * Size -> 0x000F (FullSize[0x0630] - InheritedSize[0x0621])
	 */
	class ABP_Consumable_Sweet_C : public ABPA_Consumable_C
	{
	public:
		unsigned char                                              UnknownData_0V3Y[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void ExecuteUbergraph_BP_Consumable_Sweet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
