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
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.GetNearestSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Item_Injector_C::GetNearestSocket(class UObject* Player, class FName* Output)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.GetNearestSocket");
		
		ABPA_Item_Injector_C_GetNearestSocket_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.MakeReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Item_Injector_C::MakeReady(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.MakeReady");
		
		ABPA_Item_Injector_C_MakeReady_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.CheckForINJECT
	 * 		Flags  -> ()
	 */
	void ABPA_Item_Injector_C::CheckForINJECT()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.CheckForINJECT");
		
		ABPA_Item_Injector_C_CheckForINJECT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_Item_Injector_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.OnUsed");
		
		ABPA_Item_Injector_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.OnInject
	 * 		Flags  -> ()
	 */
	void ABPA_Item_Injector_C::OnInject()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.OnInject");
		
		ABPA_Item_Injector_C_OnInject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.OnEffectFinish
	 * 		Flags  -> ()
	 */
	void ABPA_Item_Injector_C::OnEffectFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.OnEffectFinish");
		
		ABPA_Item_Injector_C_OnEffectFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_Item_Injector_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.OnReconfigure");
		
		ABPA_Item_Injector_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Item_Injector_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.OnGripRelease");
		
		ABPA_Item_Injector_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_Item_Injector.BPA_Item_Injector_C.ExecuteUbergraph_BPA_Item_Injector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Item_Injector_C::ExecuteUbergraph_BPA_Item_Injector(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Item_Injector.BPA_Item_Injector_C.ExecuteUbergraph_BPA_Item_Injector");
		
		ABPA_Item_Injector_C_ExecuteUbergraph_BPA_Item_Injector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Item_Injector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Item_Injector_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Item_Injector.BPA_Item_Injector_C");
		return ptr;
	}

}


