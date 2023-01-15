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
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SwitchPPElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerPostProcess_C::SwitchPPElement(bool On, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SwitchPPElement");
		
		UBPC_PlayerPostProcess_C_SwitchPPElement_Params params {};
		params.On = On;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetVignetteEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerPostProcess_C::SetVignetteEnable(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetVignetteEnable");
		
		UBPC_PlayerPostProcess_C_SetVignetteEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetNVEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerPostProcess_C::SetNVEnable(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetNVEnable");
		
		UBPC_PlayerPostProcess_C_SetNVEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetCaptureGuideToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerPostProcess_C::SetCaptureGuideToggle(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.SetCaptureGuideToggle");
		
		UBPC_PlayerPostProcess_C_SetCaptureGuideToggle_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.VignetteChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerPostProcess_C::VignetteChange(bool bIsOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.VignetteChange");
		
		UBPC_PlayerPostProcess_C_VignetteChange_Params params {};
		params.bIsOn = bIsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerPostProcess_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.OnLevelStarted");
		
		UBPC_PlayerPostProcess_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.ExecuteUbergraph_BPC_PlayerPostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerPostProcess_C::ExecuteUbergraph_BPC_PlayerPostProcess(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerPostProcess.BPC_PlayerPostProcess_C.ExecuteUbergraph_BPC_PlayerPostProcess");
		
		UBPC_PlayerPostProcess_C_ExecuteUbergraph_BPC_PlayerPostProcess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_PlayerPostProcess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PlayerPostProcess_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PlayerPostProcess.BPC_PlayerPostProcess_C");
		return ptr;
	}

}


