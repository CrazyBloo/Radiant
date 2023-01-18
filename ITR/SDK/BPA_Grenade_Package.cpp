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
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.Explode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Grenade_C::Explode(bool* bIsSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.Explode");
		
		ABPA_Grenade_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSuccess != nullptr)
			*bIsSuccess = params.bIsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.DenyHolstering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Deny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Grenade_C::DenyHolstering(bool* Deny)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.DenyHolstering");
		
		ABPA_Grenade_C_DenyHolstering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deny != nullptr)
			*Deny = params.Deny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.Visual Recoil__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::VisualRecoil__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.Visual Recoil__FinishedFunc");
		
		ABPA_Grenade_C_VisualRecoil__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.Visual Recoil__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::VisualRecoil__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.Visual Recoil__UpdateFunc");
		
		ABPA_Grenade_C_VisualRecoil__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Grenade_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
		
		ABPA_Grenade_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Grenade_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_Grenade_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.SafetyDetach
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::SafetyDetach()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.SafetyDetach");
		
		ABPA_Grenade_C_SafetyDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.Check Safety
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::CheckSafety()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.Check Safety");
		
		ABPA_Grenade_C_CheckSafety_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.VisRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExplosionPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Grenade_C::VisRecoil(const struct FVector& ExplosionPos)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.VisRecoil");
		
		ABPA_Grenade_C_VisRecoil_Params params {};
		params.ExplosionPos = ExplosionPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Grenade_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.OnGrip");
		
		ABPA_Grenade_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Grenade_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.OnGripRelease");
		
		ABPA_Grenade_C_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.HealthEndedOverride");
		
		ABPA_Grenade_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.ReceiveDestroyed");
		
		ABPA_Grenade_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.ThrowItem
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::ThrowItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.ThrowItem");
		
		ABPA_Grenade_C_ThrowItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                weaponTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DmgType                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Grenade_C::BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature(class AActor* causer, float Damage, const struct FGameplayTag& weaponTag, class UDamageType* DmgType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature");
		
		ABPA_Grenade_C_BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		params.weaponTag = weaponTag;
		params.DmgType = DmgType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Grenade_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.ReceiveEndPlay");
		
		ABPA_Grenade_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.OnUsed");
		
		ABPA_Grenade_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.StopUse");
		
		ABPA_Grenade_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.ForceSafetyOff
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::ForceSafetyOff()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.ForceSafetyOff");
		
		ABPA_Grenade_C_ForceSafetyOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.SafetyReleased
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::SafetyReleased()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.SafetyReleased");
		
		ABPA_Grenade_C_SafetyReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABPA_Grenade_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.ThumbLeft");
		
		ABPA_Grenade_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Grenade.BPA_Grenade_C.ExecuteUbergraph_BPA_Grenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Grenade_C::ExecuteUbergraph_BPA_Grenade(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Grenade.BPA_Grenade_C.ExecuteUbergraph_BPA_Grenade");
		
		ABPA_Grenade_C_ExecuteUbergraph_BPA_Grenade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Grenade_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Grenade.BPA_Grenade_C");
		return ptr;
	}

}


