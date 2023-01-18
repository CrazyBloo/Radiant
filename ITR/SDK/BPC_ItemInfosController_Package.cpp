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
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_ItemInfo_C*                              Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemInfosController_C::GetInfoObject(bool Left, class ABP_ItemInfo_C** Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoObject");
		
		UBPC_ItemInfosController_C_GetInfoObject_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoFirstPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             Pivot                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemInfosController_C::GetInfoFirstPivot(bool Left, class USceneComponent** Pivot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoFirstPivot");
		
		UBPC_ItemInfosController_C_GetInfoFirstPivot_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pivot != nullptr)
			*Pivot = params.Pivot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.IsInfoShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               shown                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemInfosController_C::IsInfoShown(bool Left, bool* shown)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.IsInfoShown");
		
		UBPC_ItemInfosController_C_IsInfoShown_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shown != nullptr)
			*shown = params.shown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.SetupInfoPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLeft                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemInfosController_C::SetupInfoPosition(bool bLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.SetupInfoPosition");
		
		UBPC_ItemInfosController_C_SetupInfoPosition_Params params {};
		params.bLeft = bLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.UpdateInfos
	 * 		Flags  -> ()
	 */
	void UBPC_ItemInfosController_C::UpdateInfos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.UpdateInfos");
		
		UBPC_ItemInfosController_C_UpdateInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowOneInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               unlock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemInfosController_C::ShowOneInfo(bool Left, bool toggle, bool unlock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowOneInfo");
		
		UBPC_ItemInfosController_C_ShowOneInfo_Params params {};
		params.Left = Left;
		params.toggle = toggle;
		params.unlock = unlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowAllInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               unlock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemInfosController_C::ShowAllInfos(bool toggle, bool unlock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowAllInfos");
		
		UBPC_ItemInfosController_C_ShowAllInfos_Params params {};
		params.toggle = toggle;
		params.unlock = unlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      infoActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemInfosController_C::GetInfoActor(bool Left, class AActor** infoActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoActor");
		
		UBPC_ItemInfosController_C_GetInfoActor_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (infoActor != nullptr)
			*infoActor = params.infoActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.SpawnInfos
	 * 		Flags  -> ()
	 */
	void UBPC_ItemInfosController_C::SpawnInfos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.SpawnInfos");
		
		UBPC_ItemInfosController_C_SpawnInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ToggleInfos
	 * 		Flags  -> ()
	 */
	void UBPC_ItemInfosController_C::ToggleInfos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ToggleInfos");
		
		UBPC_ItemInfosController_C_ToggleInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemInfosController_C::ShowInfo(bool Left, bool toggle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowInfo");
		
		UBPC_ItemInfosController_C_ShowInfo_Params params {};
		params.Left = Left;
		params.toggle = toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.Nullify
	 * 		Flags  -> ()
	 */
	void UBPC_ItemInfosController_C::Nullify()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.Nullify");
		
		UBPC_ItemInfosController_C_Nullify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemInfosController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ReceiveTick");
		
		UBPC_ItemInfosController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_ItemInfosController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ReceiveBeginPlay");
		
		UBPC_ItemInfosController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemInfosController_C::Initialize(class USkeletalMeshComponent* Body)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.Initialize");
		
		UBPC_ItemInfosController_C_Initialize_Params params {};
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemInfosController.BPC_ItemInfosController_C.ExecuteUbergraph_BPC_ItemInfosController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemInfosController_C::ExecuteUbergraph_BPC_ItemInfosController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemInfosController.BPC_ItemInfosController_C.ExecuteUbergraph_BPC_ItemInfosController");
		
		UBPC_ItemInfosController_C_ExecuteUbergraph_BPC_ItemInfosController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ItemInfosController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ItemInfosController_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ItemInfosController.BPC_ItemInfosController_C");
		return ptr;
	}

}


