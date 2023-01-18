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
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.FX_UpdateMaterialDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::FX_UpdateMaterialDamage(float DurabilityPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.FX_UpdateMaterialDamage");
		
		ABP_Cigarette_C_FX_UpdateMaterialDamage_Params params {};
		params.DurabilityPercent = DurabilityPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.HideExtinguishedAshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Cigarette_C::HideExtinguishedAshes(TArray<class UStaticMeshComponent*>* Array)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.HideExtinguishedAshes");
		
		ABP_Cigarette_C_HideExtinguishedAshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.FX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::FX(float DurabilityPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.FX");
		
		ABP_Cigarette_C_FX_Params params {};
		params.DurabilityPercent = DurabilityPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.UpdateMaterialDamage");
		
		ABP_Cigarette_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.CigLight__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::CigLight__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.CigLight__FinishedFunc");
		
		ABP_Cigarette_C_CigLight__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.CigLight__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::CigLight__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.CigLight__UpdateFunc");
		
		ABP_Cigarette_C_CigLight__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.ReceiveAnyDamage");
		
		ABP_Cigarette_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.CigLit
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::CigLit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.CigLit");
		
		ABP_Cigarette_C_CigLit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.ReceiveBeginPlay");
		
		ABP_Cigarette_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.LitTimer
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::LitTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.LitTimer");
		
		ABP_Cigarette_C_LitTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.CigExtinguish
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::CigExtinguish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.CigExtinguish");
		
		ABP_Cigarette_C_CigExtinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.CigInhale
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::CigInhale()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.CigInhale");
		
		ABP_Cigarette_C_CigInhale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.cigInhaleFX
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::cigInhaleFX()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.cigInhaleFX");
		
		ABP_Cigarette_C_cigInhaleFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.ApplyCigEfectToPlayer
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::ApplyCigEfectToPlayer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.ApplyCigEfectToPlayer");
		
		ABP_Cigarette_C_ApplyCigEfectToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.OnEndUsed");
		
		ABP_Cigarette_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Cigarette_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.OnGrip");
		
		ABP_Cigarette_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.OnRootHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::OnRootHit(const struct FVector& Impulse)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.OnRootHit");
		
		ABP_Cigarette_C_OnRootHit_Params params {};
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Cigarette_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.Hide");
		
		ABP_Cigarette_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.HealthEndedOverride");
		
		ABP_Cigarette_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Cigarette_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.OnReconfigure");
		
		ABP_Cigarette_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.RequestPhysicsCollision");
		
		ABP_Cigarette_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.OnAddedToHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::OnAddedToHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.OnAddedToHolster");
		
		ABP_Cigarette_C_OnAddedToHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.OnRemovedFromHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::OnRemovedFromHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.OnRemovedFromHolster");
		
		ABP_Cigarette_C_OnRemovedFromHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cigarette.BP_Cigarette_C.ExecuteUbergraph_BP_Cigarette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cigarette_C::ExecuteUbergraph_BP_Cigarette(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cigarette.BP_Cigarette_C.ExecuteUbergraph_BP_Cigarette");
		
		ABP_Cigarette_C_ExecuteUbergraph_BP_Cigarette_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cigarette_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cigarette_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cigarette.BP_Cigarette_C");
		return ptr;
	}

}


