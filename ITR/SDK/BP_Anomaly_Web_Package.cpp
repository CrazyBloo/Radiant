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
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.SpawnMeshes
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Web_C::SpawnMeshes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.SpawnMeshes");
		
		ABP_Anomaly_Web_C_SpawnMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.FindPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValidPoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             Points                                                     (Parm, OutParm)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm)
	 */
	void ABP_Anomaly_Web_C::FindPoints(bool* HasValidPoint, TArray<struct FVector>* Points, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.FindPoints");
		
		ABP_Anomaly_Web_C_FindPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasValidPoint != nullptr)
			*HasValidPoint = params.HasValidPoint;
		if (Points != nullptr)
			*Points = params.Points;
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.SplineMesh
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Web_C::SplineMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.SplineMesh");
		
		ABP_Anomaly_Web_C_SplineMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.FindPairofPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValidPair                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             Points                                                     (Parm, OutParm)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm)
	 */
	void ABP_Anomaly_Web_C::FindPairofPoints(bool* HasValidPair, TArray<struct FVector>* Points, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.FindPairofPoints");
		
		ABP_Anomaly_Web_C_FindPairofPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasValidPair != nullptr)
			*HasValidPair = params.HasValidPair;
		if (Points != nullptr)
			*Points = params.Points;
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.Overlapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Anomaly_Web_C::Overlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.Overlapped");
		
		ABP_Anomaly_Web_C_Overlapped_Params params {};
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
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.PushToPoolActor
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Web_C::PushToPoolActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.PushToPoolActor");
		
		ABP_Anomaly_Web_C_PushToPoolActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.OnSetupEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Web_C::OnSetupEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.OnSetupEvent");
		
		ABP_Anomaly_Web_C_OnSetupEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Web_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.ReceiveBeginPlay");
		
		ABP_Anomaly_Web_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Web_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.ReceiveEndPlay");
		
		ABP_Anomaly_Web_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Web.BP_Anomaly_Web_C.ExecuteUbergraph_BP_Anomaly_Web
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Web_C::ExecuteUbergraph_BP_Anomaly_Web(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Web.BP_Anomaly_Web_C.ExecuteUbergraph_BP_Anomaly_Web");
		
		ABP_Anomaly_Web_C_ExecuteUbergraph_BP_Anomaly_Web_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Web_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Web_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Web.BP_Anomaly_Web_C");
		return ptr;
	}

}


