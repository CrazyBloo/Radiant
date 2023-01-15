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
	 * 		Name   -> Function BPI_Scripted.BPI_Scripted_C.SetControll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Tutorial_Mission_C*                      TutSeq                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Scripted_C::SetControll(class ABP_Tutorial_Mission_C* TutSeq)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Scripted.BPI_Scripted_C.SetControll");
		
		UBPI_Scripted_C_SetControll_Params params {};
		params.TutSeq = TutSeq;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Scripted.BPI_Scripted_C.ResetSpeed
	 * 		Flags  -> ()
	 */
	void UBPI_Scripted_C::ResetSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Scripted.BPI_Scripted_C.ResetSpeed");
		
		UBPI_Scripted_C_ResetSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Scripted.BPI_Scripted_C.Trigger
	 * 		Flags  -> ()
	 */
	void UBPI_Scripted_C::Trigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Scripted.BPI_Scripted_C.Trigger");
		
		UBPI_Scripted_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Scripted.BPI_Scripted_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Scripted_C::SetCrouch(bool Crouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Scripted.BPI_Scripted_C.SetCrouch");
		
		UBPI_Scripted_C_SetCrouch_Params params {};
		params.Crouch = Crouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Scripted.BPI_Scripted_C.SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Scripted_C::SetSpeed(float NewSpeed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Scripted.BPI_Scripted_C.SetSpeed");
		
		UBPI_Scripted_C_SetSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Scripted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Scripted_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Scripted.BPI_Scripted_C");
		return ptr;
	}

}


