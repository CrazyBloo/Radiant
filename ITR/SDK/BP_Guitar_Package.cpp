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
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.MuteStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldMute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::MuteStrings(bool bShouldMute)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.MuteStrings");
		
		ABP_Guitar_C_MuteStrings_Params params {};
		params.bShouldMute = bShouldMute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OnPickTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::OnPickTriggered(bool bIsPrimary)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OnPickTriggered");
		
		ABP_Guitar_C_OnPickTriggered_Params params {};
		params.bIsPrimary = bIsPrimary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.ChangeHandPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::ChangeHandPose(int32_t ChordID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.ChangeHandPose");
		
		ABP_Guitar_C_ChangeHandPose_Params params {};
		params.ChordID = ChordID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.IsOn");
		
		ABP_Guitar_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_Guitar_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetAttachmentsList");
		
		ABP_Guitar_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetCoinSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttachmentSlotComponent*                    CoinSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::GetCoinSlot(class UAttachmentSlotComponent** CoinSlot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetCoinSlot");
		
		ABP_Guitar_C_GetCoinSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CoinSlot != nullptr)
			*CoinSlot = params.CoinSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OnAttachChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAttached                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::OnAttachChanged(bool bIsAttached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OnAttachChanged");
		
		ABP_Guitar_C_OnAttachChanged_Params params {};
		params.bIsAttached = bIsAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetPRPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PRPlayerController_C*                    PRPlayerController                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::GetPRPlayerController(class ABP_PRPlayerController_C** PRPlayerController, bool* bIsSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetPRPlayerController");
		
		ABP_Guitar_C_GetPRPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PRPlayerController != nullptr)
			*PRPlayerController = params.PRPlayerController;
		if (bIsSuccess != nullptr)
			*bIsSuccess = params.bIsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.PrepareHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRightHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::PrepareHand(bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.PrepareHand");
		
		ABP_Guitar_C_PrepareHand_Params params {};
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.IsRightController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMotionControllerComponent*                  Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Guitar_C::IsRightController(class UMotionControllerComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.IsRightController");
		
		ABP_Guitar_C_IsRightController_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.Init Other Item Pick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorReference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::InitOtherItemPick(class AActor* ActorReference)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.Init Other Item Pick");
		
		ABP_Guitar_C_InitOtherItemPick_Params params {};
		params.ActorReference = ActorReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.UpdateOtherHandItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::UpdateOtherHandItem(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.UpdateOtherHandItem");
		
		ABP_Guitar_C_UpdateOtherHandItem_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.IsPickInHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      PickActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInHand                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::IsPickInHand(class AActor** PickActor, bool* bInHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.IsPickInHand");
		
		ABP_Guitar_C_IsPickInHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickActor != nullptr)
			*PickActor = params.PickActor;
		if (bInHand != nullptr)
			*bInHand = params.bInHand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.On Song Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SongID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::OnSongChanged(const class FName& SongID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.On Song Changed");
		
		ABP_Guitar_C_OnSongChanged_Params params {};
		params.SongID = SongID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OutlineNextMinigameChord
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::OutlineNextMinigameChord()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OutlineNextMinigameChord");
		
		ABP_Guitar_C_OutlineNextMinigameChord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.ResetGame
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::ResetGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.ResetGame");
		
		ABP_Guitar_C_ResetGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.SongTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::SongTick(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.SongTick");
		
		ABP_Guitar_C_SongTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.MoveToNextChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceMove                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::MoveToNextChord(bool ForceMove)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.MoveToNextChord");
		
		ABP_Guitar_C_MoveToNextChord_Params params {};
		params.ForceMove = ForceMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetNextChordName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChordName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::GetNextChordName(class FString* ChordName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetNextChordName");
		
		ABP_Guitar_C_GetNextChordName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChordName != nullptr)
			*ChordName = params.ChordName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetInitialTimeShift
	 * 		Flags  -> ()
	 */
	float ABP_Guitar_C::GetInitialTimeShift()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetInitialTimeShift");
		
		ABP_Guitar_C_GetInitialTimeShift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.Get Chord Frequency
	 * 		Flags  -> ()
	 */
	float ABP_Guitar_C::GetChordFrequency()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.Get Chord Frequency");
		
		ABP_Guitar_C_GetChordFrequency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.CreateChordTimeMap
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::CreateChordTimeMap()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.CreateChordTimeMap");
		
		ABP_Guitar_C_CreateChordTimeMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetChordIDByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChordName                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	int32_t ABP_Guitar_C::GetChordIDByName(const class FString& ChordName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetChordIDByName");
		
		ABP_Guitar_C_GetChordIDByName_Params params {};
		params.ChordName = ChordName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.Update Next Play Time and Chord ID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToNextChord                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ChordID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::UpdateNextPlayTimeandChordID(float* TimeToNextChord, int32_t* ChordID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.Update Next Play Time and Chord ID");
		
		ABP_Guitar_C_UpdateNextPlayTimeandChordID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeToNextChord != nullptr)
			*TimeToNextChord = params.TimeToNextChord;
		if (ChordID != nullptr)
			*ChordID = params.ChordID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.Cycle Increment Int
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueToIncrement                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewCycle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::CycleIncrementInt(int32_t MaxValue, int32_t* ValueToIncrement, bool* bNewCycle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.Cycle Increment Int");
		
		ABP_Guitar_C_CycleIncrementInt_Params params {};
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueToIncrement != nullptr)
			*ValueToIncrement = params.ValueToIncrement;
		if (bNewCycle != nullptr)
			*bNewCycle = params.bNewCycle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetGuitarWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_GuitarChordSet_C*                       AsWBPGuitarChordSet                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::GetGuitarWidget(class UWBP_GuitarChordSet_C** AsWBPGuitarChordSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetGuitarWidget");
		
		ABP_Guitar_C_GetGuitarWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsWBPGuitarChordSet != nullptr)
			*AsWBPGuitarChordSet = params.AsWBPGuitarChordSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.HandVelocityAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             DeckComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HandComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              XAngle                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              YAngle                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::HandVelocityAngle(class USceneComponent* DeckComponent, class USceneComponent* HandComponent, float* XAngle, float* YAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.HandVelocityAngle");
		
		ABP_Guitar_C_HandVelocityAngle_Params params {};
		params.DeckComponent = DeckComponent;
		params.HandComponent = HandComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XAngle != nullptr)
			*XAngle = params.XAngle;
		if (YAngle != nullptr)
			*YAngle = params.YAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.UpdateChordHighlights
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::UpdateChordHighlights()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.UpdateChordHighlights");
		
		ABP_Guitar_C_UpdateChordHighlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.UpdateChordWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFirstSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::UpdateChordWidget(bool bIsFirstSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.UpdateChordWidget");
		
		ABP_Guitar_C_UpdateChordWidget_Params params {};
		params.bIsFirstSet = bIsFirstSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetIK4Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APRPlayerCharacter*                          IK4PlayerChar                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::GetIK4Player(class APRPlayerCharacter** IK4PlayerChar, bool* bSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetIK4Player");
		
		ABP_Guitar_C_GetIK4Player_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IK4PlayerChar != nullptr)
			*IK4PlayerChar = params.IK4PlayerChar;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.Update CUE Chord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::UpdateCUEChord(float Angle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.Update CUE Chord");
		
		ABP_Guitar_C_UpdateCUEChord_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.SetPlayMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPlayMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::SetPlayMode(bool bIsPlayMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.SetPlayMode");
		
		ABP_Guitar_C_SetPlayMode_Params params {};
		params.bIsPlayMode = bIsPlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.GetChordSetAdjustment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordIDAdjustment                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::GetChordSetAdjustment(int32_t* ChordIDAdjustment)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.GetChordSetAdjustment");
		
		ABP_Guitar_C_GetChordSetAdjustment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChordIDAdjustment != nullptr)
			*ChordIDAdjustment = params.ChordIDAdjustment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.UpdateHighlightedChordID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HorizontalAxis                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VerticalAxis                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNewChord                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ABP_Guitar_C::UpdateHighlightedChordID(float HorizontalAxis, float VerticalAxis, bool* bIsNewChord)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.UpdateHighlightedChordID");
		
		ABP_Guitar_C_UpdateHighlightedChordID_Params params {};
		params.HorizontalAxis = HorizontalAxis;
		params.VerticalAxis = VerticalAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsNewChord != nullptr)
			*bIsNewChord = params.bIsNewChord;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20(class UObject* Loaded)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20");
		
		ABP_Guitar_C_OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Guitar_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OnGrip");
		
		ABP_Guitar_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Guitar_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OnGripRelease");
		
		ABP_Guitar_C_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.ThumbLeft");
		
		ABP_Guitar_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.PrimaryTrigger");
		
		ABP_Guitar_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Guitar_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Guitar_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.ReceiveTick");
		
		ABP_Guitar_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.InitSong
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBP_SongSettings_Structure                  SongParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::InitSong(const struct FBP_SongSettings_Structure& SongParams)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.InitSong");
		
		ABP_Guitar_C_InitSong_Params params {};
		params.SongParams = SongParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.PlayChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              XAngle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::PlayChord(float XAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.PlayChord");
		
		ABP_Guitar_C_PlayChord_Params params {};
		params.XAngle = XAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_Guitar_C_BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.TickChord
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::TickChord()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.TickChord");
		
		ABP_Guitar_C_TickChord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.StartSongGame
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::StartSongGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.StartSongGame");
		
		ABP_Guitar_C_StartSongGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.EjectMag");
		
		ABP_Guitar_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.StopSongGame
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::StopSongGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.StopSongGame");
		
		ABP_Guitar_C_StopSongGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::CustomEvent_2(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.CustomEvent_2");
		
		ABP_Guitar_C_CustomEvent_2_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.ReceiveBeginPlay");
		
		ABP_Guitar_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.OnReconfigure");
		
		ABP_Guitar_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void ABP_Guitar_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.UpdateAttachmentSlots");
		
		ABP_Guitar_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guitar.BP_Guitar_C.ExecuteUbergraph_BP_Guitar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guitar_C::ExecuteUbergraph_BP_Guitar(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Guitar.BP_Guitar_C.ExecuteUbergraph_BP_Guitar");
		
		ABP_Guitar_C_ExecuteUbergraph_BP_Guitar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Guitar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Guitar_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Guitar.BP_Guitar_C");
		return ptr;
	}

}


