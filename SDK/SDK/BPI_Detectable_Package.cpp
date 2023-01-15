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
	 * 		Name   -> Function BPI_Detectable.BPI_Detectable_C.MadeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_Artifact_C*                             ArtRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Detectable_C::MadeVisible(class ABPA_Artifact_C* ArtRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Detectable.BPI_Detectable_C.MadeVisible");
		
		UBPI_Detectable_C_MadeVisible_Params params {};
		params.ArtRef = ArtRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Detectable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Detectable_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Detectable.BPI_Detectable_C");
		return ptr;
	}

}


