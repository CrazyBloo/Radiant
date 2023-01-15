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
	 * 		Name   -> Function BPI_ItemInfos.BPI_ItemInfos_C.GetInfoObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_ItemInfo_C*                              Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ItemInfos_C::GetInfoObject(bool Left, class ABP_ItemInfo_C** Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ItemInfos.BPI_ItemInfos_C.GetInfoObject");
		
		UBPI_ItemInfos_C_GetInfoObject_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ItemInfos.BPI_ItemInfos_C.GetInfoFirstPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             Pivot                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ItemInfos_C::GetInfoFirstPivot(bool Left, class USceneComponent** Pivot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ItemInfos.BPI_ItemInfos_C.GetInfoFirstPivot");
		
		UBPI_ItemInfos_C_GetInfoFirstPivot_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pivot != nullptr)
			*Pivot = params.Pivot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ItemInfos.BPI_ItemInfos_C.ToggleInfos
	 * 		Flags  -> ()
	 */
	void UBPI_ItemInfos_C::ToggleInfos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ItemInfos.BPI_ItemInfos_C.ToggleInfos");
		
		UBPI_ItemInfos_C_ToggleInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ItemInfos.BPI_ItemInfos_C.ShowInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ItemInfos_C::ShowInfo(bool Left, bool toggle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ItemInfos.BPI_ItemInfos_C.ShowInfo");
		
		UBPI_ItemInfos_C_ShowInfo_Params params {};
		params.Left = Left;
		params.toggle = toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ItemInfos.BPI_ItemInfos_C.IsInfoShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               shown                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ItemInfos_C::IsInfoShown(bool Left, bool* shown)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ItemInfos.BPI_ItemInfos_C.IsInfoShown");
		
		UBPI_ItemInfos_C_IsInfoShown_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shown != nullptr)
			*shown = params.shown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ItemInfos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ItemInfos_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ItemInfos.BPI_ItemInfos_C");
		return ptr;
	}

}


