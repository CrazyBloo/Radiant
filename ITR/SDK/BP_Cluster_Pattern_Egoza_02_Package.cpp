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
	 * 		Name   -> Function BP_Cluster_Pattern_Egoza-02.BP_Cluster_Pattern_Egoza-02_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Cluster_Pattern_Egoza02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cluster_Pattern_Egoza-02.BP_Cluster_Pattern_Egoza-02_C.ReceiveBeginPlay");
		
		ABP_Cluster_Pattern_Egoza02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cluster_Pattern_Egoza-02.BP_Cluster_Pattern_Egoza-02_C.ExecuteUbergraph_BP_Cluster_Pattern_Egoza-02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cluster_Pattern_Egoza02_C::ExecuteUbergraph_BP_Cluster_Pattern_Egoza02(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cluster_Pattern_Egoza-02.BP_Cluster_Pattern_Egoza-02_C.ExecuteUbergraph_BP_Cluster_Pattern_Egoza-02");
		
		ABP_Cluster_Pattern_Egoza02_C_ExecuteUbergraph_BP_Cluster_Pattern_Egoza02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cluster_Pattern_Egoza02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cluster_Pattern_Egoza02_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cluster_Pattern_Egoza_02.BP_Cluster_Pattern_Egoza-02_C");
		return ptr;
	}

}


