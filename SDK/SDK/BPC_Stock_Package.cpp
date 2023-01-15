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
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Stock_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.ReceiveBeginPlay");
		
		UBPC_Stock_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.ReceiveLeverStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeverStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EVRInteractibleLeverEventType                      LeverStatusType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LeverAngleAtTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FullLeverAngleAtTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Stock_C::ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.ReceiveLeverStateChanged");
		
		UBPC_Stock_C_ReceiveLeverStateChanged_Params params {};
		params.LeverStatus = LeverStatus;
		params.LeverStatusType = LeverStatusType;
		params.LeverAngleAtTime = LeverAngleAtTime;
		params.FullLeverAngleAtTime = FullLeverAngleAtTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.Setup
	 * 		Flags  -> ()
	 */
	void UBPC_Stock_C::Setup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.Setup");
		
		UBPC_Stock_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.ReceiveLeverFinishedLerping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LeverFinalAngle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Stock_C::ReceiveLeverFinishedLerping(float LeverFinalAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.ReceiveLeverFinishedLerping");
		
		UBPC_Stock_C_ReceiveLeverFinishedLerping_Params params {};
		params.LeverFinalAngle = LeverFinalAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.OnLeverAngleUpdated
	 * 		Flags  -> ()
	 */
	void UBPC_Stock_C::OnLeverAngleUpdated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.OnLeverAngleUpdated");
		
		UBPC_Stock_C_OnLeverAngleUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.SetBlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBlocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Stock_C::SetBlocked(bool isBlocked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.SetBlocked");
		
		UBPC_Stock_C_SetBlocked_Params params {};
		params.isBlocked = isBlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Stock.BPC_Stock_C.ExecuteUbergraph_BPC_Stock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Stock_C::ExecuteUbergraph_BPC_Stock(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Stock.BPC_Stock_C.ExecuteUbergraph_BPC_Stock");
		
		UBPC_Stock_C_ExecuteUbergraph_BPC_Stock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Stock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Stock_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Stock.BPC_Stock_C");
		return ptr;
	}

}


