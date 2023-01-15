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
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Switch Trigger Help
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRightHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::Switch_Trigger_Help(bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Switch Trigger Help");
		
		UWBP_GuitarChordSet_C_Switch_Trigger_Help_Params params {};
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SetHoldingHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::SetHoldingHand(bool bIsRight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SetHoldingHand");
		
		UWBP_GuitarChordSet_C_SetHoldingHand_Params params {};
		params.bIsRight = bIsRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Set Guitar Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPickInHand                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPlayMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::Set_Guitar_Mode(bool bIsPickInHand, bool bIsPlayMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Set Guitar Mode");
		
		UWBP_GuitarChordSet_C_Set_Guitar_Mode_Params params {};
		params.bIsPickInHand = bIsPickInHand;
		params.bIsPlayMode = bIsPlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.AddChordToQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::AddChordToQueue(int32_t ChordID, float PlayTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.AddChordToQueue");
		
		UWBP_GuitarChordSet_C_AddChordToQueue_Params params {};
		params.ChordID = ChordID;
		params.PlayTime = PlayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchSelectSongMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::SwitchSelectSongMenu(bool bIsVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchSelectSongMenu");
		
		UWBP_GuitarChordSet_C_SwitchSelectSongMenu_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.InitSlots
	 * 		Flags  -> ()
	 */
	void UWBP_GuitarChordSet_C::InitSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.InitSlots");
		
		UWBP_GuitarChordSet_C_InitSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.UpdateTracksChordSet
	 * 		Flags  -> ()
	 */
	void UWBP_GuitarChordSet_C::UpdateTracksChordSet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.UpdateTracksChordSet");
		
		UWBP_GuitarChordSet_C_UpdateTracksChordSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchMinigame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::SwitchMinigame(bool bIsOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchMinigame");
		
		UWBP_GuitarChordSet_C_SwitchMinigame_Params params {};
		params.bIsOn = bIsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ClearMinigame
	 * 		Flags  -> ()
	 */
	void UWBP_GuitarChordSet_C::ClearMinigame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ClearMinigame");
		
		UWBP_GuitarChordSet_C_ClearMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetNextChordInQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ChordIcon_C*                            NextInQueue                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::GetNextChordInQueue(class UWBP_ChordIcon_C** NextInQueue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetNextChordInQueue");
		
		UWBP_GuitarChordSet_C_GetNextChordInQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextInQueue != nullptr)
			*NextInQueue = params.NextInQueue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetQueueTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ChordQueue_C*                           QueueWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsFirstSet                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::GetQueueTrack(int32_t ChordID, class UWBP_ChordQueue_C** QueueWidget, bool* bIsFirstSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetQueueTrack");
		
		UWBP_GuitarChordSet_C_GetQueueTrack_Params params {};
		params.ChordID = ChordID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueueWidget != nullptr)
			*QueueWidget = params.QueueWidget;
		if (bIsFirstSet != nullptr)
			*bIsFirstSet = params.bIsFirstSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.OutlineChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::OutlineChord(int32_t ChordID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.OutlineChord");
		
		UWBP_GuitarChordSet_C_OutlineChord_Params params {};
		params.ChordID = ChordID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SetDotPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::SetDotPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SetDotPosition");
		
		UWBP_GuitarChordSet_C_SetDotPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Highlight Trigget Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFirstSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::Highlight_Trigget_Set(bool bFirstSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Highlight Trigget Set");
		
		UWBP_GuitarChordSet_C_Highlight_Trigget_Set_Params params {};
		params.bFirstSet = bFirstSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.UpdateOutlinedChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::UpdateOutlinedChord(int32_t ChordID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.UpdateOutlinedChord");
		
		UWBP_GuitarChordSet_C_UpdateOutlinedChord_Params params {};
		params.ChordID = ChordID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.IsOutlinedChordFromOtherSet
	 * 		Flags  -> ()
	 */
	bool UWBP_GuitarChordSet_C::IsOutlinedChordFromOtherSet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.IsOutlinedChordFromOtherSet");
		
		UWBP_GuitarChordSet_C_IsOutlinedChordFromOtherSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetChordAdjustment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFirstSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UWBP_GuitarChordSet_C::GetChordAdjustment(bool bFirstSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.GetChordAdjustment");
		
		UWBP_GuitarChordSet_C_GetChordAdjustment_Params params {};
		params.bFirstSet = bFirstSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ClearOutline
	 * 		Flags  -> ()
	 */
	void UWBP_GuitarChordSet_C::ClearOutline()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ClearOutline");
		
		UWBP_GuitarChordSet_C_ClearOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.PreConstruct");
		
		UWBP_GuitarChordSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchChordSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ChordNames                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bFirstSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRightHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::SwitchChordSet(TArray<class FString> ChordNames, bool bFirstSet, bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchChordSet");
		
		UWBP_GuitarChordSet_C_SwitchChordSet_Params params {};
		params.ChordNames = ChordNames;
		params.bFirstSet = bFirstSet;
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.HighlightChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::HighlightChord(int32_t ChordID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.HighlightChord");
		
		UWBP_GuitarChordSet_C_HighlightChord_Params params {};
		params.ChordID = ChordID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.PlaySusscessfulChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::PlaySusscessfulChord(bool bIsLate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.PlaySusscessfulChord");
		
		UWBP_GuitarChordSet_C_PlaySusscessfulChord_Params params {};
		params.bIsLate = bIsLate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ChordQueueTickPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SongTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::ChordQueueTickPosition(float SongTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ChordQueueTickPosition");
		
		UWBP_GuitarChordSet_C_ChordQueueTickPosition_Params params {};
		params.SongTime = SongTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_GuitarChordSet_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.Construct");
		
		UWBP_GuitarChordSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchPromode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsProMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GuitarChordSet_C::SwitchPromode(bool bIsProMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.SwitchPromode");
		
		UWBP_GuitarChordSet_C_SwitchPromode_Params params {};
		params.bIsProMode = bIsProMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ExecuteUbergraph_WBP_GuitarChordSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GuitarChordSet_C::ExecuteUbergraph_WBP_GuitarChordSet(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GuitarChordSet.WBP_GuitarChordSet_C.ExecuteUbergraph_WBP_GuitarChordSet");
		
		UWBP_GuitarChordSet_C_ExecuteUbergraph_WBP_GuitarChordSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GuitarChordSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GuitarChordSet_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GuitarChordSet.WBP_GuitarChordSet_C");
		return ptr;
	}

}


