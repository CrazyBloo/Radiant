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
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.GetDamageDealerName
	 * 		Flags  -> ()
	 */
	class FText ACanister2_Blueprint_C::GetDamageDealerName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.GetDamageDealerName");
		
		ACanister2_Blueprint_C_GetDamageDealerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.GetDamageDealerTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ACanister2_Blueprint_C::GetDamageDealerTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.GetDamageDealerTag");
		
		ACanister2_Blueprint_C_GetDamageDealerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACanister2_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.UserConstructionScript");
		
		ACanister2_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.Punctured
	 * 		Flags  -> ()
	 */
	void ACanister2_Blueprint_C::Punctured()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.Punctured");
		
		ACanister2_Blueprint_C_Punctured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.Explode
	 * 		Flags  -> ()
	 */
	void ACanister2_Blueprint_C::Explode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.Explode");
		
		ACanister2_Blueprint_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.BndEvt__VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DialMilestoneAngle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACanister2_Blueprint_C::BndEvt__VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature(float DialMilestoneAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.BndEvt__VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature");
		
		ACanister2_Blueprint_C_BndEvt__VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature_Params params {};
		params.DialMilestoneAngle = DialMilestoneAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ACanister2_Blueprint_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ACanister2_Blueprint_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACanister2_Blueprint_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.ReceiveAnyDamage");
		
		ACanister2_Blueprint_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Canister2_Blueprint.Canister2_Blueprint_C.ExecuteUbergraph_Canister2_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACanister2_Blueprint_C::ExecuteUbergraph_Canister2_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Canister2_Blueprint.Canister2_Blueprint_C.ExecuteUbergraph_Canister2_Blueprint");
		
		ACanister2_Blueprint_C_ExecuteUbergraph_Canister2_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACanister2_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACanister2_Blueprint_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Canister2_Blueprint.Canister2_Blueprint_C");
		return ptr;
	}

}


