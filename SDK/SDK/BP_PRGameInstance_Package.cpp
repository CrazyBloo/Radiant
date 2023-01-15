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
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.SetSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sharpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PRGameInstance_C::SetSharpness(float Sharpen, int32_t Mode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.SetSharpness");
		
		UBP_PRGameInstance_C_SetSharpness_Params params {};
		params.Sharpen = Sharpen;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.SetTAAU
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::SetTAAU()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.SetTAAU");
		
		UBP_PRGameInstance_C_SetTAAU_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.SetFSRMode
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::SetFSRMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.SetFSRMode");
		
		UBP_PRGameInstance_C_SetFSRMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.GetAnalyticsManager
	 * 		Flags  -> ()
	 */
	class UAnalyticsManager* UBP_PRGameInstance_C::GetAnalyticsManager()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.GetAnalyticsManager");
		
		UBP_PRGameInstance_C_GetAnalyticsManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.SetDLSSMode
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::SetDLSSMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.SetDLSSMode");
		
		UBP_PRGameInstance_C_SetDLSSMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.SetScreenPercent
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::SetScreenPercent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.SetScreenPercent");
		
		UBP_PRGameInstance_C_SetScreenPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.FindGPUTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Low                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PRGameInstance_C::FindGPUTier(bool Low, bool* found)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.FindGPUTier");
		
		UBP_PRGameInstance_C_FindGPUTier_Params params {};
		params.Low = Low;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (found != nullptr)
			*found = params.found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.SetQualityLevel
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::SetQualityLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.SetQualityLevel");
		
		UBP_PRGameInstance_C_SetQualityLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.GetPCM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerCameraManager*                        PCM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PRGameInstance_C::GetPCM(bool* success, class APlayerCameraManager** PCM)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.GetPCM");
		
		UBP_PRGameInstance_C_GetPCM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (PCM != nullptr)
			*PCM = params.PCM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.CheatAddItems
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::CheatAddItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.CheatAddItems");
		
		UBP_PRGameInstance_C_CheatAddItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.OnPlayerDeath
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::OnPlayerDeath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.OnPlayerDeath");
		
		UBP_PRGameInstance_C_OnPlayerDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.RestartAfterDeath
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::RestartAfterDeath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.RestartAfterDeath");
		
		UBP_PRGameInstance_C_RestartAfterDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.OnShutdown
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::OnShutdown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.OnShutdown");
		
		UBP_PRGameInstance_C_OnShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.ReceiveOnGameStart
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::ReceiveOnGameStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.ReceiveOnGameStart");
		
		UBP_PRGameInstance_C_ReceiveOnGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.StartNewGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileNumber                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSkipTutorial                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIronman                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRadiusGameDifficulty                       GameDifficulty                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bFromMainMenu                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PRGameInstance_C::StartNewGame(int32_t ProfileNumber, bool bSkipTutorial, bool bIronman, const struct FRadiusGameDifficulty& GameDifficulty, bool bFromMainMenu)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.StartNewGame");
		
		UBP_PRGameInstance_C_StartNewGame_Params params {};
		params.ProfileNumber = ProfileNumber;
		params.bSkipTutorial = bSkipTutorial;
		params.bIronman = bIronman;
		params.GameDifficulty = GameDifficulty;
		params.bFromMainMenu = bFromMainMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.ExitGameBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMenu                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSave                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PRGameInstance_C::ExitGameBP(bool bMenu, bool bSave)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.ExitGameBP");
		
		UBP_PRGameInstance_C_ExitGameBP_Params params {};
		params.bMenu = bMenu;
		params.bSave = bSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.OnBeforeLoad
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::OnBeforeLoad()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.OnBeforeLoad");
		
		UBP_PRGameInstance_C_OnBeforeLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.ExecuteUbergraph_BP_PRGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PRGameInstance_C::ExecuteUbergraph_BP_PRGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.ExecuteUbergraph_BP_PRGameInstance");
		
		UBP_PRGameInstance_C_ExecuteUbergraph_BP_PRGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameInstance.BP_PRGameInstance_C.GraphicsSettingsApply__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_PRGameInstance_C::GraphicsSettingsApply__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameInstance.BP_PRGameInstance_C.GraphicsSettingsApply__DelegateSignature");
		
		UBP_PRGameInstance_C_GraphicsSettingsApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PRGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PRGameInstance_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PRGameInstance.BP_PRGameInstance_C");
		return ptr;
	}

}


