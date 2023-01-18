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
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.CheckPlayerLevelBlock
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::CheckPlayerLevelBlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.CheckPlayerLevelBlock");
		
		ABP_ShopComputer_C_CheckPlayerLevelBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.RefillAmmoInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MagItem_C*                               MagRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopComputer_C::RefillAmmoInfo(class ABP_MagItem_C* MagRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.RefillAmmoInfo");
		
		ABP_ShopComputer_C_RefillAmmoInfo_Params params {};
		params.MagRef = MagRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.IsFreeMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::IsFreeMode(bool* State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.IsFreeMode");
		
		ABP_ShopComputer_C_IsFreeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.IsSellingAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanSale                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::IsSellingAllowed(bool* CanSale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.IsSellingAllowed");
		
		ABP_ShopComputer_C_IsSellingAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSale != nullptr)
			*CanSale = params.CanSale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.Is Shop Bin Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::IsShopBinVisible(bool* IsVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.Is Shop Bin Visible");
		
		ABP_ShopComputer_C_IsShopBinVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.HasBoughtItemsInBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasItems                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::HasBoughtItemsInBin(bool* HasItems)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.HasBoughtItemsInBin");
		
		ABP_ShopComputer_C_HasBoughtItemsInBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasItems != nullptr)
			*HasItems = params.HasItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.IsInSellingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               selling                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::IsInSellingState(bool* selling)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.IsInSellingState");
		
		ABP_ShopComputer_C_IsInSellingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (selling != nullptr)
			*selling = params.selling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.IsInBuyingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               buying                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::IsInBuyingState(bool* buying)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.IsInBuyingState");
		
		ABP_ShopComputer_C_IsInBuyingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (buying != nullptr)
			*buying = params.buying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.ReceiveBeginPlay");
		
		ABP_ShopComputer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.OnBinContentChanged
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::OnBinContentChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.OnBinContentChanged");
		
		ABP_ShopComputer_C_OnBinContentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.Sell
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::Sell()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.Sell");
		
		ABP_ShopComputer_C_Sell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.Buy
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::Buy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.Buy");
		
		ABP_ShopComputer_C_Buy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.Reset
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::Reset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.Reset");
		
		ABP_ShopComputer_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.StartToBuy
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::StartToBuy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.StartToBuy");
		
		ABP_ShopComputer_C_StartToBuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopComputer_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.ReceiveEndPlay");
		
		ABP_ShopComputer_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopComputer_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.OnLevelStarted");
		
		ABP_ShopComputer_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.OnDoorStateChanged
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::OnDoorStateChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.OnDoorStateChanged");
		
		ABP_ShopComputer_C_OnDoorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.ShowShopBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopComputer_C::ShowShopBin(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.ShowShopBin");
		
		ABP_ShopComputer_C_ShowShopBin_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.UpdateNewItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopComputer_C::UpdateNewItems(int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.UpdateNewItems");
		
		ABP_ShopComputer_C_UpdateNewItems_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.OnNoMoreSpace
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::OnNoMoreSpace()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.OnNoMoreSpace");
		
		ABP_ShopComputer_C_OnNoMoreSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.ExecuteUbergraph_BP_ShopComputer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopComputer_C::ExecuteUbergraph_BP_ShopComputer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.ExecuteUbergraph_BP_ShopComputer");
		
		ABP_ShopComputer_C_ExecuteUbergraph_BP_ShopComputer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopComputer.BP_ShopComputer_C.OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ShopComputer_C::OnStateChanged__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopComputer.BP_ShopComputer_C.OnStateChanged__DelegateSignature");
		
		ABP_ShopComputer_C_OnStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ShopComputer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShopComputer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShopComputer.BP_ShopComputer_C");
		return ptr;
	}

}


