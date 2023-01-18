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
	 * BlueprintGeneratedClass BP_Map_CurrentLevel.BP_Map_CurrentLevel_C
	 * Size -> 0x0018 (FullSize[0x03D0] - InheritedSize[0x03B8])
	 */
	class ABP_Map_CurrentLevel_C : public ABP_Map_Level_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Map1;                                                 // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              rtPencil;                                                // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetRT(class UTextureRenderTarget2D** RenderTarget);
		void GetMaterialInterface(bool* Empty, class UMaterialInterface** MaterialInterface);
		void UpdateMap();
		void UpdateLevelTag();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_Map_CurrentLevel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
