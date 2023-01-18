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
	 * BlueprintGeneratedClass BP_ObjectiveExecutor_Info.BP_ObjectiveExecutor_Info_C
	 * Size -> 0x000F (FullSize[0x02E0] - InheritedSize[0x02D1])
	 */
	class ABP_ObjectiveExecutor_Info_C : public ABPA_ObjectiveExecutor_C
	{
	public:
		unsigned char                                              UnknownData_WN9R[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Execute();
		void ExecuteUbergraph_BP_ObjectiveExecutor_Info(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
