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
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.UpdateContent
	 * 		Flags  -> ()
	 */
	void UBPC_AmmoBelt_C::UpdateContent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.UpdateContent");
		
		UBPC_AmmoBelt_C_UpdateContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.CollectPoints
	 * 		Flags  -> ()
	 */
	void UBPC_AmmoBelt_C::CollectPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.CollectPoints");
		
		UBPC_AmmoBelt_C_CollectPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.UpdateBullets
	 * 		Flags  -> ()
	 */
	void UBPC_AmmoBelt_C::UpdateBullets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.UpdateBullets");
		
		UBPC_AmmoBelt_C_UpdateBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_AmmoBelt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.ReceiveBeginPlay");
		
		UBPC_AmmoBelt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      itemInstanceID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_AmmoBelt_C::Initialize(const class FString& itemInstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.Initialize");
		
		UBPC_AmmoBelt_C_Initialize_Params params {};
		params.itemInstanceID = itemInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.OnComponentBeginOverlap_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPC_AmmoBelt_C::OnComponentBeginOverlap_Event_1(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.OnComponentBeginOverlap_Event_1");
		
		UBPC_AmmoBelt_C_OnComponentBeginOverlap_Event_1_Params params {};
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
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UBPC_AmmoBelt_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.OnGrip");
		
		UBPC_AmmoBelt_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AmmoBelt.BPC_AmmoBelt_C.ExecuteUbergraph_BPC_AmmoBelt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AmmoBelt_C::ExecuteUbergraph_BPC_AmmoBelt(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AmmoBelt.BPC_AmmoBelt_C.ExecuteUbergraph_BPC_AmmoBelt");
		
		UBPC_AmmoBelt_C_ExecuteUbergraph_BPC_AmmoBelt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AmmoBelt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AmmoBelt_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AmmoBelt.BPC_AmmoBelt_C");
		return ptr;
	}

}


