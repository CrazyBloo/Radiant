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
	 * 		Name   -> Function WBP_Element_RepairItem.WBP_Element_RepairItem_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      itemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Buy                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_RepairItem_C::Update(class AActor* itemActor, bool Buy, int32_t* Price)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_RepairItem.WBP_Element_RepairItem_C.Update");
		
		UWBP_Element_RepairItem_C_Update_Params params {};
		params.itemActor = itemActor;
		params.Buy = Buy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_RepairItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_RepairItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_RepairItem.WBP_Element_RepairItem_C");
		return ptr;
	}

}


