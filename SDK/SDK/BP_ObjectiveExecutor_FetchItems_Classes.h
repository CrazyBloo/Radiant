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
	 * BlueprintGeneratedClass BP_ObjectiveExecutor_FetchItems.BP_ObjectiveExecutor_FetchItems_C
	 * Size -> 0x006F (FullSize[0x0340] - InheritedSize[0x02D1])
	 */
	class ABP_ObjectiveExecutor_FetchItems_C : public ABPA_ObjectiveExecutor_C
	{
	public:
		unsigned char                                              UnknownData_3RKY[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionFetchItemsObjectiveData*                     objectiveData;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTagToTagsList                                      tmpDefaultItems;                                         // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTagToItemConfigsList                               tmpConfigItem;                                           // 0x0300(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    ItemIndex;                                               // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_76KW[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemUID;                                                 // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetPoints(TArray<struct FVector>* Points);
		void Execute();
		void ExecuteUbergraph_BP_ObjectiveExecutor_FetchItems(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
