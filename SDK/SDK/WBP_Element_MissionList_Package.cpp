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
	 * 		Name   -> Function WBP_Element_MissionList.WBP_Element_MissionList_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Element_MissionList_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_MissionList.WBP_Element_MissionList_C.Construct");
		
		UWBP_Element_MissionList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_MissionList.WBP_Element_MissionList_C.OnMissionPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_MissionList_C::OnMissionPress(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_MissionList.WBP_Element_MissionList_C.OnMissionPress");
		
		UWBP_Element_MissionList_C_OnMissionPress_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_MissionList.WBP_Element_MissionList_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_Element_MissionList_C::Update()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_MissionList.WBP_Element_MissionList_C.Update");
		
		UWBP_Element_MissionList_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_MissionList.WBP_Element_MissionList_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionData*>                        MissionData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Element_MissionList_C::Setup(TArray<class UMissionData*> MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_MissionList.WBP_Element_MissionList_C.Setup");
		
		UWBP_Element_MissionList_C_Setup_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_MissionList.WBP_Element_MissionList_C.ExecuteUbergraph_WBP_Element_MissionList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_MissionList_C::ExecuteUbergraph_WBP_Element_MissionList(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_MissionList.WBP_Element_MissionList_C.ExecuteUbergraph_WBP_Element_MissionList");
		
		UWBP_Element_MissionList_C_ExecuteUbergraph_WBP_Element_MissionList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_MissionList.WBP_Element_MissionList_C.OnMissionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_MissionList_C::OnMissionSelected__DelegateSignature(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_MissionList.WBP_Element_MissionList_C.OnMissionSelected__DelegateSignature");
		
		UWBP_Element_MissionList_C_OnMissionSelected__DelegateSignature_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_MissionList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_MissionList_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_MissionList.WBP_Element_MissionList_C");
		return ptr;
	}

}


