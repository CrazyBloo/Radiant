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
	 * BlueprintGeneratedClass BP_Char_Fragment_Base.BP_Char_Fragment_Base_C
	 * Size -> 0x0027 (FullSize[0x0850] - InheritedSize[0x0829])
	 */
	class ABP_Char_Fragment_Base_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_X13O[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Footsteps_Loop__Direction_B3B388A04BE3B8DD96F93E8BDDE714D8; // 0x0840(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZZ8M[0x7];                                   // 0x0841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FootstepsLoop;                                           // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FootstepsLoop__FinishedFunc();
		void FootstepsLoop__UpdateFunc();
		void FootstepsLoop__NewTrack_0__EventFunc();
		void StartFootstepLoop();
		void StopFootstepLoop();
		void PlayFootstepSound();
		void ExecuteUbergraph_BP_Char_Fragment_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
