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
	 * 		Name   -> Function BPI_Skill.BPI_Skill_C.GetSkillPhases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESkillPhase>                                Phases                                                     (Parm, OutParm)
	 */
	void UBPI_Skill_C::GetSkillPhases(TArray<ESkillPhase>* Phases)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Skill.BPI_Skill_C.GetSkillPhases");
		
		UBPI_Skill_C_GetSkillPhases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Phases != nullptr)
			*Phases = params.Phases;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Skill.BPI_Skill_C.NeedWaitForReadyAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedWait                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Skill_C::NeedWaitForReadyAfter(bool* NeedWait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Skill.BPI_Skill_C.NeedWaitForReadyAfter");
		
		UBPI_Skill_C_NeedWaitForReadyAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedWait != nullptr)
			*NeedWait = params.NeedWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Skill.BPI_Skill_C.NeedWaitForReadyBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedWait                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Skill_C::NeedWaitForReadyBefore(bool* NeedWait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Skill.BPI_Skill_C.NeedWaitForReadyBefore");
		
		UBPI_Skill_C_NeedWaitForReadyBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedWait != nullptr)
			*NeedWait = params.NeedWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Skill.BPI_Skill_C.IsSkillInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InProgress                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Skill_C::IsSkillInProgress(bool* InProgress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Skill.BPI_Skill_C.IsSkillInProgress");
		
		UBPI_Skill_C_IsSkillInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InProgress != nullptr)
			*InProgress = params.InProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Skill.BPI_Skill_C.UseSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Skill_C::UseSkill(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Skill.BPI_Skill_C.UseSkill");
		
		UBPI_Skill_C_UseSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Skill.BPI_Skill_C.IsSkillReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkillReady                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CooldownLeft                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Skill_C::IsSkillReady(bool* SkillReady, float* CooldownLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Skill.BPI_Skill_C.IsSkillReady");
		
		UBPI_Skill_C_IsSkillReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkillReady != nullptr)
			*SkillReady = params.SkillReady;
		if (CooldownLeft != nullptr)
			*CooldownLeft = params.CooldownLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Skill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Skill_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Skill.BPI_Skill_C");
		return ptr;
	}

}


