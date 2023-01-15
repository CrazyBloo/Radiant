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
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTraceStartComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::GetTraceStartComponent(class USceneComponent** Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTraceStartComponent");
		
		ABP_Teleport_Controller_C_GetTraceStartComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetMotionController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::GetMotionController(class UGripMotionControllerComponent** Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetMotionController");
		
		ABP_Teleport_Controller_C_GetMotionController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetVRLocation
	 * 		Flags  -> ()
	 */
	struct FVector ABP_Teleport_Controller_C::GetVRLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetVRLocation");
		
		ABP_Teleport_Controller_C_GetVRLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.TeleportHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ForwardBackwardAxis                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::TeleportHandle(float ForwardBackwardAxis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.TeleportHandle");
		
		ABP_Teleport_Controller_C_TeleportHandle_Params params {};
		params.ForwardBackwardAxis = ForwardBackwardAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ToggleTick
	 * 		Flags  -> ()
	 */
	void ABP_Teleport_Controller_C::ToggleTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ToggleTick");
		
		ABP_Teleport_Controller_C_ToggleTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleWorldLocAndForwardVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLoc                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ForwardVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::GetTeleWorldLocAndForwardVector(struct FVector* WorldLoc, struct FVector* ForwardVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleWorldLocAndForwardVector");
		
		ABP_Teleport_Controller_C_GetTeleWorldLocAndForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLoc != nullptr)
			*WorldLoc = params.WorldLoc;
		if (ForwardVector != nullptr)
			*ForwardVector = params.ForwardVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleportDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RelativeToHMD                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Teleport_Controller_C::GetTeleportDestination(bool RelativeToHMD, struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleportDestination");
		
		ABP_Teleport_Controller_C_GetTeleportDestination_Params params {};
		params.RelativeToHMD = RelativeToHMD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcEndpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValidLocationFound                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Teleport_Controller_C::UpdateArcEndpoint(const struct FVector& NewLocation, bool ValidLocationFound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcEndpoint");
		
		ABP_Teleport_Controller_C_UpdateArcEndpoint_Params params {};
		params.NewLocation = NewLocation;
		params.ValidLocationFound = ValidLocationFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FoundValidLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             SplinePoints                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Teleport_Controller_C::UpdateArcSpline(bool FoundValidLocation, TArray<struct FVector>* SplinePoints)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcSpline");
		
		ABP_Teleport_Controller_C_UpdateArcSpline_Params params {};
		params.FoundValidLocation = FoundValidLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplinePoints != nullptr)
			*SplinePoints = params.SplinePoints;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearArc
	 * 		Flags  -> ()
	 */
	void ABP_Teleport_Controller_C::ClearArc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearArc");
		
		ABP_Teleport_Controller_C_ClearArc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.TraceTeleportDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             TracePoints                                                (Parm, OutParm)
	 * 		struct FVector                                     TraceLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::TraceTeleportDestination(bool* success, TArray<struct FVector>* TracePoints, struct FVector* TraceLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.TraceTeleportDestination");
		
		ABP_Teleport_Controller_C_TraceTeleportDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (TracePoints != nullptr)
			*TracePoints = params.TracePoints;
		if (TraceLocation != nullptr)
			*TraceLocation = params.TraceLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.DisableTeleporter
	 * 		Flags  -> ()
	 */
	void ABP_Teleport_Controller_C::DisableTeleporter()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.DisableTeleporter");
		
		ABP_Teleport_Controller_C_DisableTeleporter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ActivateTeleporter
	 * 		Flags  -> ()
	 */
	void ABP_Teleport_Controller_C::ActivateTeleporter()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ActivateTeleporter");
		
		ABP_Teleport_Controller_C_ActivateTeleporter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.RumbleController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::RumbleController(float Intensity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.RumbleController");
		
		ABP_Teleport_Controller_C_RumbleController_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveTick");
		
		ABP_Teleport_Controller_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Teleport_Controller_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveBeginPlay");
		
		ABP_Teleport_Controller_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveEndPlay");
		
		ABP_Teleport_Controller_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.TickArc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::TickArc(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.TickArc");
		
		ABP_Teleport_Controller_C_TickArc_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Teleport_Controller.BP_Teleport_Controller_C.ExecuteUbergraph_BP_Teleport_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Teleport_Controller_C::ExecuteUbergraph_BP_Teleport_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ExecuteUbergraph_BP_Teleport_Controller");
		
		ABP_Teleport_Controller_C_ExecuteUbergraph_BP_Teleport_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Teleport_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Teleport_Controller_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Teleport_Controller.BP_Teleport_Controller_C");
		return ptr;
	}

}


