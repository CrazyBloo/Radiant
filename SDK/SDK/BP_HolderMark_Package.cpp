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
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.GetDistances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLeftInRange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              leftDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRightInRange                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              rightDistance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HolderMark_C::GetDistances(bool* bLeftInRange, float* leftDistance, bool* bRightInRange, float* rightDistance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.GetDistances");
		
		ABP_HolderMark_C_GetDistances_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLeftInRange != nullptr)
			*bLeftInRange = params.bLeftInRange;
		if (leftDistance != nullptr)
			*leftDistance = params.leftDistance;
		if (bRightInRange != nullptr)
			*bRightInRange = params.bRightInRange;
		if (rightDistance != nullptr)
			*rightDistance = params.rightDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HolderMark_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.ReceiveEndPlay");
		
		ABP_HolderMark_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HolderMark_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.ReceiveBeginPlay");
		
		ABP_HolderMark_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.LinkActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorInHand                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HolderMark_C::LinkActor(class AActor* ActorInHand, bool bIsLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.LinkActor");
		
		ABP_HolderMark_C_LinkActor_Params params {};
		params.ActorInHand = ActorInHand;
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HolderMark_C::Highlight(bool bIsLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.Highlight");
		
		ABP_HolderMark_C_Highlight_Params params {};
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.Update
	 * 		Flags  -> ()
	 */
	void ABP_HolderMark_C::Update()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.Update");
		
		ABP_HolderMark_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.InitHolsterRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           holsterRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HolderMark_C::InitHolsterRef(class UHolsterComponent* holsterRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.InitHolsterRef");
		
		ABP_HolderMark_C_InitHolsterRef_Params params {};
		params.holsterRef = holsterRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HolderMark.BP_HolderMark_C.ExecuteUbergraph_BP_HolderMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HolderMark_C::ExecuteUbergraph_BP_HolderMark(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HolderMark.BP_HolderMark_C.ExecuteUbergraph_BP_HolderMark");
		
		ABP_HolderMark_C_ExecuteUbergraph_BP_HolderMark_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HolderMark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HolderMark_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HolderMark.BP_HolderMark_C");
		return ptr;
	}

}


