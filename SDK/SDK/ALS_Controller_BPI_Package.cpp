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
	 * 		Name   -> Function ALS_Controller_BPI.ALS_Controller_BPI_C.BPI_Get_DebugInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  DebugFocusCharacter                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DebugView                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowHUD                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowTraces                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowDebugShapes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowLayerColors                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Slomo                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowCharacterInfo                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UALS_Controller_BPI_C::BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_Controller_BPI.ALS_Controller_BPI_C.BPI_Get_DebugInfo");
		
		UALS_Controller_BPI_C_BPI_Get_DebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebugFocusCharacter != nullptr)
			*DebugFocusCharacter = params.DebugFocusCharacter;
		if (DebugView != nullptr)
			*DebugView = params.DebugView;
		if (ShowHUD != nullptr)
			*ShowHUD = params.ShowHUD;
		if (ShowTraces != nullptr)
			*ShowTraces = params.ShowTraces;
		if (ShowDebugShapes != nullptr)
			*ShowDebugShapes = params.ShowDebugShapes;
		if (ShowLayerColors != nullptr)
			*ShowLayerColors = params.ShowLayerColors;
		if (Slomo != nullptr)
			*Slomo = params.Slomo;
		if (ShowCharacterInfo != nullptr)
			*ShowCharacterInfo = params.ShowCharacterInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALS_Controller_BPI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALS_Controller_BPI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALS_Controller_BPI.ALS_Controller_BPI_C");
		return ptr;
	}

}


