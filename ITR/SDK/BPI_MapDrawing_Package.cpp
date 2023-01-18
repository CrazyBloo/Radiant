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
	 * 		Name   -> Function BPI_MapDrawing.BPI_MapDrawing_C.GetRT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MapDrawing_C::GetRT(class UTextureRenderTarget2D** RenderTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_MapDrawing.BPI_MapDrawing_C.GetRT");
		
		UBPI_MapDrawing_C_GetRT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTarget != nullptr)
			*RenderTarget = params.RenderTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MapDrawing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MapDrawing_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MapDrawing.BPI_MapDrawing_C");
		return ptr;
	}

}


