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
	 * BlueprintGeneratedClass BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C
	 * Size -> 0x008F (FullSize[0x0360] - InheritedSize[0x02D1])
	 */
	class ABP_ObjectiveExecutor_FindStash_C : public ABPA_ObjectiveExecutor_C
	{
	public:
		unsigned char                                              UnknownData_IVJ2[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionFindStashObjectiveData*                      objectiveData;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTagToItemConfigsList                               tmpStashConfig;                                          // 0x02E8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FString                                              tmpStashID;                                              // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTransform                                          tmpStashTransform;                                       // 0x0320(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UInventoryItem*                                      stashItem;                                               // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              oldStash;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPoints(TArray<struct FVector>* Points);
		void Execute();
		void ExecuteUbergraph_BP_ObjectiveExecutor_FindStash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
