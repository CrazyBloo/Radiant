/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetCleanableVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumCleanableVert                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::GetCleanableVertices(int32_t* NumCleanableVert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetCleanableVertices");
		
		ABP_MagItem_C_GetCleanableVertices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumCleanableVert != nullptr)
			*NumCleanableVert = params.NumCleanableVert;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetCleanableMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                CleanableMeshes                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_MagItem_C::GetCleanableMeshes(TArray<class UStaticMeshComponent*>* CleanableMeshes)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetCleanableMeshes");
		
		ABP_MagItem_C_GetCleanableMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CleanableMeshes != nullptr)
			*CleanableMeshes = params.CleanableMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetRepairDurabilityRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMinMaxFloat                                DurabilityRange                                            (Parm, OutParm, NoDestructor)
	 */
	void ABP_MagItem_C::GetRepairDurabilityRange(const struct FGameplayTag& Requestor, struct FMinMaxFloat* DurabilityRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetRepairDurabilityRange");
		
		ABP_MagItem_C_GetRepairDurabilityRange_Params params {};
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
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetRefsForRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RepairRequestor                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBPC_ItemDurability_C*                       DurabilityComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RT                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::GetRefsForRepair(const struct FGameplayTag& RepairRequestor, bool* Valid, class UBPC_ItemDurability_C** DurabilityComponent, class UTextureRenderTarget2D** RT)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetRefsForRepair");
		
		ABP_MagItem_C_GetRefsForRepair_Params params {};
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
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.DetachMagItemFromWeaponItem
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::DetachMagItemFromWeaponItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.DetachMagItemFromWeaponItem");
		
		ABP_MagItem_C_DetachMagItemFromWeaponItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetMaxAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::GetMaxAmmoInMag(int32_t* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetMaxAmmoInMag");
		
		ABP_MagItem_C_GetMaxAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.Reconfigure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagItem_C::Reconfigure(class UInventoryItem* InventoryItem, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.Reconfigure");
		
		ABP_MagItem_C_Reconfigure_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoInMag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::GetAmmoInMag(int32_t* AmmoInMag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetAmmoInMag");
		
		ABP_MagItem_C_GetAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoInMag != nullptr)
			*AmmoInMag = params.AmmoInMag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.RefillBulletPoints
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::RefillBulletPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.RefillBulletPoints");
		
		ABP_MagItem_C_RefillBulletPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetEmptyPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Point                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::GetEmptyPoint(class USceneComponent** Point, int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetEmptyPoint");
		
		ABP_MagItem_C_GetEmptyPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.GetBulletMeshesCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BulletMeshesCount                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::GetBulletMeshesCount(int32_t* BulletMeshesCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.GetBulletMeshesCount");
		
		ABP_MagItem_C_GetBulletMeshesCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BulletMeshesCount != nullptr)
			*BulletMeshesCount = params.BulletMeshesCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.RemoveAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                AmmoTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::RemoveAmmo(struct FGameplayTag* AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.RemoveAmmo");
		
		ABP_MagItem_C_RemoveAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTag != nullptr)
			*AmmoTag = params.AmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.UpdateBullets
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::UpdateBullets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.UpdateBullets");
		
		ABP_MagItem_C_UpdateBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.UpdateItemWeight
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::UpdateItemWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.UpdateItemWeight");
		
		ABP_MagItem_C_UpdateItemWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.SpawnBullets
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::SpawnBullets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.SpawnBullets");
		
		ABP_MagItem_C_SpawnBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_MagItem_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.OnGrip");
		
		ABP_MagItem_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.FillMag
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::FillMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.FillMag");
		
		ABP_MagItem_C_FillMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.OnReconfigure");
		
		ABP_MagItem_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.OnItemCreated
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::OnItemCreated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.OnItemCreated");
		
		ABP_MagItem_C_OnItemCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.ReceiveEndPlay");
		
		ABP_MagItem_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.OnAmmoAdded
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::OnAmmoAdded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.OnAmmoAdded");
		
		ABP_MagItem_C_OnAmmoAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.OnAmmoRemoved");
		
		ABP_MagItem_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.FillContainerWithFirst
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::FillContainerWithFirst()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.FillContainerWithFirst");
		
		ABP_MagItem_C_FillContainerWithFirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.SetAttachedCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagItem_C::SetAttachedCollision(bool Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.SetAttachedCollision");
		
		ABP_MagItem_C_SetAttachedCollision_Params params {};
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.SetupCleaning
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::SetupCleaning()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.SetupCleaning");
		
		ABP_MagItem_C_SetupCleaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.RequestUpdateMaterial
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::RequestUpdateMaterial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.RequestUpdateMaterial");
		
		ABP_MagItem_C_RequestUpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MagItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.ReceiveBeginPlay");
		
		ABP_MagItem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagItem.BP_MagItem_C.ExecuteUbergraph_BP_MagItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagItem_C::ExecuteUbergraph_BP_MagItem(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagItem.BP_MagItem_C.ExecuteUbergraph_BP_MagItem");
		
		ABP_MagItem_C_ExecuteUbergraph_BP_MagItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MagItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MagItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MagItem.BP_MagItem_C");
		return ptr;
	}

}


