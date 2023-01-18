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
	 * 		Name   -> Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SongSelectMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.PreConstruct");
		
		UWBP_SongSelectMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.InitSongButtons
	 * 		Flags  -> ()
	 */
	void UWBP_SongSelectMenu_C::InitSongButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.InitSongButtons");
		
		UWBP_SongSelectMenu_C_InitSongButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.SelectSong
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_SongButton_C*                           PressedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SongSelectMenu_C::SelectSong(class UWBP_SongButton_C* PressedButton)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.SelectSong");
		
		UWBP_SongSelectMenu_C_SelectSong_Params params {};
		params.PressedButton = PressedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.ExecuteUbergraph_WBP_SongSelectMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SongSelectMenu_C::ExecuteUbergraph_WBP_SongSelectMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.ExecuteUbergraph_WBP_SongSelectMenu");
		
		UWBP_SongSelectMenu_C_ExecuteUbergraph_WBP_SongSelectMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.OnSongSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SongID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SongSelectMenu_C::OnSongSelected__DelegateSignature(const class FName& SongID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.OnSongSelected__DelegateSignature");
		
		UWBP_SongSelectMenu_C_OnSongSelected__DelegateSignature_Params params {};
		params.SongID = SongID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SongSelectMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SongSelectMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SongSelectMenu.WBP_SongSelectMenu_C");
		return ptr;
	}

}


