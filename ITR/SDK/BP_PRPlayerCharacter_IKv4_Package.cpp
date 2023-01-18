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
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetActionButtonName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetActionButtonName(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetActionButtonName");
		
		ABP_PRPlayerCharacter_IKv4_C_GetActionButtonName_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonName != nullptr)
			*ButtonName = params.ButtonName;
		if (HelpImage != nullptr)
			*HelpImage = params.HelpImage;
		if (DefaultHand != nullptr)
			*DefaultHand = params.DefaultHand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPostProcesscomp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_PlayerPostProcess_C*                    PPcomp                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetPostProcesscomp(class UBPC_PlayerPostProcess_C** PPcomp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPostProcesscomp");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPostProcesscomp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PPcomp != nullptr)
			*PPcomp = params.PPcomp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetOverlapGrips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGripOverlap                                Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 * 		struct FGripOverlap                                selectedGrip                                               (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetOverlapGrips(EPRHand hand, struct FGripOverlap* Grip, struct FGripOverlap* selectedGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetOverlapGrips");
		
		ABP_PRPlayerCharacter_IKv4_C_GetOverlapGrips_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (selectedGrip != nullptr)
			*selectedGrip = params.selectedGrip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               running                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::IsRunning(bool* running)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsRunning");
		
		ABP_PRPlayerCharacter_IKv4_C_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (running != nullptr)
			*running = params.running;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetAudioCaptureRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioCaptureComponent*                      Ref                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetAudioCaptureRef(class UAudioCaptureComponent** Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetAudioCaptureRef");
		
		ABP_PRPlayerCharacter_IKv4_C_GetAudioCaptureRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsLeaning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeaning                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::IsLeaning(bool* IsLeaning)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsLeaning");
		
		ABP_PRPlayerCharacter_IKv4_C_IsLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLeaning != nullptr)
			*IsLeaning = params.IsLeaning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCalculatedBodyRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BodyYaw                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetCalculatedBodyRotation(float* BodyYaw)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCalculatedBodyRotation");
		
		ABP_PRPlayerCharacter_IKv4_C_GetCalculatedBodyRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BodyYaw != nullptr)
			*BodyYaw = params.BodyYaw;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.getNetSmoother
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             comp                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::getNetSmoother(class USceneComponent** comp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.getNetSmoother");
		
		ABP_PRPlayerCharacter_IKv4_C_getNetSmoother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (comp != nullptr)
			*comp = params.comp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetStepsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Steps                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetStepsCount(int32_t* Steps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetStepsCount");
		
		ABP_PRPlayerCharacter_IKv4_C_GetStepsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Steps != nullptr)
			*Steps = params.Steps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMovementDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     MovementVector                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetMovementDirection(struct FVector* MovementVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMovementDirection");
		
		ABP_PRPlayerCharacter_IKv4_C_GetMovementDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MovementVector != nullptr)
			*MovementVector = params.MovementVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTargetingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  BodyTransform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetTargetingInfo(struct FTransform* BodyTransform, struct FVector* Velocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTargetingInfo");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTargetingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BodyTransform != nullptr)
			*BodyTransform = params.BodyTransform;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPlayerControllerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRControllerType                                  Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetPlayerControllerType(EPRControllerType* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPlayerControllerType");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPlayerControllerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetControllerVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LeftVel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RightVel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetControllerVelocity(float* LeftVel, float* RightVel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetControllerVelocity");
		
		ABP_PRPlayerCharacter_IKv4_C_GetControllerVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftVel != nullptr)
			*LeftVel = params.LeftVel;
		if (RightVel != nullptr)
			*RightVel = params.RightVel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsBackpackEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::IsBackpackEquipped(bool* equipped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsBackpackEquipped");
		
		ABP_PRPlayerCharacter_IKv4_C_IsBackpackEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (equipped != nullptr)
			*equipped = params.equipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMoveSpeedCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Coefficient                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetMoveSpeedCoefficient(float* Coefficient)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMoveSpeedCoefficient");
		
		ABP_PRPlayerCharacter_IKv4_C_GetMoveSpeedCoefficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Coefficient != nullptr)
			*Coefficient = params.Coefficient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorInHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::IsActorInHands(class AActor** Actor, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorInHands");
		
		ABP_PRPlayerCharacter_IKv4_C_IsActorInHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetLastDamageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDamageType*                                 DamageType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 Instigator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      causer                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CauserName                                                 (Parm, OutParm)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetLastDamageData(class UDamageType** DamageType, class AController** Instigator, class AActor** causer, class FText* CauserName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetLastDamageData");
		
		ABP_PRPlayerCharacter_IKv4_C_GetLastDamageData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageType != nullptr)
			*DamageType = params.DamageType;
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
		if (causer != nullptr)
			*causer = params.causer;
		if (CauserName != nullptr)
			*CauserName = params.CauserName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Stamina                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StaminaPercent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rest                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RestPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Nutrition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NutritionPercent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetStats(float* Health, float* HealthPercent, float* Stamina, float* StaminaPercent, float* Rest, float* RestPercent, float* Nutrition, float* NutritionPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetStats");
		
		ABP_PRPlayerCharacter_IKv4_C_GetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
		if (Stamina != nullptr)
			*Stamina = params.Stamina;
		if (StaminaPercent != nullptr)
			*StaminaPercent = params.StaminaPercent;
		if (Rest != nullptr)
			*Rest = params.Rest;
		if (RestPercent != nullptr)
			*RestPercent = params.RestPercent;
		if (Nutrition != nullptr)
			*Nutrition = params.Nutrition;
		if (NutritionPercent != nullptr)
			*NutritionPercent = params.NutritionPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUnderwaterState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HeadUnderwater                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BodyUnderwater                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetUnderwaterState(bool* HeadUnderwater, bool* BodyUnderwater)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUnderwaterState");
		
		ABP_PRPlayerCharacter_IKv4_C_GetUnderwaterState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadUnderwater != nullptr)
			*HeadUnderwater = params.HeadUnderwater;
		if (BodyUnderwater != nullptr)
			*BodyUnderwater = params.BodyUnderwater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorClassInHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::IsActorClassInHands(class UClass* ActorClass, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorClassInHands");
		
		ABP_PRPlayerCharacter_IKv4_C_IsActorClassInHands_Params params {};
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterIndicatorRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            Indicator                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetHolsterIndicatorRef(class UWidgetComponent** Indicator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterIndicatorRef");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterIndicatorRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Indicator != nullptr)
			*Indicator = params.Indicator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMarkerMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Mesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetMarkerMesh(class UStaticMeshComponent** Mesh)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMarkerMesh");
		
		ABP_PRPlayerCharacter_IKv4_C_GetMarkerMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PlayFootstepAndClothSounds
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::PlayFootstepAndClothSounds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PlayFootstepAndClothSounds");
		
		ABP_PRPlayerCharacter_IKv4_C_PlayFootstepAndClothSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBeamPointerComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Left                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Right                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetBeamPointerComponents(class USceneComponent** Left, class USceneComponent** Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBeamPointerComponents");
		
		ABP_PRPlayerCharacter_IKv4_C_GetBeamPointerComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Left != nullptr)
			*Left = params.Left;
		if (Right != nullptr)
			*Right = params.Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetInputMovementVector
	 * 		Flags  -> ()
	 */
	struct FVector ABP_PRPlayerCharacter_IKv4_C::GetInputMovementVector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetInputMovementVector");
		
		ABP_PRPlayerCharacter_IKv4_C_GetInputMovementVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsSecondaryGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLeft                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABP_PRPlayerCharacter_IKv4_C::IsSecondaryGrip(bool bLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsSecondaryGrip");
		
		ABP_PRPlayerCharacter_IKv4_C_IsSecondaryGrip_Params params {};
		params.bLeft = bLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckFallDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::CheckFallDamage(float DeltaSpeed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckFallDamage");
		
		ABP_PRPlayerCharacter_IKv4_C_CheckFallDamage_Params params {};
		params.DeltaSpeed = DeltaSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBackpackPivot
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_PRPlayerCharacter_IKv4_C::GetBackpackPivot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBackpackPivot");
		
		ABP_PRPlayerCharacter_IKv4_C_GetBackpackPivot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsAnyLampEnabled
	 * 		Flags  -> ()
	 */
	bool ABP_PRPlayerCharacter_IKv4_C::IsAnyLampEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsAnyLampEnabled");
		
		ABP_PRPlayerCharacter_IKv4_C_IsAnyLampEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LoadInHandItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRightHand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::LoadInHandItems(bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LoadInHandItems");
		
		ABP_PRPlayerCharacter_IKv4_C_LoadInHandItems_Params params {};
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetHandForDirection
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetHandForDirection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetHandForDirection");
		
		ABP_PRPlayerCharacter_IKv4_C_SetHandForDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorLerpingToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_PRPlayerCharacter_IKv4_C::IsActorLerpingToHand(class UObject* Object)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorLerpingToHand");
		
		ABP_PRPlayerCharacter_IKv4_C_IsActorLerpingToHand_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGripRelativeTransformByGeometryTypeAndPoseNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     GripObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              handController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRHandPoseGeometryType                            GeometryType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRHandPoseNumber                                  PoseNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  GripRelativeTransform                                      (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetGripRelativeTransformByGeometryTypeAndPoseNumber(class UObject* GripObject, class UGripMotionControllerComponent* handController, EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, bool* bSuccess, struct FTransform* GripRelativeTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGripRelativeTransformByGeometryTypeAndPoseNumber");
		
		ABP_PRPlayerCharacter_IKv4_C_GetGripRelativeTransformByGeometryTypeAndPoseNumber_Params params {};
		params.GripObject = GripObject;
		params.handController = handController;
		params.poseType = poseType;
		params.GeometryType = GeometryType;
		params.PoseNumber = PoseNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (GripRelativeTransform != nullptr)
			*GripRelativeTransform = params.GripRelativeTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterProbes_R
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterProbes_R()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterProbes_R");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterProbes_R_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterProbes_L
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterProbes_L()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterProbes_L");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterProbes_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterWeaponSecondary
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterWeaponSecondary()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterWeaponSecondary");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterWeaponSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerMelee
	 * 		Flags  -> ()
	 */
	class UBoxComponent* ABP_PRPlayerCharacter_IKv4_C::GetTriggerMelee()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerMelee");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTriggerMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterMelee
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterMelee()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterMelee");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerWeaponSecondary
	 * 		Flags  -> ()
	 */
	class UBoxComponent* ABP_PRPlayerCharacter_IKv4_C::GetTriggerWeaponSecondary()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerWeaponSecondary");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTriggerWeaponSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerMap
	 * 		Flags  -> ()
	 */
	class UBoxComponent* ABP_PRPlayerCharacter_IKv4_C::GetTriggerMap()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerMap");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTriggerMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerDetector
	 * 		Flags  -> ()
	 */
	class UBoxComponent* ABP_PRPlayerCharacter_IKv4_C::GetTriggerDetector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerDetector");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTriggerDetector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerBackpack
	 * 		Flags  -> ()
	 */
	class UBoxComponent* ABP_PRPlayerCharacter_IKv4_C::GetTriggerBackpack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerBackpack");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTriggerBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterDetector
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterDetector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterDetector");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterDetector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerWeaponPrimary
	 * 		Flags  -> ()
	 */
	class UBoxComponent* ABP_PRPlayerCharacter_IKv4_C::GetTriggerWeaponPrimary()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerWeaponPrimary");
		
		ABP_PRPlayerCharacter_IKv4_C_GetTriggerWeaponPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterWeaponPrimary
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterWeaponPrimary()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterWeaponPrimary");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterWeaponPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolderSmallPouchActorComponent
	 * 		Flags  -> ()
	 */
	class UChildActorComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolderSmallPouchActorComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolderSmallPouchActorComponent");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolderSmallPouchActorComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterMap
	 * 		Flags  -> ()
	 */
	class UHolsterComponent* ABP_PRPlayerCharacter_IKv4_C::GetHolsterMap()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterMap");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHolsterMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetIsInteractableHolsterable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_PRPlayerCharacter_IKv4_C::GetIsInteractableHolsterable(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetIsInteractableHolsterable");
		
		ABP_PRPlayerCharacter_IKv4_C_GetIsInteractableHolsterable_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UnbindInteractable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UnbindInteractable(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UnbindInteractable");
		
		ABP_PRPlayerCharacter_IKv4_C_UnbindInteractable_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotBackpack
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_PRPlayerCharacter_IKv4_C::GetPivotBackpack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotBackpack");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPivotBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindInteractable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BindInteractable(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindInteractable");
		
		ABP_PRPlayerCharacter_IKv4_C_BindInteractable_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotNeck
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_PRPlayerCharacter_IKv4_C::GetPivotNeck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotNeck");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPivotNeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Set Camera Fade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFadeAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetCameraFade(float InFadeAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Set Camera Fade");
		
		ABP_PRPlayerCharacter_IKv4_C_SetCameraFade_Params params {};
		params.InFadeAmount = InFadeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Set Blink Radius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BlinkRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetBlinkRadius(float BlinkRadius)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Set Blink Radius");
		
		ABP_PRPlayerCharacter_IKv4_C_SetBlinkRadius_Params params {};
		params.BlinkRadius = BlinkRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetSM_ClimbingIndicatorRight
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ABP_PRPlayerCharacter_IKv4_C::GetSM_ClimbingIndicatorRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetSM_ClimbingIndicatorRight");
		
		ABP_PRPlayerCharacter_IKv4_C_GetSM_ClimbingIndicatorRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetSM_ClimbingIndicatorLeft
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* ABP_PRPlayerCharacter_IKv4_C::GetSM_ClimbingIndicatorLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetSM_ClimbingIndicatorLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_GetSM_ClimbingIndicatorLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBPC_VRController_Left
	 * 		Flags  -> ()
	 */
	class UVRControllerComponent* ABP_PRPlayerCharacter_IKv4_C::GetBPC_VRController_Left()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBPC_VRController_Left");
		
		ABP_PRPlayerCharacter_IKv4_C_GetBPC_VRController_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBPC_VRController_Right
	 * 		Flags  -> ()
	 */
	class UVRControllerComponent* ABP_PRPlayerCharacter_IKv4_C::GetBPC_VRController_Right()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBPC_VRController_Right");
		
		ABP_PRPlayerCharacter_IKv4_C_GetBPC_VRController_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPS_BeamPointerLeft
	 * 		Flags  -> ()
	 */
	class UParticleSystemComponent* ABP_PRPlayerCharacter_IKv4_C::GetPS_BeamPointerLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPS_BeamPointerLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPS_BeamPointerLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPS_BeamPointerRight
	 * 		Flags  -> ()
	 */
	class UParticleSystemComponent* ABP_PRPlayerCharacter_IKv4_C::GetPS_BeamPointerRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPS_BeamPointerRight");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPS_BeamPointerRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetWidgetInteractionLeft
	 * 		Flags  -> ()
	 */
	class UWidgetInteractionComponent* ABP_PRPlayerCharacter_IKv4_C::GetWidgetInteractionLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetWidgetInteractionLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_GetWidgetInteractionLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetWidgetInteractionRight
	 * 		Flags  -> ()
	 */
	class UWidgetInteractionComponent* ABP_PRPlayerCharacter_IKv4_C::GetWidgetInteractionRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetWidgetInteractionRight");
		
		ABP_PRPlayerCharacter_IKv4_C_GetWidgetInteractionRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetW_L_WristMenu
	 * 		Flags  -> ()
	 */
	class UWidgetComponent* ABP_PRPlayerCharacter_IKv4_C::GetW_L_WristMenu()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetW_L_WristMenu");
		
		ABP_PRPlayerCharacter_IKv4_C_GetW_L_WristMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetW_R_WristMenu
	 * 		Flags  -> ()
	 */
	class UWidgetComponent* ABP_PRPlayerCharacter_IKv4_C::GetW_R_WristMenu()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetW_R_WristMenu");
		
		ABP_PRPlayerCharacter_IKv4_C_GetW_R_WristMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetLHandCollider
	 * 		Flags  -> ()
	 */
	class USphereComponent* ABP_PRPlayerCharacter_IKv4_C::GetLHandCollider()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetLHandCollider");
		
		ABP_PRPlayerCharacter_IKv4_C_GetLHandCollider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetRHandCollider
	 * 		Flags  -> ()
	 */
	class USphereComponent* ABP_PRPlayerCharacter_IKv4_C::GetRHandCollider()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetRHandCollider");
		
		ABP_PRPlayerCharacter_IKv4_C_GetRHandCollider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUIPoseTriggerLeft
	 * 		Flags  -> ()
	 */
	class UCapsuleComponent* ABP_PRPlayerCharacter_IKv4_C::GetUIPoseTriggerLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUIPoseTriggerLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_GetUIPoseTriggerLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUIPoseTriggerRight
	 * 		Flags  -> ()
	 */
	class UCapsuleComponent* ABP_PRPlayerCharacter_IKv4_C::GetUIPoseTriggerRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUIPoseTriggerRight");
		
		ABP_PRPlayerCharacter_IKv4_C_GetUIPoseTriggerRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGrabSphereLeft
	 * 		Flags  -> ()
	 */
	class USphereComponent* ABP_PRPlayerCharacter_IKv4_C::GetGrabSphereLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGrabSphereLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_GetGrabSphereLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGrabSphereRight
	 * 		Flags  -> ()
	 */
	class USphereComponent* ABP_PRPlayerCharacter_IKv4_C::GetGrabSphereRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGrabSphereRight");
		
		ABP_PRPlayerCharacter_IKv4_C_GetGrabSphereRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotVest
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_PRPlayerCharacter_IKv4_C::GetPivotVest()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotVest");
		
		ABP_PRPlayerCharacter_IKv4_C_GetPivotVest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetVisibilityPrimitives
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ABP_PRPlayerCharacter_IKv4_C::GetVisibilityPrimitives()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetVisibilityPrimitives");
		
		ABP_PRPlayerCharacter_IKv4_C_GetVisibilityPrimitives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCrouch
	 * 		Flags  -> ()
	 */
	float ABP_PRPlayerCharacter_IKv4_C::GetCrouch()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCrouch");
		
		ABP_PRPlayerCharacter_IKv4_C_GetCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetArmLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetArmLength(unsigned char hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetArmLength");
		
		ABP_PRPlayerCharacter_IKv4_C_SetArmLength_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopAllAudio
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::StopAllAudio()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopAllAudio");
		
		ABP_PRPlayerCharacter_IKv4_C_StopAllAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetDamageCauserName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDamageType*                                 LastDamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 LastDamageInstigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      LastDamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetDamageCauserName(class UDamageType* LastDamageType, class AController* LastDamageInstigator, class AActor* LastDamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetDamageCauserName");
		
		ABP_PRPlayerCharacter_IKv4_C_SetDamageCauserName_Params params {};
		params.LastDamageType = LastDamageType;
		params.LastDamageInstigator = LastDamageInstigator;
		params.LastDamageCauser = LastDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateLefthanded
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateLefthanded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateLefthanded");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateLefthanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateMarkers
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateMarkers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateMarkers");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetArmor FootStepNoiseBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                                                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetArmorFootStepNoiseBonus(float* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetArmor FootStepNoiseBonus");
		
		ABP_PRPlayerCharacter_IKv4_C_GetArmorFootStepNoiseBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCameraRef
	 * 		Flags  -> ()
	 */
	class UCameraComponent* ABP_PRPlayerCharacter_IKv4_C::GetCameraRef()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCameraRef");
		
		ABP_PRPlayerCharacter_IKv4_C_GetCameraRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCurrentVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetCurrentVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCurrentVelocity");
		
		ABP_PRPlayerCharacter_IKv4_C_GetCurrentVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsHoldingActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               holding                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::IsHoldingActor(class UGripMotionControllerComponent* Controller, class AActor* Actor, bool* holding)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsHoldingActor");
		
		ABP_PRPlayerCharacter_IKv4_C_IsHoldingActor_Params params {};
		params.Controller = Controller;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (holding != nullptr)
			*holding = params.holding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DoUnstuck
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::DoUnstuck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DoUnstuck");
		
		ABP_PRPlayerCharacter_IKv4_C_DoUnstuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropOrRetakeOrHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     GrippedObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SecondaryGrip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               zeroVel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               holstered                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::DropOrRetakeOrHolster(class UGripMotionControllerComponent* Controller, class UObject* GrippedObject, bool SecondaryGrip, bool zeroVel, bool* holstered)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropOrRetakeOrHolster");
		
		ABP_PRPlayerCharacter_IKv4_C_DropOrRetakeOrHolster_Params params {};
		params.Controller = Controller;
		params.GrippedObject = GrippedObject;
		params.SecondaryGrip = SecondaryGrip;
		params.zeroVel = zeroVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (holstered != nullptr)
			*holstered = params.holstered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsItemActorSticked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_PRPlayerCharacter_IKv4_C::IsItemActorSticked(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsItemActorSticked");
		
		ABP_PRPlayerCharacter_IKv4_C_IsItemActorSticked_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckHandStickBreak
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::CheckHandStickBreak()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckHandStickBreak");
		
		ABP_PRPlayerCharacter_IKv4_C_CheckHandStickBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ForceGrabObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToTryToGrab                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  WorldTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  GripPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UGripMotionControllerComponent*              hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSlotGrip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Gripped                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ForceGrabObject(class UObject* ObjectToTryToGrab, const struct FTransform& WorldTransform, const struct FTransform& GripPoint, class UGripMotionControllerComponent* hand, bool IsSlotGrip, bool* Gripped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ForceGrabObject");
		
		ABP_PRPlayerCharacter_IKv4_C_ForceGrabObject_Params params {};
		params.ObjectToTryToGrab = ObjectToTryToGrab;
		params.WorldTransform = WorldTransform;
		params.GripPoint = GripPoint;
		params.hand = hand;
		params.IsSlotGrip = IsSlotGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gripped != nullptr)
			*Gripped = params.Gripped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetMoveSpeedCoefficient
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ResetMoveSpeedCoefficient()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetMoveSpeedCoefficient");
		
		ABP_PRPlayerCharacter_IKv4_C_ResetMoveSpeedCoefficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateIndicators
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateIndicators()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateIndicators");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EnableRagdoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::EnableRagdoll(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EnableRagdoll");
		
		ABP_PRPlayerCharacter_IKv4_C_EnableRagdoll_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetControlsRefs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               alive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCameraComponent*                            cameraRef                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             pivotHead                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              leftControllerRef                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             pivotLeftController                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             pivotLeftHand                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USphereComponent*                            sphereLeftHand                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    materialLeftController                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              rightControllerRef                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             pivotRightController                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             pivotRightHand                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USphereComponent*                            sphereRightHand                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    materialRightController                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetControlsRefs(bool* success, bool* alive, class UCameraComponent** cameraRef, class USceneComponent** pivotHead, class UGripMotionControllerComponent** leftControllerRef, class USceneComponent** pivotLeftController, class USceneComponent** pivotLeftHand, class USphereComponent** sphereLeftHand, class UMaterialInstanceDynamic** materialLeftController, class UGripMotionControllerComponent** rightControllerRef, class USceneComponent** pivotRightController, class USceneComponent** pivotRightHand, class USphereComponent** sphereRightHand, class UMaterialInstanceDynamic** materialRightController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetControlsRefs");
		
		ABP_PRPlayerCharacter_IKv4_C_GetControlsRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (alive != nullptr)
			*alive = params.alive;
		if (cameraRef != nullptr)
			*cameraRef = params.cameraRef;
		if (pivotHead != nullptr)
			*pivotHead = params.pivotHead;
		if (leftControllerRef != nullptr)
			*leftControllerRef = params.leftControllerRef;
		if (pivotLeftController != nullptr)
			*pivotLeftController = params.pivotLeftController;
		if (pivotLeftHand != nullptr)
			*pivotLeftHand = params.pivotLeftHand;
		if (sphereLeftHand != nullptr)
			*sphereLeftHand = params.sphereLeftHand;
		if (materialLeftController != nullptr)
			*materialLeftController = params.materialLeftController;
		if (rightControllerRef != nullptr)
			*rightControllerRef = params.rightControllerRef;
		if (pivotRightController != nullptr)
			*pivotRightController = params.pivotRightController;
		if (pivotRightHand != nullptr)
			*pivotRightHand = params.pivotRightHand;
		if (sphereRightHand != nullptr)
			*sphereRightHand = params.sphereRightHand;
		if (materialRightController != nullptr)
			*materialRightController = params.materialRightController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHandPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Pivot                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetHandPivot(class UGripMotionControllerComponent* Controller, class USceneComponent** Pivot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHandPivot");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHandPivot_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pivot != nullptr)
			*Pivot = params.Pivot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetHealth(float* Health)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHealth");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHealthPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetHealthPercent(float* HealthPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHealthPercent");
		
		ABP_PRPlayerCharacter_IKv4_C_GetHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsAlive
	 * 		Flags  -> ()
	 */
	bool ABP_PRPlayerCharacter_IKv4_C::IsAlive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsAlive");
		
		ABP_PRPlayerCharacter_IKv4_C_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemsInHands
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SpawnItemsInHands()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemsInHands");
		
		ABP_PRPlayerCharacter_IKv4_C_SpawnItemsInHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Velocity Calculations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::VelocityCalculations(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Velocity Calculations");
		
		ABP_PRPlayerCharacter_IKv4_C_VelocityCalculations_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetDPadMovementFacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode_EMovementMode                        MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              OtherHand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode_EMovementMode                        OtherHandMovementMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ForwardVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RightVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::GetDPadMovementFacing(EMovementMode_EMovementMode MovementMode, class UGripMotionControllerComponent* hand, class UGripMotionControllerComponent* OtherHand, EMovementMode_EMovementMode OtherHandMovementMode, struct FVector* ForwardVector, struct FVector* RightVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetDPadMovementFacing");
		
		ABP_PRPlayerCharacter_IKv4_C_GetDPadMovementFacing_Params params {};
		params.MovementMode = MovementMode;
		params.hand = hand;
		params.OtherHand = OtherHand;
		params.OtherHandMovementMode = OtherHandMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForwardVector != nullptr)
			*ForwardVector = params.ForwardVector;
		if (RightVector != nullptr)
			*RightVector = params.RightVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ScaleWristWidgets
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ScaleWristWidgets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ScaleWristWidgets");
		
		ABP_PRPlayerCharacter_IKv4_C_ScaleWristWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ProcessClimb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ProcessClimb(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ProcessClimb");
		
		ABP_PRPlayerCharacter_IKv4_C_ProcessClimb_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckTriggerOverlaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USphereComponent*                            GrabSphere                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              GripMotionController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Overlapped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::CheckTriggerOverlaps(class USphereComponent* GrabSphere, class UGripMotionControllerComponent* GripMotionController, bool* Overlapped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckTriggerOverlaps");
		
		ABP_PRPlayerCharacter_IKv4_C_CheckTriggerOverlaps_Params params {};
		params.GrabSphere = GrabSphere;
		params.GripMotionController = GripMotionController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overlapped != nullptr)
			*Overlapped = params.Overlapped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.FindBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBound                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Bindable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HolsterFree                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBPC_Holster_C*                              HolsterPoint                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::FindBinding(class UObject* Object, bool* IsBound, bool* Bindable, bool* HolsterFree, bool* IsUsable, class UBPC_Holster_C** HolsterPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.FindBinding");
		
		ABP_PRPlayerCharacter_IKv4_C_FindBinding_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBound != nullptr)
			*IsBound = params.IsBound;
		if (Bindable != nullptr)
			*Bindable = params.Bindable;
		if (HolsterFree != nullptr)
			*HolsterFree = params.HolsterFree;
		if (IsUsable != nullptr)
			*IsUsable = params.IsUsable;
		if (HolsterPoint != nullptr)
			*HolsterPoint = params.HolsterPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LoadSettings
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::LoadSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LoadSettings");
		
		ABP_PRPlayerCharacter_IKv4_C_LoadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UserConstructionScript");
		
		ABP_PRPlayerCharacter_IKv4_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_1__FinishedFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_1__UpdateFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_2__FinishedFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_2__UpdateFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_0__FinishedFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_0__UpdateFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TL_Turn__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::TL_Turn__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TL_Turn__FinishedFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_TL_Turn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TL_Turn__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::TL_Turn__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TL_Turn__UpdateFunc");
		
		ABP_PRPlayerCharacter_IKv4_C_TL_Turn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");
		
		ABP_PRPlayerCharacter_IKv4_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BindLeft(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_BindLeft_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BindRight(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindRight");
		
		ABP_PRPlayerCharacter_IKv4_C_BindRight_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RunToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::RunToggle(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RunToggle");
		
		ABP_PRPlayerCharacter_IKv4_C_RunToggle_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ShowButtons(bool Show, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowButtons");
		
		ABP_PRPlayerCharacter_IKv4_C_ShowButtons_Params params {};
		params.Show = Show;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TurnPlayerToFaceActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::TurnPlayerToFaceActor(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TurnPlayerToFaceActor");
		
		ABP_PRPlayerCharacter_IKv4_C_TurnPlayerToFaceActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BlockInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               AllowInput                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BlockInput(TArray<EControlAction> Actions, bool AllowInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BlockInput");
		
		ABP_PRPlayerCharacter_IKv4_C_BlockInput_Params params {};
		params.Actions = Actions;
		params.AllowInput = AllowInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowCapTouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusButton                                      Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ShowCapTouch(EOculusButton Button, bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowCapTouch");
		
		ABP_PRPlayerCharacter_IKv4_C_ShowCapTouch_Params params {};
		params.Button = Button;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopHaptics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::StopHaptics(EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopHaptics");
		
		ABP_PRPlayerCharacter_IKv4_C_StopHaptics_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AllowAll
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::AllowAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AllowAll");
		
		ABP_PRPlayerCharacter_IKv4_C_AllowAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AllowOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::AllowOnly(TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AllowOnly");
		
		ABP_PRPlayerCharacter_IKv4_C_AllowOnly_Params params {};
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioFootstep
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::AudioFootstep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioFootstep");
		
		ABP_PRPlayerCharacter_IKv4_C_AudioFootstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveTick");
		
		ABP_PRPlayerCharacter_IKv4_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TurnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::TurnPlayer(float Degrees)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TurnPlayer");
		
		ABP_PRPlayerCharacter_IKv4_C_TurnPlayer_Params params {};
		params.Degrees = Degrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.YawnSounds
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::YawnSounds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.YawnSounds");
		
		ABP_PRPlayerCharacter_IKv4_C_YawnSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Sleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UntilRested                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UntilHealed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Healing                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              WakeUpTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Sleep(bool UntilRested, bool UntilHealed, bool Healing, float WakeUpTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Sleep");
		
		ABP_PRPlayerCharacter_IKv4_C_Sleep_Params params {};
		params.UntilRested = UntilRested;
		params.UntilHealed = UntilHealed;
		params.Healing = Healing;
		params.WakeUpTime = WakeUpTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnGameStartedEventDelegate");
		
		ABP_PRPlayerCharacter_IKv4_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.HungrySounds
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::HungrySounds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.HungrySounds");
		
		ABP_PRPlayerCharacter_IKv4_C_HungrySounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioGasMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayOrStop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForcePlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::AudioGasMask(bool PlayOrStop, bool ForcePlay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioGasMask");
		
		ABP_PRPlayerCharacter_IKv4_C_AudioGasMask_Params params {};
		params.PlayOrStop = PlayOrStop;
		params.ForcePlay = ForcePlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioUnderwater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayOrStop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForcePlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::AudioUnderwater(bool PlayOrStop, bool ForcePlay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioUnderwater");
		
		ABP_PRPlayerCharacter_IKv4_C_AudioUnderwater_Params params {};
		params.PlayOrStop = PlayOrStop;
		params.ForcePlay = ForcePlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioDrowning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayOrStop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForcePlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::AudioDrowning(bool PlayOrStop, bool ForcePlay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioDrowning");
		
		ABP_PRPlayerCharacter_IKv4_C_AudioDrowning_Params params {};
		params.PlayOrStop = PlayOrStop;
		params.ForcePlay = ForcePlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetSecondaryGripController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SecondaryController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetSecondaryGripController(class USceneComponent* SecondaryController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetSecondaryGripController");
		
		ABP_PRPlayerCharacter_IKv4_C_SetSecondaryGripController_Params params {};
		params.SecondaryController = SecondaryController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChangeBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ChangeStamina(float ChangeBy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeStamina");
		
		ABP_PRPlayerCharacter_IKv4_C_ChangeStamina_Params params {};
		params.ChangeBy = ChangeBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeNutrition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChangeBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ChangeNutrition(float ChangeBy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeNutrition");
		
		ABP_PRPlayerCharacter_IKv4_C_ChangeNutrition_Params params {};
		params.ChangeBy = ChangeBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BuffRest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BuffRest(float Amount, float Time)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BuffRest");
		
		ABP_PRPlayerCharacter_IKv4_C_BuffRest_Params params {};
		params.Amount = Amount;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetControllersVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetControllersVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetControllersVisibility");
		
		ABP_PRPlayerCharacter_IKv4_C_SetControllersVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetDPadVelocityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DPadVelocityScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetDPadVelocityScale(float DPadVelocityScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetDPadVelocityScale");
		
		ABP_PRPlayerCharacter_IKv4_C_SetDPadVelocityScale_Params params {};
		params.DPadVelocityScale = DPadVelocityScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Backward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Backward(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Backward");
		
		ABP_PRPlayerCharacter_IKv4_C_Backward_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Left(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Left");
		
		ABP_PRPlayerCharacter_IKv4_C_Left_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Sprint
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Sprint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Sprint");
		
		ABP_PRPlayerCharacter_IKv4_C_Sprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnClimbingSteppedUp
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnClimbingSteppedUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnClimbingSteppedUp");
		
		ABP_PRPlayerCharacter_IKv4_C_OnClimbingSteppedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.FireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::FireMode(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.FireMode");
		
		ABP_PRPlayerCharacter_IKv4_C_FireMode_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Arm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Arm(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Arm");
		
		ABP_PRPlayerCharacter_IKv4_C_Arm_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EjectMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::EjectMag(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EjectMag");
		
		ABP_PRPlayerCharacter_IKv4_C_EjectMag_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InteractLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::InteractLeft(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InteractLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_InteractLeft_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InteractRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::InteractRight(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InteractRight");
		
		ABP_PRPlayerCharacter_IKv4_C_InteractRight_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropFirstGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::DropFirstGrip(class UGripMotionControllerComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropFirstGrip");
		
		ABP_PRPlayerCharacter_IKv4_C_DropFirstGrip_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveAnyDamage");
		
		ABP_PRPlayerCharacter_IKv4_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Event Headtrigger
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::EventHeadtrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Event Headtrigger");
		
		ABP_PRPlayerCharacter_IKv4_C_EventHeadtrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Unstuck
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Unstuck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Unstuck");
		
		ABP_PRPlayerCharacter_IKv4_C_Unstuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetUnderwaterState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HeadUnderwater                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BodyUnderwater                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetUnderwaterState(bool HeadUnderwater, bool BodyUnderwater)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetUnderwaterState");
		
		ABP_PRPlayerCharacter_IKv4_C_SetUnderwaterState_Params params {};
		params.HeadUnderwater = HeadUnderwater;
		params.BodyUnderwater = BodyUnderwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_PRPlayerCharacter_IKv4_C_BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RefreshBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               allowCreate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::RefreshBackpack(bool allowCreate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RefreshBackpack");
		
		ABP_PRPlayerCharacter_IKv4_C_RefreshBackpack_Params params {};
		params.allowCreate = allowCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Initialize
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Initialize()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Initialize");
		
		ABP_PRPlayerCharacter_IKv4_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnInventory
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SpawnInventory()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnInventory");
		
		ABP_PRPlayerCharacter_IKv4_C_SpawnInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReturnBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ReturnBackpack(bool instant)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReturnBackpack");
		
		ABP_PRPlayerCharacter_IKv4_C_ReturnBackpack_Params params {};
		params.instant = instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowDirectionHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LookTo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ShowDirectionHint(const struct FVector& LookTo, bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowDirectionHint");
		
		ABP_PRPlayerCharacter_IKv4_C_ShowDirectionHint_Params params {};
		params.LookTo = LookTo;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RefreshHandPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::RefreshHandPose(class UGripMotionControllerComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RefreshHandPose");
		
		ABP_PRPlayerCharacter_IKv4_C_RefreshHandPose_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ChangeHealth(float HealthDelta)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeHealth");
		
		ABP_PRPlayerCharacter_IKv4_C_ChangeHealth_Params params {};
		params.HealthDelta = HealthDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OpenEyes
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OpenEyes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OpenEyes");
		
		ABP_PRPlayerCharacter_IKv4_C_OpenEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CloseEyes
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::CloseEyes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CloseEyes");
		
		ABP_PRPlayerCharacter_IKv4_C_CloseEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EjectMagDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::EjectMagDrop(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EjectMagDrop");
		
		ABP_PRPlayerCharacter_IKv4_C_EjectMagDrop_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RestoreAfterDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowNormalBody                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::RestoreAfterDeath(bool ShowNormalBody)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RestoreAfterDeath");
		
		ABP_PRPlayerCharacter_IKv4_C_RestoreAfterDeath_Params params {};
		params.ShowNormalBody = ShowNormalBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeHealthByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ChangeHealthByPercent(int32_t Percent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeHealthByPercent");
		
		ABP_PRPlayerCharacter_IKv4_C_ChangeHealthByPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeRestByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ChangeRestByPercent(int32_t Percent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeRestByPercent");
		
		ABP_PRPlayerCharacter_IKv4_C_ChangeRestByPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HealthPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RestPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StaminaPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HungerPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetStats(int32_t HealthPercent, int32_t RestPercent, int32_t StaminaPercent, int32_t HungerPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetStats");
		
		ABP_PRPlayerCharacter_IKv4_C_SetStats_Params params {};
		params.HealthPercent = HealthPercent;
		params.RestPercent = RestPercent;
		params.StaminaPercent = StaminaPercent;
		params.HungerPercent = HungerPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ClearRefs
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ClearRefs()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ClearRefs");
		
		ABP_PRPlayerCharacter_IKv4_C_ClearRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveEndPlay");
		
		ABP_PRPlayerCharacter_IKv4_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropAll
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::DropAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropAll");
		
		ABP_PRPlayerCharacter_IKv4_C_DropAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetMoveSpeedCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESpeedCoefficient                                  Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Coefficient                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetMoveSpeedCoefficient(ESpeedCoefficient Source, float Coefficient)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetMoveSpeedCoefficient");
		
		ABP_PRPlayerCharacter_IKv4_C_SetMoveSpeedCoefficient_Params params {};
		params.Source = Source;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateControllerAndHands
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateControllerAndHands()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateControllerAndHands");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateControllerAndHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRStatStatus                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature(EPRStatStatus Status)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature");
		
		ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRStatStatus                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature(EPRStatStatus Status)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature");
		
		ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRStatStatus                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature(EPRStatStatus Status)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature");
		
		ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnHealthEnd
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnHealthEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnHealthEnd");
		
		ABP_PRPlayerCharacter_IKv4_C_OnHealthEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature");
		
		ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTeleported
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnTeleported()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTeleported");
		
		ABP_PRPlayerCharacter_IKv4_C_OnTeleported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateWeight
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateWeight");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetCrouch(bool Crouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetCrouch");
		
		ABP_PRPlayerCharacter_IKv4_C_SetCrouch_Params params {};
		params.Crouch = Crouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ToggleCrouch
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ToggleCrouch()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ToggleCrouch");
		
		ABP_PRPlayerCharacter_IKv4_C_ToggleCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PreTeleport
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::PreTeleport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PreTeleport");
		
		ABP_PRPlayerCharacter_IKv4_C_PreTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetWristMenuHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetWristMenuHidden(bool Hidden)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetWristMenuHidden");
		
		ABP_PRPlayerCharacter_IKv4_C_SetWristMenuHidden_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SwitchPlayerMesh
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SwitchPlayerMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SwitchPlayerMesh");
		
		ABP_PRPlayerCharacter_IKv4_C_SwitchPlayerMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Stop Blink
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::StopBlink()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Stop Blink");
		
		ABP_PRPlayerCharacter_IKv4_C_StopBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemInHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayTag                                ItemTypeID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SpawnItemInHand(bool LeftHand, const struct FGameplayTag& ItemTypeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemInHand");
		
		ABP_PRPlayerCharacter_IKv4_C_SpawnItemInHand_Params params {};
		params.LeftHand = LeftHand;
		params.ItemTypeID = ItemTypeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ProcessHaptics
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ProcessHaptics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ProcessHaptics");
		
		ABP_PRPlayerCharacter_IKv4_C_ProcessHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetSeatedMode
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ResetSeatedMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetSeatedMode");
		
		ABP_PRPlayerCharacter_IKv4_C_ResetSeatedMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateControllerShifts
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateControllerShifts()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateControllerShifts");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateControllerShifts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetCurrentVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetCurrentVelocity(const struct FVector& Velocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetCurrentVelocity");
		
		ABP_PRPlayerCharacter_IKv4_C_SetCurrentVelocity_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Gasmask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PutOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::Gasmask(bool PutOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Gasmask");
		
		ABP_PRPlayerCharacter_IKv4_C_Gasmask_Params params {};
		params.PutOn = PutOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopHapticses
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::StopHapticses()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopHapticses");
		
		ABP_PRPlayerCharacter_IKv4_C_StopHapticses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               paused                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SetPaused(bool paused)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetPaused");
		
		ABP_PRPlayerCharacter_IKv4_C_SetPaused_Params params {};
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnInventoryModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryMode                                     Mode                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnInventoryModeChanged(EInventoryMode Mode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnInventoryModeChanged");
		
		ABP_PRPlayerCharacter_IKv4_C_OnInventoryModeChanged_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemConfigInHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLeftHand                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPRItemConfig*                               itemConfig                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::SpawnItemConfigInHand(bool bLeftHand, class UPRItemConfig* itemConfig)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemConfigInHand");
		
		ABP_PRPlayerCharacter_IKv4_C_SpawnItemConfigInHand_Params params {};
		params.bLeftHand = bLeftHand;
		params.itemConfig = itemConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateHealthSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRStatStatus                                      HealthLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateHealthSounds(EPRStatStatus HealthLevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateHealthSounds");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateHealthSounds_Params params {};
		params.HealthLevel = HealthLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateStaminaSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRStatStatus                                      StaminaLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateStaminaSounds(EPRStatStatus StaminaLevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateStaminaSounds");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateStaminaSounds_Params params {};
		params.StaminaLevel = StaminaLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateNutritionSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRStatStatus                                      NutritionLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateNutritionSounds(EPRStatStatus NutritionLevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateNutritionSounds");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateNutritionSounds_Params params {};
		params.NutritionLevel = NutritionLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TriggerRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleAxis                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::TriggerRight(float AngleAxis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TriggerRight");
		
		ABP_PRPlayerCharacter_IKv4_C_TriggerRight_Params params {};
		params.AngleAxis = AngleAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TriggerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::TriggerLeft(float AxisAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TriggerLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_TriggerLeft_Params params {};
		params.AxisAngle = AxisAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CallNightGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::CallNightGlow(class UObject* Target, bool bOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CallNightGlow");
		
		ABP_PRPlayerCharacter_IKv4_C_CallNightGlow_Params params {};
		params.Target = Target;
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LerpRightGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDisableCollision                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bKeepHandSnapped                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::LerpRightGrip(class AActor* Actor, class UGripMotionControllerComponent* hand, bool bIsSlot, const struct FTransform& Offset, bool bDisableCollision, bool bKeepHandSnapped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LerpRightGrip");
		
		ABP_PRPlayerCharacter_IKv4_C_LerpRightGrip_Params params {};
		params.Actor = Actor;
		params.hand = hand;
		params.bIsSlot = bIsSlot;
		params.Offset = Offset;
		params.bDisableCollision = bDisableCollision;
		params.bKeepHandSnapped = bKeepHandSnapped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LerpLeftGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDisableCollision                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bKeepHandSnapped                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::LerpLeftGrip(class AActor* Actor, class UGripMotionControllerComponent* hand, bool bIsSlot, const struct FTransform& Offset, bool bDisableCollision, bool bKeepHandSnapped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LerpLeftGrip");
		
		ABP_PRPlayerCharacter_IKv4_C_LerpLeftGrip_Params params {};
		params.Actor = Actor;
		params.hand = hand;
		params.bIsSlot = bIsSlot;
		params.Offset = Offset;
		params.bDisableCollision = bDisableCollision;
		params.bKeepHandSnapped = bKeepHandSnapped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateItemInfos
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::UpdateItemInfos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateItemInfos");
		
		ABP_PRPlayerCharacter_IKv4_C_UpdateItemInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripMotionController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripToDrop                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     AngleVel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LinearVel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::DropGrip(class UGripMotionControllerComponent* GripMotionController, const struct FBPActorGripInformation& GripToDrop, const struct FVector& AngleVel, const struct FVector& LinearVel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropGrip");
		
		ABP_PRPlayerCharacter_IKv4_C_DropGrip_Params params {};
		params.GripMotionController = GripMotionController;
		params.GripToDrop = GripToDrop;
		params.AngleVel = AngleVel;
		params.LinearVel = LinearVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropAllGrips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripMotionController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bZeroVelo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::DropAllGrips(class UGripMotionControllerComponent* GripMotionController, bool bZeroVelo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropAllGrips");
		
		ABP_PRPlayerCharacter_IKv4_C_DropAllGrips_Params params {};
		params.GripMotionController = GripMotionController;
		params.bZeroVelo = bZeroVelo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.HandHaptics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsCurve                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::HandHaptics(EHapticsCurve Type, EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.HandHaptics");
		
		ABP_PRPlayerCharacter_IKv4_C_HandHaptics_Params params {};
		params.Type = Type;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnLanded");
		
		ABP_PRPlayerCharacter_IKv4_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BlockAll
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::BlockAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BlockAll");
		
		ABP_PRPlayerCharacter_IKv4_C_BlockAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ToggleAimSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ToggleAimSmoothing(bool bIsLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ToggleAimSmoothing");
		
		ABP_PRPlayerCharacter_IKv4_C_ToggleAimSmoothing_Params params {};
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckRest
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::CheckRest()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckRest");
		
		ABP_PRPlayerCharacter_IKv4_C_CheckRest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnItemInfoClickedRight
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnItemInfoClickedRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnItemInfoClickedRight");
		
		ABP_PRPlayerCharacter_IKv4_C_OnItemInfoClickedRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnItemInfoClickedLeft
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnItemInfoClickedLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnItemInfoClickedLeft");
		
		ABP_PRPlayerCharacter_IKv4_C_OnItemInfoClickedLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnMenuButtonClicked
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnMenuButtonClicked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnMenuButtonClicked");
		
		ABP_PRPlayerCharacter_IKv4_C_OnMenuButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.E1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::E1(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.E1");
		
		ABP_PRPlayerCharacter_IKv4_C_E1_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.E2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::E2(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.E2");
		
		ABP_PRPlayerCharacter_IKv4_C_E2_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LeftLerpTimeOut
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::LeftLerpTimeOut()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LeftLerpTimeOut");
		
		ABP_PRPlayerCharacter_IKv4_C_LeftLerpTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LeftLerpEnd
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::LeftLerpEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LeftLerpEnd");
		
		ABP_PRPlayerCharacter_IKv4_C_LeftLerpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReportPlayerLocation
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ReportPlayerLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReportPlayerLocation");
		
		ABP_PRPlayerCharacter_IKv4_C_ReportPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RightLerpTimeOut
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::RightLerpTimeOut()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RightLerpTimeOut");
		
		ABP_PRPlayerCharacter_IKv4_C_RightLerpTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RightLerpEnd
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::RightLerpEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RightLerpEnd");
		
		ABP_PRPlayerCharacter_IKv4_C_RightLerpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTransitionStartEvent
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnTransitionStartEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTransitionStartEvent");
		
		ABP_PRPlayerCharacter_IKv4_C_OnTransitionStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnMissionStateChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnMissionStateChangedEvent(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnMissionStateChangedEvent");
		
		ABP_PRPlayerCharacter_IKv4_C_OnMissionStateChangedEvent_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnLevelPrepare(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnLevelPrepare");
		
		ABP_PRPlayerCharacter_IKv4_C_OnLevelPrepare_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTransitionEndEvent
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnTransitionEndEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTransitionEndEvent");
		
		ABP_PRPlayerCharacter_IKv4_C_OnTransitionEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetOnLVLStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ResetOnLVLStart(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetOnLVLStart");
		
		ABP_PRPlayerCharacter_IKv4_C_ResetOnLVLStart_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PlayerResetEvent
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::PlayerResetEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PlayerResetEvent");
		
		ABP_PRPlayerCharacter_IKv4_C_PlayerResetEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.On Seated Mode Changed
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerCharacter_IKv4_C::OnSeatedModeChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.On Seated Mode Changed");
		
		ABP_PRPlayerCharacter_IKv4_C_OnSeatedModeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ExecuteUbergraph_BP_PRPlayerCharacter_IKv4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerCharacter_IKv4_C::ExecuteUbergraph_BP_PRPlayerCharacter_IKv4(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ExecuteUbergraph_BP_PRPlayerCharacter_IKv4");
		
		ABP_PRPlayerCharacter_IKv4_C_ExecuteUbergraph_BP_PRPlayerCharacter_IKv4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PRPlayerCharacter_IKv4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PRPlayerCharacter_IKv4_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C");
		return ptr;
	}

}


