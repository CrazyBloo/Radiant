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
	 * BlueprintGeneratedClass BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C
	 * Size -> 0x0017 (FullSize[0x02E8] - InheritedSize[0x02D1])
	 */
	class ABP_ObjectiveExecutor_KillNPC_C : public ABPA_ObjectiveExecutor_C
	{
	public:
		unsigned char                                              UnknownData_3S86[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionKillNPCObjectiveData*                        objectiveData;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Execute();
		void OnSpawnerCleared(class AMonsterSpawner* Spawner);
		void ExecuteUbergraph_BP_ObjectiveExecutor_KillNPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
