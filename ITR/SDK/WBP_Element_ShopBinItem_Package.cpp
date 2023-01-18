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
	 * 		Name   -> Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_Element_ShopBinItem_C::GetVisibility_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.GetVisibility_1");
		
		UWBP_Element_ShopBinItem_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.UpdatePrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PriceForOne                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ShopBinItem_C::UpdatePrice(int32_t* PriceForOne)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.UpdatePrice");
		
		UWBP_Element_ShopBinItem_C_UpdatePrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PriceForOne != nullptr)
			*PriceForOne = params.PriceForOne;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.Clear
	 * 		Flags  -> ()
	 */
	void UWBP_Element_ShopBinItem_C::Clear()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.Clear");
		
		UWBP_Element_ShopBinItem_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.AddOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBuiy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsFreeMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemPrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PriceForOne                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ShopBinItem_C::AddOne(bool bIsBuiy, bool bIsFreeMode, int32_t ItemPrice, int32_t* PriceForOne)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.AddOne");
		
		UWBP_Element_ShopBinItem_C_AddOne_Params params {};
		params.bIsBuiy = bIsBuiy;
		params.bIsFreeMode = bIsFreeMode;
		params.ItemPrice = ItemPrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PriceForOne != nullptr)
			*PriceForOne = params.PriceForOne;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Buy                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FreeMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ShopBinItem_C::Update(const struct FGameplayTag& ItemTag, bool Buy, bool FreeMode, int32_t* Price)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C.Update");
		
		UWBP_Element_ShopBinItem_C_Update_Params params {};
		params.ItemTag = ItemTag;
		params.Buy = Buy;
		params.FreeMode = FreeMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_ShopBinItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_ShopBinItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_ShopBinItem.WBP_Element_ShopBinItem_C");
		return ptr;
	}

}


