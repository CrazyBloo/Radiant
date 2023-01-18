/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * 		Name   -> Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.AttachTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttachmentSlotComponent*                    SlotComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMakeSound                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_SmoothingAttachment_C::AttachTo(class UAttachmentSlotComponent* SlotComponent, bool bMakeSound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.AttachTo");
		
		ABPA_SmoothingAttachment_C_AttachTo_Params params {};
		params.SlotComponent = SlotComponent;
		params.bMakeSound = bMakeSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.DetachFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttachmentSlotComponent*                    SlotComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_SmoothingAttachment_C::DetachFrom(class UAttachmentSlotComponent* SlotComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.DetachFrom");
		
		ABPA_SmoothingAttachment_C_DetachFrom_Params params {};
		params.SlotComponent = SlotComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.ExecuteUbergraph_BPA_SmoothingAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_SmoothingAttachment_C::ExecuteUbergraph_BPA_SmoothingAttachment(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.ExecuteUbergraph_BPA_SmoothingAttachment");
		
		ABPA_SmoothingAttachment_C_ExecuteUbergraph_BPA_SmoothingAttachment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_SmoothingAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_SmoothingAttachment_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_SmoothingAttachment.BPA_SmoothingAttachment_C");
		return ptr;
	}

}


