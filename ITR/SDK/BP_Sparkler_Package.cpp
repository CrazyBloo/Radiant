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
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.FX_UpdateMaterialDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sparkler_C::FX_UpdateMaterialDamage(float DurabilityPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.FX_UpdateMaterialDamage");
		
		ABP_Sparkler_C_FX_UpdateMaterialDamage_Params params {};
		params.DurabilityPercent = DurabilityPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.UpdateMaterialDamage");
		
		ABP_Sparkler_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.Extinguish
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::Extinguish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.Extinguish");
		
		ABP_Sparkler_C_Extinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.ReceiveBeginPlay");
		
		ABP_Sparkler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.SparkLit
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::SparkLit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.SparkLit");
		
		ABP_Sparkler_C_SparkLit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.OnEndUsed");
		
		ABP_Sparkler_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Sparkler_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.OnGrip");
		
		ABP_Sparkler_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Sparkler_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.Hide");
		
		ABP_Sparkler_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.HealthEndedOverride");
		
		ABP_Sparkler_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sparkler_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.ReceiveAnyDamage");
		
		ABP_Sparkler_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.OnReconfigure");
		
		ABP_Sparkler_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sparkler_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.RequestPhysicsCollision");
		
		ABP_Sparkler_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.MoveSparkEffect
	 * 		Flags  -> ()
	 */
	void ABP_Sparkler_C::MoveSparkEffect()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.MoveSparkEffect");
		
		ABP_Sparkler_C_MoveSparkEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparkler.BP_Sparkler_C.ExecuteUbergraph_BP_Sparkler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sparkler_C::ExecuteUbergraph_BP_Sparkler(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparkler.BP_Sparkler_C.ExecuteUbergraph_BP_Sparkler");
		
		ABP_Sparkler_C_ExecuteUbergraph_BP_Sparkler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sparkler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sparkler_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sparkler.BP_Sparkler_C");
		return ptr;
	}

}


