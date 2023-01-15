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
	 * 		Name   -> Function BP_IZ81.BP_IZ81_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_IZ81_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IZ81.BP_IZ81_C.GetPoseShift");
		
		ABP_IZ81_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_IZ81_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IZ81_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_IZ81.BP_IZ81_C");
		return ptr;
	}

}


