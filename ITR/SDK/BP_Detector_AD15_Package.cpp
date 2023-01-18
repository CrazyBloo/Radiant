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
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.FindNearestActorLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Detector_AD15_C::FindNearestActorLocation(struct FVector* Location, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.FindNearestActorLocation");
		
		ABP_Detector_AD15_C_FindNearestActorLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.FindArtifactsInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorArr                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ArtifactsInRange                                           (Parm, OutParm)
	 */
	void ABP_Detector_AD15_C::FindArtifactsInRange(TArray<class AActor*>* ActorArr, class AActor* Actor, TArray<class AActor*>* ArtifactsInRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.FindArtifactsInRange");
		
		ABP_Detector_AD15_C_FindArtifactsInRange_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorArr != nullptr)
			*ActorArr = params.ActorArr;
		if (ArtifactsInRange != nullptr)
			*ArtifactsInRange = params.ArtifactsInRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.CheckDetectedActors
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::CheckDetectedActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.CheckDetectedActors");
		
		ABP_Detector_AD15_C_CheckDetectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.CalculateDetaction_RangeBased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DetectorValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detector_AD15_C::CalculateDetaction_RangeBased(const struct FVector& ActorLocation, float MaxRange, float* DetectorValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.CalculateDetaction_RangeBased");
		
		ABP_Detector_AD15_C_CalculateDetaction_RangeBased_Params params {};
		params.ActorLocation = ActorLocation;
		params.MaxRange = MaxRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetectorValue != nullptr)
			*DetectorValue = params.DetectorValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.CalculateDetection_WithDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DetectorValueDistance                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DetectorValueDirection                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detector_AD15_C::CalculateDetection_WithDirection(const struct FVector& ActorLocation, float MaxRange, float* DetectorValueDistance, float* DetectorValueDirection)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.CalculateDetection_WithDirection");
		
		ABP_Detector_AD15_C_CalculateDetection_WithDirection_Params params {};
		params.ActorLocation = ActorLocation;
		params.MaxRange = MaxRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetectorValueDistance != nullptr)
			*DetectorValueDistance = params.DetectorValueDistance;
		if (DetectorValueDirection != nullptr)
			*DetectorValueDirection = params.DetectorValueDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_0__FinishedFunc");
		
		ABP_Detector_AD15_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_0__UpdateFunc");
		
		ABP_Detector_AD15_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_1__FinishedFunc");
		
		ABP_Detector_AD15_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_1__UpdateFunc");
		
		ABP_Detector_AD15_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.MadeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_Artifact_C*                             ArtRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detector_AD15_C::MadeVisible(class ABPA_Artifact_C* ArtRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.MadeVisible");
		
		ABP_Detector_AD15_C_MadeVisible_Params params {};
		params.ArtRef = ArtRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveBeginPlay");
		
		ABP_Detector_AD15_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detector_AD15_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveTick");
		
		ABP_Detector_AD15_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Detector_AD15_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.OnGrip");
		
		ABP_Detector_AD15_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.OnUsed");
		
		ABP_Detector_AD15_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.Cooldown
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::Cooldown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.Cooldown");
		
		ABP_Detector_AD15_C_Cooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.Flash
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::Flash()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.Flash");
		
		ABP_Detector_AD15_C_Flash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveDestroyed");
		
		ABP_Detector_AD15_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.FindArtifacts
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::FindArtifacts()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.FindArtifacts");
		
		ABP_Detector_AD15_C_FindArtifacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Detector_AD15_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.ThumbLeft");
		
		ABP_Detector_AD15_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detector_AD15.BP_Detector_AD15_C.ExecuteUbergraph_BP_Detector_AD15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detector_AD15_C::ExecuteUbergraph_BP_Detector_AD15(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detector_AD15.BP_Detector_AD15_C.ExecuteUbergraph_BP_Detector_AD15");
		
		ABP_Detector_AD15_C_ExecuteUbergraph_BP_Detector_AD15_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Detector_AD15_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Detector_AD15_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Detector_AD15.BP_Detector_AD15_C");
		return ptr;
	}

}


