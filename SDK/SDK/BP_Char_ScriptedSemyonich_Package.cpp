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
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.LoadAdditionalSettings
	 * 		Flags  -> ()
	 */
	void ABP_Char_ScriptedSemyonich_C::LoadAdditionalSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.LoadAdditionalSettings");
		
		ABP_Char_ScriptedSemyonich_C_LoadAdditionalSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetControll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Tutorial_Mission_C*                      TutSeq                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_ScriptedSemyonich_C::SetControll(class ABP_Tutorial_Mission_C* TutSeq)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetControll");
		
		ABP_Char_ScriptedSemyonich_C_SetControll_Params params {};
		params.TutSeq = TutSeq;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetEnableAdditionalThings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_ScriptedSemyonich_C::SetEnableAdditionalThings(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetEnableAdditionalThings");
		
		ABP_Char_ScriptedSemyonich_C_SetEnableAdditionalThings_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.Trigger
	 * 		Flags  -> ()
	 */
	void ABP_Char_ScriptedSemyonich_C::Trigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.Trigger");
		
		ABP_Char_ScriptedSemyonich_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ProcessNoise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_ScriptedSemyonich_C::ProcessNoise(const class FName& Tag, const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ProcessNoise");
		
		ABP_Char_ScriptedSemyonich_C_ProcessNoise_Params params {};
		params.Tag = Tag;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_ScriptedSemyonich_C::SetCrouch(bool Crouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetCrouch");
		
		ABP_Char_ScriptedSemyonich_C_SetCrouch_Params params {};
		params.Crouch = Crouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Char_ScriptedSemyonich_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.OnStart");
		
		ABP_Char_ScriptedSemyonich_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Char_ScriptedSemyonich_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ReceiveDestroyed");
		
		ABP_Char_ScriptedSemyonich_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ResetSpeed
	 * 		Flags  -> ()
	 */
	void ABP_Char_ScriptedSemyonich_C::ResetSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ResetSpeed");
		
		ABP_Char_ScriptedSemyonich_C_ResetSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_ScriptedSemyonich_C::SetSpeed(float NewSpeed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetSpeed");
		
		ABP_Char_ScriptedSemyonich_C_SetSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.OnAttackCommandStarted
	 * 		Flags  -> ()
	 */
	void ABP_Char_ScriptedSemyonich_C::OnAttackCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.OnAttackCommandStarted");
		
		ABP_Char_ScriptedSemyonich_C_OnAttackCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ExecuteUbergraph_BP_Char_ScriptedSemyonich
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_ScriptedSemyonich_C::ExecuteUbergraph_BP_Char_ScriptedSemyonich(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ExecuteUbergraph_BP_Char_ScriptedSemyonich");
		
		ABP_Char_ScriptedSemyonich_C_ExecuteUbergraph_BP_Char_ScriptedSemyonich_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_ScriptedSemyonich_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_ScriptedSemyonich_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C");
		return ptr;
	}

}


