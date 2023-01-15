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
	 * BlueprintGeneratedClass BPI_SelfRepair.BPI_SelfRepair_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_SelfRepair_C : public UInterface
	{
	public:
		void GetCleanableVertices(int32_t* NumCleanableVert);
		void GetCleanableMeshes(TArray<class UStaticMeshComponent*>* CleanableMeshes);
		void RequestUpdateMaterial();
		void GetRepairDurabilityRange(const struct FGameplayTag& Requestor, struct FMinMaxFloat* DurabilityRange);
		void SetupCleaning();
		void GetRefsForRepair(const struct FGameplayTag& RepairRequestor, bool* Valid, class UBPC_ItemDurability_C** DurabilityComponent, class UTextureRenderTarget2D** RT);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
