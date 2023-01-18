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
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoContainerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoContainerData                          Data                                                       (Parm, OutParm)
	 */
	void UBPC_InternalMag_C::GetAmmoContainerData(struct FAmmoContainerData* Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoContainerData");
		
		UBPC_InternalMag_C_GetAmmoContainerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoContainerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPRAmmoContainerInfo                        Info                                                       (Parm, OutParm)
	 */
	void UBPC_InternalMag_C::GetAmmoContainerInfo(struct FPRAmmoContainerInfo* Info)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoContainerInfo");
		
		UBPC_InternalMag_C_GetAmmoContainerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.IsLoadingLocked
	 * 		Flags  -> ()
	 */
	bool UBPC_InternalMag_C::IsLoadingLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.IsLoadingLocked");
		
		UBPC_InternalMag_C_IsLoadingLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.CheckLoadingConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              ammoItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanLoad                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_InternalMag_C::CheckLoadingConditions(class UInventoryItem* ammoItem, bool* CanLoad)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.CheckLoadingConditions");
		
		UBPC_InternalMag_C_CheckLoadingConditions_Params params {};
		params.ammoItem = ammoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanLoad != nullptr)
			*CanLoad = params.CanLoad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.DoSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTypeID                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UStaticMeshComponent* UBPC_InternalMag_C::DoSpawn(const struct FGameplayTag& ItemTypeID, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.DoSpawn");
		
		UBPC_InternalMag_C_DoSpawn_Params params {};
		params.ItemTypeID = ItemTypeID;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetNextAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAmmo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayTag                                Output                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::GetNextAmmoInMag(bool* HasAmmo, struct FGameplayTag* Output)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetNextAmmoInMag");
		
		UBPC_InternalMag_C_GetNextAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAmmo != nullptr)
			*HasAmmo = params.HasAmmo;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.DelayLoading
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::DelayLoading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.DelayLoading");
		
		UBPC_InternalMag_C_DelayLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.LoadAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AmmoActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_InternalMag_C::LoadAmmo(class AActor* AmmoActor, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.LoadAmmo");
		
		UBPC_InternalMag_C_LoadAmmo_Params params {};
		params.AmmoActor = AmmoActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetMaxAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::GetMaxAmmoInMag(int32_t* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetMaxAmmoInMag");
		
		UBPC_InternalMag_C_GetMaxAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.RefillBulletPoints
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::RefillBulletPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.RefillBulletPoints");
		
		UBPC_InternalMag_C_RefillBulletPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.RemoveAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NoUpdate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayTag                                AmmoTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::RemoveAmmo(bool NoUpdate, struct FGameplayTag* AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.RemoveAmmo");
		
		UBPC_InternalMag_C_RemoveAmmo_Params params {};
		params.NoUpdate = NoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTag != nullptr)
			*AmmoTag = params.AmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.UpdateItemWeight
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::UpdateItemWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.UpdateItemWeight");
		
		UBPC_InternalMag_C_UpdateItemWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.UpdateBullets
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::UpdateBullets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.UpdateBullets");
		
		UBPC_InternalMag_C_UpdateBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetEmptyPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Point                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::GetEmptyPoint(class USceneComponent** Point, int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetEmptyPoint");
		
		UBPC_InternalMag_C_GetEmptyPoint_Params params {};
		
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
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoInMag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::GetAmmoInMag(int32_t* AmmoInMag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoInMag");
		
		UBPC_InternalMag_C_GetAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoInMag != nullptr)
			*AmmoInMag = params.AmmoInMag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.GetBulletMeshesCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::GetBulletMeshesCount(int32_t* Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.GetBulletMeshesCount");
		
		UBPC_InternalMag_C_GetBulletMeshesCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.SpawnBullets
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::SpawnBullets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.SpawnBullets");
		
		UBPC_InternalMag_C_SpawnBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.ReceiveTick");
		
		UBPC_InternalMag_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.FillMag
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::FillMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.FillMag");
		
		UBPC_InternalMag_C_FillMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.OnAmmoAdded
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::OnAmmoAdded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.OnAmmoAdded");
		
		UBPC_InternalMag_C_OnAmmoAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.OnAmmoRemoved");
		
		UBPC_InternalMag_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.SetLoadingLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_InternalMag_C::SetLoadingLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.SetLoadingLock");
		
		UBPC_InternalMag_C_SetLoadingLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.ProcessTriggerOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::ProcessTriggerOverlap(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.ProcessTriggerOverlap");
		
		UBPC_InternalMag_C_ProcessTriggerOverlap_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.ExecuteUbergraph_BPC_InternalMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::ExecuteUbergraph_BPC_InternalMag(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.ExecuteUbergraph_BPC_InternalMag");
		
		UBPC_InternalMag_C_ExecuteUbergraph_BPC_InternalMag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.ReqestEjectComponent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_InternalMag_C::ReqestEjectComponent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.ReqestEjectComponent__DelegateSignature");
		
		UBPC_InternalMag_C_ReqestEjectComponent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InternalMag.BPC_InternalMag_C.RequestDestroyComponent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InternalMag_C::RequestDestroyComponent__DelegateSignature(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_InternalMag.BPC_InternalMag_C.RequestDestroyComponent__DelegateSignature");
		
		UBPC_InternalMag_C_RequestDestroyComponent__DelegateSignature_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_InternalMag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_InternalMag_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_InternalMag.BPC_InternalMag_C");
		return ptr;
	}

}


