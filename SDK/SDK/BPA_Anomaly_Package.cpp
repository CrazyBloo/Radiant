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
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.CopyNativeToBp
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::CopyNativeToBp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.CopyNativeToBp");
		
		ABPA_Anomaly_C_CopyNativeToBp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.CopyBpToNative
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::CopyBpToNative()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.CopyBpToNative");
		
		ABPA_Anomaly_C_CopyBpToNative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.CheckIfDiscovered
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::CheckIfDiscovered()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.CheckIfDiscovered");
		
		ABPA_Anomaly_C_CheckIfDiscovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.GetDamageDealerTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABPA_Anomaly_C::GetDamageDealerTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.GetDamageDealerTag");
		
		ABPA_Anomaly_C_GetDamageDealerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.GetAnomalyInfo
	 * 		Flags  -> ()
	 */
	struct FPRAnomalyInfo ABPA_Anomaly_C::GetAnomalyInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.GetAnomalyInfo");
		
		ABPA_Anomaly_C_GetAnomalyInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.GetDamageDealerName
	 * 		Flags  -> ()
	 */
	class FText ABPA_Anomaly_C::GetDamageDealerName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.GetDamageDealerName");
		
		ABPA_Anomaly_C_GetDamageDealerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.CheckIfSignificant
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::CheckIfSignificant()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.CheckIfSignificant");
		
		ABPA_Anomaly_C_CheckIfSignificant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.GetTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABPA_Anomaly_C::GetTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.GetTypeID");
		
		ABPA_Anomaly_C_GetTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString ABPA_Anomaly_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.GetInstanceID");
		
		ABPA_Anomaly_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.GetRadius
	 * 		Flags  -> ()
	 */
	float ABPA_Anomaly_C::GetRadius()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.GetRadius");
		
		ABPA_Anomaly_C_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.CheckItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               inInventory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Anomaly_C::CheckItemActor(class AActor* Actor, bool* inInventory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.CheckItemActor");
		
		ABPA_Anomaly_C_CheckItemActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inInventory != nullptr)
			*inInventory = params.inInventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.Fn_EnableEverything
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::Fn_EnableEverything()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.Fn_EnableEverything");
		
		ABPA_Anomaly_C_Fn_EnableEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.Fn_DisableEverything
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::Fn_DisableEverything()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.Fn_DisableEverything");
		
		ABPA_Anomaly_C_Fn_DisableEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ObjectArr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Anomaly_C::Fn_CheckArray(TArray<class UObject*>* ObjectArr, bool* IsValid)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckArray");
		
		ABPA_Anomaly_C_Fn_CheckArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectArr != nullptr)
			*ObjectArr = params.ObjectArr;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckLOS
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::Fn_CheckLOS()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckLOS");
		
		ABPA_Anomaly_C_Fn_CheckLOS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasOverlaps                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorArray                                                 (Parm, OutParm)
	 */
	void ABPA_Anomaly_C::Fn_CheckOverlap(bool* HasOverlaps, TArray<class AActor*>* ActorArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckOverlap");
		
		ABPA_Anomaly_C_Fn_CheckOverlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasOverlaps != nullptr)
			*HasOverlaps = params.HasOverlaps;
		if (ActorArray != nullptr)
			*ActorArray = params.ActorArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Anomaly_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.OnLevelStarted");
		
		ABPA_Anomaly_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.OverlapTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Anomaly_C::OverlapTriggered(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.OverlapTriggered");
		
		ABPA_Anomaly_C_OverlapTriggered_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.OnOverlapActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Anomaly_C::OnOverlapActor(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.OnOverlapActor");
		
		ABPA_Anomaly_C_OnOverlapActor_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABPA_Anomaly_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.OnOverlapTimer");
		
		ABPA_Anomaly_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Anomaly.BPA_Anomaly_C.ExecuteUbergraph_BPA_Anomaly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Anomaly_C::ExecuteUbergraph_BPA_Anomaly(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Anomaly.BPA_Anomaly_C.ExecuteUbergraph_BPA_Anomaly");
		
		ABPA_Anomaly_C_ExecuteUbergraph_BPA_Anomaly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Anomaly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Anomaly_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Anomaly.BPA_Anomaly_C");
		return ptr;
	}

}


