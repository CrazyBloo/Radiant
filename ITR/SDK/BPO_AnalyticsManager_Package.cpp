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
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialControls
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::OnTutorialControls()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialControls");
		
		UBPO_AnalyticsManager_C_OnTutorialControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.AddParamsFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ParamsArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAnalyticsEventAttr>                 EventAttrIn                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAnalyticsEventAttr>                 EventAttrOut                                               (Parm, OutParm)
	 */
	void UBPO_AnalyticsManager_C::AddParamsFromArray(TArray<class FString> ParamsArray, TArray<struct FAnalyticsEventAttr> EventAttrIn, TArray<struct FAnalyticsEventAttr>* EventAttrOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.AddParamsFromArray");
		
		UBPO_AnalyticsManager_C_AddParamsFromArray_Params params {};
		params.ParamsArray = ParamsArray;
		params.EventAttrIn = EventAttrIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventAttrOut != nullptr)
			*EventAttrOut = params.EventAttrOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.CountFinishedStoryMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionData*>                        Missions                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::CountFinishedStoryMissions(TArray<class UMissionData*>* Missions, int32_t* Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.CountFinishedStoryMissions");
		
		UBPO_AnalyticsManager_C_CountFinishedStoryMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Missions != nullptr)
			*Missions = params.Missions;
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendPlayerPositions
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::SendPlayerPositions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendPlayerPositions");
		
		UBPO_AnalyticsManager_C_SendPlayerPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendChangedGameplaySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VirtualStock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayerHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NeckHeight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ArmLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VignetteTurn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VignetteRun                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SeatedMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPO_AnalyticsManager_C::SendChangedGameplaySettings(bool VirtualStock, bool PlayerHeight, bool NeckHeight, bool ArmLength, bool VignetteTurn, bool VignetteRun, bool ShowBody, bool SeatedMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendChangedGameplaySettings");
		
		UBPO_AnalyticsManager_C_SendChangedGameplaySettings_Params params {};
		params.VirtualStock = VirtualStock;
		params.PlayerHeight = PlayerHeight;
		params.NeckHeight = NeckHeight;
		params.ArmLength = ArmLength;
		params.VignetteTurn = VignetteTurn;
		params.VignetteRun = VignetteRun;
		params.ShowBody = ShowBody;
		params.SeatedMode = SeatedMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendChangedControlsSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TurnSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MovementDirectionType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ControllerRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HoldGrip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftHanded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MirrorHolsters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeleportMovement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPO_AnalyticsManager_C::SendChangedControlsSettings(bool TurnType, bool TurnSpeed, bool MovementDirectionType, bool ControllerRotation, bool HoldGrip, bool LeftHanded, bool MirrorHolsters, bool TeleportMovement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendChangedControlsSettings");
		
		UBPO_AnalyticsManager_C_SendChangedControlsSettings_Params params {};
		params.TurnType = TurnType;
		params.TurnSpeed = TurnSpeed;
		params.MovementDirectionType = MovementDirectionType;
		params.ControllerRotation = ControllerRotation;
		params.HoldGrip = HoldGrip;
		params.LeftHanded = LeftHanded;
		params.MirrorHolsters = MirrorHolsters;
		params.TeleportMovement = TeleportMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.AddDefaultParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnalyticsEventAttr>                 EventAttrIn                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAnalyticsEventAttr>                 EventAttrOut                                               (Parm, OutParm)
	 */
	void UBPO_AnalyticsManager_C::AddDefaultParams(TArray<struct FAnalyticsEventAttr>* EventAttrIn, TArray<struct FAnalyticsEventAttr>* EventAttrOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.AddDefaultParams");
		
		UBPO_AnalyticsManager_C_AddDefaultParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventAttrIn != nullptr)
			*EventAttrIn = params.EventAttrIn;
		if (EventAttrOut != nullptr)
			*EventAttrOut = params.EventAttrOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.Add Difficulty Params
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnalyticsEventAttr>                 EventAttrIn                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRadiusGameDifficulty                       GameDifficulty                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		TArray<struct FAnalyticsEventAttr>                 EventAttrOut                                               (Parm, OutParm)
	 */
	void UBPO_AnalyticsManager_C::AddDifficultyParams(TArray<struct FAnalyticsEventAttr> EventAttrIn, const struct FRadiusGameDifficulty& GameDifficulty, TArray<struct FAnalyticsEventAttr>* EventAttrOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.Add Difficulty Params");
		
		UBPO_AnalyticsManager_C_AddDifficultyParams_Params params {};
		params.EventAttrIn = EventAttrIn;
		params.GameDifficulty = GameDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventAttrOut != nullptr)
			*EventAttrOut = params.EventAttrOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventFourParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::EventFourParams(const class FString& Event, const class FString& param1, const class FString& value1, const class FString& param2, const class FString& value2, const class FString& param3, const class FString& value3, const class FString& param4, const class FString& value4)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventFourParams");
		
		UBPO_AnalyticsManager_C_EventFourParams_Params params {};
		params.Event = Event;
		params.param1 = param1;
		params.value1 = value1;
		params.param2 = param2;
		params.value2 = value2;
		params.param3 = param3;
		params.value3 = value3;
		params.param4 = param4;
		params.value4 = value4;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventThreeParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::EventThreeParams(const class FString& Event, const class FString& param1, const class FString& value1, const class FString& param2, const class FString& value2, const class FString& param3, const class FString& value3)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventThreeParams");
		
		UBPO_AnalyticsManager_C_EventThreeParams_Params params {};
		params.Event = Event;
		params.param1 = param1;
		params.value1 = value1;
		params.param2 = param2;
		params.value2 = value2;
		params.param3 = param3;
		params.value3 = value3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventTwoParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      param2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      value2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::EventTwoParams(const class FString& Event, const class FString& param1, const class FString& value1, const class FString& param2, const class FString& value2)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventTwoParams");
		
		UBPO_AnalyticsManager_C_EventTwoParams_Params params {};
		params.Event = Event;
		params.param1 = param1;
		params.value1 = value1;
		params.param2 = param2;
		params.value2 = value2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventOneParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::EventOneParam(const class FString& Event, const class FString& Param, const class FString& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventOneParam");
		
		UBPO_AnalyticsManager_C_EventOneParam_Params params {};
		params.Event = Event;
		params.Param = Param;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventDefaultParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::EventDefaultParams(const class FString& Event)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventDefaultParams");
		
		UBPO_AnalyticsManager_C_EventDefaultParams_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.Begin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPRGameInstance*                             GameInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::Begin(class UPRGameInstance* GameInstance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.Begin");
		
		UBPO_AnalyticsManager_C_Begin_Params params {};
		params.GameInstance = GameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.End
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::End()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.End");
		
		UBPO_AnalyticsManager_C_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnDifficultyChanged
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::OnDifficultyChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnDifficultyChanged");
		
		UBPO_AnalyticsManager_C_OnDifficultyChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnFinalChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnFinalChoice(const class FString& Choice)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnFinalChoice");
		
		UBPO_AnalyticsManager_C_OnFinalChoice_Params params {};
		params.Choice = Choice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnGameStart
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::OnGameStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnGameStart");
		
		UBPO_AnalyticsManager_C_OnGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnKatyasMonologue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                MonologueTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnKatyasMonologue(const struct FGameplayTag& MonologueTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnKatyasMonologue");
		
		UBPO_AnalyticsManager_C_OnKatyasMonologue_Params params {};
		params.MonologueTag = MonologueTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnLevelStarted(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLevelStarted");
		
		UBPO_AnalyticsManager_C_OnLevelStarted_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLogFPS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Average                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnLogFPS(const class FString& Location, float Min, float Max, float Average)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLogFPS");
		
		UBPO_AnalyticsManager_C_OnLogFPS_Params params {};
		params.Location = Location;
		params.Min = Min;
		params.Max = Max;
		params.Average = Average;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLogHmdDevice
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::OnLogHmdDevice()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLogHmdDevice");
		
		UBPO_AnalyticsManager_C_OnLogHmdDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMenuNewGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipTutor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Ironman                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRadiusGameDifficulty                       Difficulty                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPO_AnalyticsManager_C::OnMenuNewGame(bool SkipTutor, bool Ironman, const struct FRadiusGameDifficulty& Difficulty)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMenuNewGame");
		
		UBPO_AnalyticsManager_C_OnMenuNewGame_Params params {};
		params.SkipTutor = SkipTutor;
		params.Ironman = Ironman;
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMissionFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnMissionFinished(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMissionFinished");
		
		UBPO_AnalyticsManager_C_OnMissionFinished_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMissionStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnMissionStateChanged(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMissionStateChanged");
		
		UBPO_AnalyticsManager_C_OnMissionStateChanged_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DeathCauserName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     DeathLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnPlayerDeath(const class FText& DeathCauserName, const struct FVector& DeathLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerDeath");
		
		UBPO_AnalyticsManager_C_OnPlayerDeath_Params params {};
		params.DeathCauserName = DeathCauserName;
		params.DeathLocation = DeathLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      KilledActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                weaponTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSmoothing                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DeathLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnPlayerKill(class AActor* KilledActor, const struct FGameplayTag& weaponTag, bool bIsSmoothing, const struct FVector& DeathLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerKill");
		
		UBPO_AnalyticsManager_C_OnPlayerKill_Params params {};
		params.KilledActor = KilledActor;
		params.weaponTag = weaponTag;
		params.bIsSmoothing = bIsSmoothing;
		params.DeathLocation = DeathLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AverageDelta                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnPlayerLocation(const struct FVector& Location, float AverageDelta)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerLocation");
		
		UBPO_AnalyticsManager_C_OnPlayerLocation_Params params {};
		params.Location = Location;
		params.AverageDelta = AverageDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSettingsControls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTurnType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bTurnSpeed                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMovementDirectionType                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bControllerRotation                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHoldGrip                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftHanded                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMirrorHolsters                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bTeleportMovement                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPO_AnalyticsManager_C::OnSettingsControls(bool bTurnType, bool bTurnSpeed, bool bMovementDirectionType, bool bControllerRotation, bool bHoldGrip, bool bLeftHanded, bool bMirrorHolsters, bool bTeleportMovement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSettingsControls");
		
		UBPO_AnalyticsManager_C_OnSettingsControls_Params params {};
		params.bTurnType = bTurnType;
		params.bTurnSpeed = bTurnSpeed;
		params.bMovementDirectionType = bMovementDirectionType;
		params.bControllerRotation = bControllerRotation;
		params.bHoldGrip = bHoldGrip;
		params.bLeftHanded = bLeftHanded;
		params.bMirrorHolsters = bMirrorHolsters;
		params.bTeleportMovement = bTeleportMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSettingsGameplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VirtualStock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayerHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NeckHeight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ArmLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VignetteTurn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               VignetteRun                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SeatedMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPO_AnalyticsManager_C::OnSettingsGameplay(bool VirtualStock, bool PlayerHeight, bool NeckHeight, bool ArmLength, bool VignetteTurn, bool VignetteRun, bool ShowBody, bool SeatedMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSettingsGameplay");
		
		UBPO_AnalyticsManager_C_OnSettingsGameplay_Params params {};
		params.VirtualStock = VirtualStock;
		params.PlayerHeight = PlayerHeight;
		params.NeckHeight = NeckHeight;
		params.ArmLength = ArmLength;
		params.VignetteTurn = VignetteTurn;
		params.VignetteRun = VignetteRun;
		params.ShowBody = ShowBody;
		params.SeatedMode = SeatedMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isBlackout                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPO_AnalyticsManager_C::OnSleep(float Seconds, bool isBlackout)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSleep");
		
		UBPO_AnalyticsManager_C_OnSleep_Params params {};
		params.Seconds = Seconds;
		params.isBlackout = isBlackout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTideHappening
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::OnTideHappening()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTideHappening");
		
		UBPO_AnalyticsManager_C_OnTideHappening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void UBPO_AnalyticsManager_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTransitionStart");
		
		UBPO_AnalyticsManager_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnUnstuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnUnstuck(const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnUnstuck");
		
		UBPO_AnalyticsManager_C_OnUnstuck_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TutorialId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalSteps                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CompletedSteps                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnTutorialEnd(const struct FGameplayTag& TutorialId, int32_t TotalSteps, int32_t CompletedSteps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialEnd");
		
		UBPO_AnalyticsManager_C_OnTutorialEnd_Params params {};
		params.TutorialId = TutorialId;
		params.TotalSteps = TotalSteps;
		params.CompletedSteps = CompletedSteps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TutorialId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalSteps                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnTutorialStart(const struct FGameplayTag& TutorialId, int32_t TotalSteps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialStart");
		
		UBPO_AnalyticsManager_C_OnTutorialStart_Params params {};
		params.TutorialId = TutorialId;
		params.TotalSteps = TotalSteps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMoneyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              AnalyticsParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPO_AnalyticsManager_C::OnMoneyChanged(int32_t Value, TArray<class FString> AnalyticsParams)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMoneyChanged");
		
		UBPO_AnalyticsManager_C_OnMoneyChanged_Params params {};
		params.Value = Value;
		params.AnalyticsParams = AnalyticsParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnGuitarPlayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayCount                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayTimeSeconds                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnGuitarPlayed(int32_t PlayCount, float PlayTimeSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnGuitarPlayed");
		
		UBPO_AnalyticsManager_C_OnGuitarPlayed_Params params {};
		params.PlayCount = PlayCount;
		params.PlayTimeSeconds = PlayTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnJournalOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TabTag                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnJournalOpened(const struct FGameplayTag& TabTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnJournalOpened");
		
		UBPO_AnalyticsManager_C_OnJournalOpened_Params params {};
		params.TabTag = TabTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnFirstTimeTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::OnFirstTimeTaken(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnFirstTimeTaken");
		
		UBPO_AnalyticsManager_C_OnFirstTimeTaken_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.ExecuteUbergraph_BPO_AnalyticsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPO_AnalyticsManager_C::ExecuteUbergraph_BPO_AnalyticsManager(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.ExecuteUbergraph_BPO_AnalyticsManager");
		
		UBPO_AnalyticsManager_C_ExecuteUbergraph_BPO_AnalyticsManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPO_AnalyticsManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPO_AnalyticsManager_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPO_AnalyticsManager.BPO_AnalyticsManager_C");
		return ptr;
	}

}


