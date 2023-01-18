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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_SelfRepair.BPI_SelfRepair_C.GetCleanableVertices
	 */
	struct UBPI_SelfRepair_C_GetCleanableVertices_Params
	{
	public:
		int32_t                                                    NumCleanableVert;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SelfRepair.BPI_SelfRepair_C.GetCleanableMeshes
	 */
	struct UBPI_SelfRepair_C_GetCleanableMeshes_Params
	{
	public:
		TArray<class UStaticMeshComponent*>                        CleanableMeshes;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BPI_SelfRepair.BPI_SelfRepair_C.RequestUpdateMaterial
	 */
	struct UBPI_SelfRepair_C_RequestUpdateMaterial_Params
	{	};

	/**
	 * Function BPI_SelfRepair.BPI_SelfRepair_C.GetRepairDurabilityRange
	 */
	struct UBPI_SelfRepair_C_GetRepairDurabilityRange_Params
	{
	public:
		struct FGameplayTag                                        Requestor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FMinMaxFloat                                        DurabilityRange;                                         // 0x0008(0x0008)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPI_SelfRepair.BPI_SelfRepair_C.SetupCleaning
	 */
	struct UBPI_SelfRepair_C_SetupCleaning_Params
	{	};

	/**
	 * Function BPI_SelfRepair.BPI_SelfRepair_C.GetRefsForRepair
	 */
	struct UBPI_SelfRepair_C_GetRefsForRepair_Params
	{
	public:
		struct FGameplayTag                                        RepairRequestor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LVO1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPC_ItemDurability_C*                               DurabilityComponent;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              RT;                                                      // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
