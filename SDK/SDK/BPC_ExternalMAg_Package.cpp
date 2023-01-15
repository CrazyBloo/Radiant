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
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.IsHolded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ExternalMAg_C::IsHolded(bool* State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.IsHolded");
		
		UBPC_ExternalMAg_C_IsHolded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.GetNextAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAmmo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayTag                                AmmoTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::GetNextAmmoInMag(bool* HasAmmo, struct FGameplayTag* AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.GetNextAmmoInMag");
		
		UBPC_ExternalMAg_C_GetNextAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAmmo != nullptr)
			*HasAmmo = params.HasAmmo;
		if (AmmoTag != nullptr)
			*AmmoTag = params.AmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.GetAmmoInMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::GetAmmoInMag(int32_t* NewParam)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.GetAmmoInMag");
		
		UBPC_ExternalMAg_C_GetAmmoInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.Get Mag in Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ActorReference                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::Get_Mag_in_Weapon(bool* Valid, class AActor** ActorReference)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.Get Mag in Weapon");
		
		UBPC_ExternalMAg_C_Get_Mag_in_Weapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (ActorReference != nullptr)
			*ActorReference = params.ActorReference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.DoAttachMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actr                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::DoAttachMag(class AActor* Actr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.DoAttachMag");
		
		UBPC_ExternalMAg_C_DoAttachMag_Params params {};
		params.Actr = Actr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.AttachMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::AttachMag(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.AttachMag");
		
		UBPC_ExternalMAg_C_AttachMag_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.EjectMag
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.EjectMag");
		
		UBPC_ExternalMAg_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.AnimMagInsert
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::AnimMagInsert()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.AnimMagInsert");
		
		UBPC_ExternalMAg_C_AnimMagInsert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.DropEjectedMag");
		
		UBPC_ExternalMAg_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.DropMag
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::DropMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.DropMag");
		
		UBPC_ExternalMAg_C_DropMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.MagEjectDelayTimer
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::MagEjectDelayTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.MagEjectDelayTimer");
		
		UBPC_ExternalMAg_C_MagEjectDelayTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.blockMainGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ExternalMAg_C::blockMainGrip(bool bLock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.blockMainGrip");
		
		UBPC_ExternalMAg_C_blockMainGrip_Params params {};
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.Overlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPC_ExternalMAg_C::Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.Overlap");
		
		UBPC_ExternalMAg_C_Overlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.EndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.EndOverlap");
		
		UBPC_ExternalMAg_C_EndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.InitComponent
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::InitComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.InitComponent");
		
		UBPC_ExternalMAg_C_InitComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.DecreaseMagDurability
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::DecreaseMagDurability()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.DecreaseMagDurability");
		
		UBPC_ExternalMAg_C_DecreaseMagDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.RunMagEjectDelay
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::RunMagEjectDelay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.RunMagEjectDelay");
		
		UBPC_ExternalMAg_C_RunMagEjectDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.MagQuickReleaseTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::MagQuickReleaseTest(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.MagQuickReleaseTest");
		
		UBPC_ExternalMAg_C_MagQuickReleaseTest_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.QuickDetach
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::QuickDetach()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.QuickDetach");
		
		UBPC_ExternalMAg_C_QuickDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.MoveMag
	 * 		Flags  -> ()
	 */
	void UBPC_ExternalMAg_C::MoveMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.MoveMag");
		
		UBPC_ExternalMAg_C_MoveMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ExternalMAg.BPC_ExternalMAg_C.ExecuteUbergraph_BPC_ExternalMAg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ExternalMAg_C::ExecuteUbergraph_BPC_ExternalMAg(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ExternalMAg.BPC_ExternalMAg_C.ExecuteUbergraph_BPC_ExternalMAg");
		
		UBPC_ExternalMAg_C_ExecuteUbergraph_BPC_ExternalMAg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ExternalMAg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ExternalMAg_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ExternalMAg.BPC_ExternalMAg_C");
		return ptr;
	}

}


