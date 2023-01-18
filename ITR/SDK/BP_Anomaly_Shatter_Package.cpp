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
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.FindPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValidPoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             PointArr                                                   (Parm, OutParm)
	 * 		TArray<struct FVector>                             Normals                                                    (Parm, OutParm)
	 */
	void ABP_Anomaly_Shatter_C::FindPoints(bool* HasValidPoint, TArray<struct FVector>* PointArr, TArray<struct FVector>* Normals)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.FindPoints");
		
		ABP_Anomaly_Shatter_C_FindPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasValidPoint != nullptr)
			*HasValidPoint = params.HasValidPoint;
		if (PointArr != nullptr)
			*PointArr = params.PointArr;
		if (Normals != nullptr)
			*Normals = params.Normals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.Spawn
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Shatter_C::Spawn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.Spawn");
		
		ABP_Anomaly_Shatter_C_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Shatter_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.UserConstructionScript");
		
		ABP_Anomaly_Shatter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ChargeComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChargeValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Shatter_C::ChargeComponent(int32_t Index, float ChargeValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ChargeComponent");
		
		ABP_Anomaly_Shatter_C_ChargeComponent_Params params {};
		params.Index = Index;
		params.ChargeValue = ChargeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Shatter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ReceiveTick");
		
		ABP_Anomaly_Shatter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Shatter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ReceiveBeginPlay");
		
		ABP_Anomaly_Shatter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.Explode
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Shatter_C::Explode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.Explode");
		
		ABP_Anomaly_Shatter_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.CheckSun
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Shatter_C::CheckSun()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.CheckSun");
		
		ABP_Anomaly_Shatter_C_CheckSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.LightOn_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Shatter_C::LightOn_2(const struct FVector& Location, class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.LightOn_2");
		
		ABP_Anomaly_Shatter_C_LightOn_2_Params params {};
		params.Location = Location;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ExecuteUbergraph_BP_Anomaly_Shatter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Shatter_C::ExecuteUbergraph_BP_Anomaly_Shatter(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ExecuteUbergraph_BP_Anomaly_Shatter");
		
		ABP_Anomaly_Shatter_C_ExecuteUbergraph_BP_Anomaly_Shatter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Shatter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Shatter_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Shatter.BP_Anomaly_Shatter_C");
		return ptr;
	}

}


