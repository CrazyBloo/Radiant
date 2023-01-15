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
	 * 		Name   -> Function BP_CharBroadcast.BP_CharBroadcast_C.HasAnyone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               has                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharBroadcast_C::HasAnyone(bool* has)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharBroadcast.BP_CharBroadcast_C.HasAnyone");
		
		ABP_CharBroadcast_C_HasAnyone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (has != nullptr)
			*has = params.has;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharBroadcast.BP_CharBroadcast_C.AlertOthers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_Char_C*                                 Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharBroadcast_C::AlertOthers(class ABPA_Char_C* Caller, class AActor* Target, const struct FTransform& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharBroadcast.BP_CharBroadcast_C.AlertOthers");
		
		ABP_CharBroadcast_C_AlertOthers_Params params {};
		params.Caller = Caller;
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharBroadcast.BP_CharBroadcast_C.GetOtherChars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_Char_C*                                 Caller                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABPA_Char_C*>                         others                                                     (Parm, OutParm)
	 */
	void ABP_CharBroadcast_C::GetOtherChars(class ABPA_Char_C* Caller, TArray<class ABPA_Char_C*>* others)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharBroadcast.BP_CharBroadcast_C.GetOtherChars");
		
		ABP_CharBroadcast_C_GetOtherChars_Params params {};
		params.Caller = Caller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (others != nullptr)
			*others = params.others;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharBroadcast.BP_CharBroadcast_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_CharBroadcast_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharBroadcast.BP_CharBroadcast_C.UserConstructionScript");
		
		ABP_CharBroadcast_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CharBroadcast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharBroadcast_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharBroadcast.BP_CharBroadcast_C");
		return ptr;
	}

}


