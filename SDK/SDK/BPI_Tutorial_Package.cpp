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
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.TargetActorHeldInHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHeld                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HeldInLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Tutorial_C::TargetActorHeldInHand(bool IsHeld, bool HeldInLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.TargetActorHeldInHand");
		
		UBPI_Tutorial_C_TargetActorHeldInHand_Params params {};
		params.IsHeld = IsHeld;
		params.HeldInLeft = HeldInLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.ItemREmovedFromBin
	 * 		Flags  -> ()
	 */
	void UBPI_Tutorial_C::ItemREmovedFromBin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.ItemREmovedFromBin");
		
		UBPI_Tutorial_C_ItemREmovedFromBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.ItemPutToBin
	 * 		Flags  -> ()
	 */
	void UBPI_Tutorial_C::ItemPutToBin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.ItemPutToBin");
		
		UBPI_Tutorial_C_ItemPutToBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.LockFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Tutorial_C::LockFunctions(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.LockFunctions");
		
		UBPI_Tutorial_C_LockFunctions_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.SetControllActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_TutorStep_C*                            Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Tutorial_C::SetControllActor(class ABPA_TutorStep_C* Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.SetControllActor");
		
		UBPI_Tutorial_C_SetControllActor_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.ItemsBought
	 * 		Flags  -> ()
	 */
	void UBPI_Tutorial_C::ItemsBought()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.ItemsBought");
		
		UBPI_Tutorial_C_ItemsBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Tutorial.BPI_Tutorial_C.ItemsSold
	 * 		Flags  -> ()
	 */
	void UBPI_Tutorial_C::ItemsSold()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Tutorial.BPI_Tutorial_C.ItemsSold");
		
		UBPI_Tutorial_C_ItemsSold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Tutorial_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Tutorial.BPI_Tutorial_C");
		return ptr;
	}

}


