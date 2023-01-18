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
	 * 		Name   -> Function WBP_ChordQueue.WBP_ChordQueue_C.AddNewChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ChordIcon_C*                            AddedChord                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChordQueue_C::AddNewChord(int32_t ChordID, float PlayTime, class UWBP_ChordIcon_C** AddedChord)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordQueue.WBP_ChordQueue_C.AddNewChord");
		
		UWBP_ChordQueue_C_AddNewChord_Params params {};
		params.ChordID = ChordID;
		params.PlayTime = PlayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AddedChord != nullptr)
			*AddedChord = params.AddedChord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordQueue.WBP_ChordQueue_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ChordQueue_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordQueue.WBP_ChordQueue_C.PreConstruct");
		
		UWBP_ChordQueue_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordQueue.WBP_ChordQueue_C.ClearTrack
	 * 		Flags  -> ()
	 */
	void UWBP_ChordQueue_C::ClearTrack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordQueue.WBP_ChordQueue_C.ClearTrack");
		
		UWBP_ChordQueue_C_ClearTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordQueue.WBP_ChordQueue_C.SwitchSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFirstSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ChordQueue_C::SwitchSet(bool bIsFirstSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordQueue.WBP_ChordQueue_C.SwitchSet");
		
		UWBP_ChordQueue_C_SwitchSet_Params params {};
		params.bIsFirstSet = bIsFirstSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordQueue.WBP_ChordQueue_C.ExecuteUbergraph_WBP_ChordQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChordQueue_C::ExecuteUbergraph_WBP_ChordQueue(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordQueue.WBP_ChordQueue_C.ExecuteUbergraph_WBP_ChordQueue");
		
		UWBP_ChordQueue_C_ExecuteUbergraph_WBP_ChordQueue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChordQueue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChordQueue_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChordQueue.WBP_ChordQueue_C");
		return ptr;
	}

}


