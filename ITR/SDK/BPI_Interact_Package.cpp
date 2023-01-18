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
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.GetLightItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABPA_BaseItem_C*                             Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.GetLightItem");
		
		UBPI_Interact_C_GetLightItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOn != nullptr)
			*IsOn = params.IsOn;
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.PrimaryTrigger");
		
		UBPI_Interact_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.ToggleAttachments
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::ToggleAttachments()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.ToggleAttachments");
		
		UBPI_Interact_C_ToggleAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.GameplayTrigger
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::GameplayTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.GameplayTrigger");
		
		UBPI_Interact_C_GameplayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.DenyHolstering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Deny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::DenyHolstering(bool* Deny)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.DenyHolstering");
		
		UBPI_Interact_C_DenyHolstering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deny != nullptr)
			*Deny = params.Deny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.GetGSLerpToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_LerpToHand*                              LerpToHandScript                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.GetGSLerpToHand");
		
		UBPI_Interact_C_GetGSLerpToHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LerpToHandScript != nullptr)
			*LerpToHandScript = params.LerpToHandScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.SetAttachedCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::SetAttachedCollision(bool Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.SetAttachedCollision");
		
		UBPI_Interact_C_SetAttachedCollision_Params params {};
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.TakenByHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::TakenByHolder(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.TakenByHolder");
		
		UBPI_Interact_C_TakenByHolder_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.SetDenyGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DenyGrip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::SetDenyGrip(bool DenyGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.SetDenyGrip");
		
		UBPI_Interact_C_SetDenyGrip_Params params {};
		params.DenyGrip = DenyGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.RequestPhysicsCollision");
		
		UBPI_Interact_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.BeginItemPositionChecks
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::BeginItemPositionChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.BeginItemPositionChecks");
		
		UBPI_Interact_C_BeginItemPositionChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.IsOn");
		
		UBPI_Interact_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.RequestPositionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::RequestPositionCheck(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.RequestPositionCheck");
		
		UBPI_Interact_C_RequestPositionCheck_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.Request Recoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Recoil                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::RequestRecoil(const struct FVector& Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.Request Recoil");
		
		UBPI_Interact_C_RequestRecoil_Params params {};
		params.Recoil = Recoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.SecondaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::SecondaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.SecondaryTrigger");
		
		UBPI_Interact_C_SecondaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.NightGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::NightGlow(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.NightGlow");
		
		UBPI_Interact_C_NightGlow_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.IsItemActorAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::IsItemActorAttachmentsLocked(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.IsItemActorAttachmentsLocked");
		
		UBPI_Interact_C_IsItemActorAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.DropEjectedMag");
		
		UBPI_Interact_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.SetItemActorAttachmentsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::SetItemActorAttachmentsLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.SetItemActorAttachmentsLock");
		
		UBPI_Interact_C_SetItemActorAttachmentsLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.Hide");
		
		UBPI_Interact_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.TutUnlock
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::TutUnlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.TutUnlock");
		
		UBPI_Interact_C_TutUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.TutLock
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::TutLock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.TutLock");
		
		UBPI_Interact_C_TutLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.Use
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.Use");
		
		UBPI_Interact_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.Unbind
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::Unbind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.Unbind");
		
		UBPI_Interact_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.Inspect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::Inspect(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.Inspect");
		
		UBPI_Interact_C_Inspect_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.ThumbRight
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::ThumbRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.ThumbRight");
		
		UBPI_Interact_C_ThumbRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.ThumbLeft");
		
		UBPI_Interact_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.Bind
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.Bind");
		
		UBPI_Interact_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.ThumbUp
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::ThumbUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.ThumbUp");
		
		UBPI_Interact_C_ThumbUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.EjectMag
	 * 		Flags  -> ()
	 */
	void UBPI_Interact_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.EjectMag");
		
		UBPI_Interact_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.PlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand_EHand                                        hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.PlayerInteract");
		
		UBPI_Interact_C_PlayerInteract_Params params {};
		params.hand = hand;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Interact_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Interact.BPI_Interact_C");
		return ptr;
	}

}


