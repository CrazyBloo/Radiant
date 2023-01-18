/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SelfRepair.BPI_SelfRepair_C.GetCleanableVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumCleanableVert                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SelfRepair_C::GetCleanableVertices(int32_t* NumCleanableVert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SelfRepair.BPI_SelfRepair_C.GetCleanableVertices");
		
		UBPI_SelfRepair_C_GetCleanableVertices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumCleanableVert != nullptr)
			*NumCleanableVert = params.NumCleanableVert;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SelfRepair.BPI_SelfRepair_C.GetCleanableMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                CleanableMeshes                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPI_SelfRepair_C::GetCleanableMeshes(TArray<class UStaticMeshComponent*>* CleanableMeshes)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SelfRepair.BPI_SelfRepair_C.GetCleanableMeshes");
		
		UBPI_SelfRepair_C_GetCleanableMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CleanableMeshes != nullptr)
			*CleanableMeshes = params.CleanableMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SelfRepair.BPI_SelfRepair_C.RequestUpdateMaterial
	 * 		Flags  -> ()
	 */
	void UBPI_SelfRepair_C::RequestUpdateMaterial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SelfRepair.BPI_SelfRepair_C.RequestUpdateMaterial");
		
		UBPI_SelfRepair_C_RequestUpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SelfRepair.BPI_SelfRepair_C.GetRepairDurabilityRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMinMaxFloat                                DurabilityRange                                            (Parm, OutParm, NoDestructor)
	 */
	void UBPI_SelfRepair_C::GetRepairDurabilityRange(const struct FGameplayTag& Requestor, struct FMinMaxFloat* DurabilityRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SelfRepair.BPI_SelfRepair_C.GetRepairDurabilityRange");
		
		UBPI_SelfRepair_C_GetRepairDurabilityRange_Params params {};
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DurabilityRange != nullptr)
			*DurabilityRange = params.DurabilityRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SelfRepair.BPI_SelfRepair_C.SetupCleaning
	 * 		Flags  -> ()
	 */
	void UBPI_SelfRepair_C::SetupCleaning()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SelfRepair.BPI_SelfRepair_C.SetupCleaning");
		
		UBPI_SelfRepair_C_SetupCleaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SelfRepair.BPI_SelfRepair_C.GetRefsForRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RepairRequestor                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBPC_ItemDurability_C*                       DurabilityComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RT                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SelfRepair_C::GetRefsForRepair(const struct FGameplayTag& RepairRequestor, bool* Valid, class UBPC_ItemDurability_C** DurabilityComponent, class UTextureRenderTarget2D** RT)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SelfRepair.BPI_SelfRepair_C.GetRefsForRepair");
		
		UBPI_SelfRepair_C_GetRefsForRepair_Params params {};
		params.RepairRequestor = RepairRequestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (DurabilityComponent != nullptr)
			*DurabilityComponent = params.DurabilityComponent;
		if (RT != nullptr)
			*RT = params.RT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SelfRepair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SelfRepair_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SelfRepair.BPI_SelfRepair_C");
		return ptr;
	}

}


