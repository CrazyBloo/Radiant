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
	 * 		Name   -> Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.GetRT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_CurrentLevel_C::GetRT(class UTextureRenderTarget2D** RenderTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.GetRT");
		
		ABP_Map_CurrentLevel_C_GetRT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTarget != nullptr)
			*RenderTarget = params.RenderTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.GetMaterialInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInterface*                          MaterialInterface                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_CurrentLevel_C::GetMaterialInterface(bool* Empty, class UMaterialInterface** MaterialInterface)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.GetMaterialInterface");
		
		ABP_Map_CurrentLevel_C_GetMaterialInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Empty != nullptr)
			*Empty = params.Empty;
		if (MaterialInterface != nullptr)
			*MaterialInterface = params.MaterialInterface;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.UpdateMap
	 * 		Flags  -> ()
	 */
	void ABP_Map_CurrentLevel_C::UpdateMap()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.UpdateMap");
		
		ABP_Map_CurrentLevel_C_UpdateMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.UpdateLevelTag
	 * 		Flags  -> ()
	 */
	void ABP_Map_CurrentLevel_C::UpdateLevelTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.UpdateLevelTag");
		
		ABP_Map_CurrentLevel_C_UpdateLevelTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_CurrentLevel_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.ReceiveTick");
		
		ABP_Map_CurrentLevel_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.ExecuteUbergraph_BP_Map_CurrentLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_CurrentLevel_C::ExecuteUbergraph_BP_Map_CurrentLevel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.ExecuteUbergraph_BP_Map_CurrentLevel");
		
		ABP_Map_CurrentLevel_C_ExecuteUbergraph_BP_Map_CurrentLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Map_CurrentLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Map_CurrentLevel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Map_CurrentLevel.BP_Map_CurrentLevel_C");
		return ptr;
	}

}


