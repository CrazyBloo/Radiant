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
	 * 		Name   -> Function AIC_NPC.AIC_NPC_C.GetDamageDealerName
	 * 		Flags  -> ()
	 */
	class FText AAIC_NPC_C::GetDamageDealerName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GetDamageDealerName");
		
		AAIC_NPC_C_GetDamageDealerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_NPC.AIC_NPC_C.GetDamageDealerTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag AAIC_NPC_C::GetDamageDealerTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GetDamageDealerTag");
		
		AAIC_NPC_C_GetDamageDealerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_NPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_NPC_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AIC_NPC.AIC_NPC_C");
		return ptr;
	}

}


