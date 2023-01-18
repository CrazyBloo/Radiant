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
	 * 		Name   -> Function BP_MP5K.BP_MP5K_C.UpdateVirtualStock
	 * 		Flags  -> ()
	 */
	void ABP_MP5K_C::UpdateVirtualStock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MP5K.BP_MP5K_C.UpdateVirtualStock");
		
		ABP_MP5K_C_UpdateVirtualStock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP5K.BP_MP5K_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_MP5K_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MP5K.BP_MP5K_C.OnReconfigure");
		
		ABP_MP5K_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP5K.BP_MP5K_C.BndEvt__VRSlider_stock_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderProgressPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MP5K_C::BndEvt__VRSlider_stock_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature(float SliderProgressPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MP5K.BP_MP5K_C.BndEvt__VRSlider_stock_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature");
		
		ABP_MP5K_C_BndEvt__VRSlider_stock_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature_Params params {};
		params.SliderProgressPoint = SliderProgressPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MP5K.BP_MP5K_C.ExecuteUbergraph_BP_MP5K
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MP5K_C::ExecuteUbergraph_BP_MP5K(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MP5K.BP_MP5K_C.ExecuteUbergraph_BP_MP5K");
		
		ABP_MP5K_C_ExecuteUbergraph_BP_MP5K_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MP5K_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MP5K_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MP5K.BP_MP5K_C");
		return ptr;
	}

}


