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
	 * BlueprintGeneratedClass BP_Pointer.BP_Pointer_C
	 * Size -> 0x0018 (FullSize[0x0658] - InheritedSize[0x0640])
	 */
	class ABP_Pointer_C : public ABPA_Attachment_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Beam;                                                    // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void IsOn(bool* On);
		void Off(bool On);
		void OnReconfigure();
		void OnUsed();
		void Hide(bool Show);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_Pointer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
