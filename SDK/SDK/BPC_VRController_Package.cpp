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
	 * 		Name   -> Function BPC_VRController.BPC_VRController_C.IsMeshVisibile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_VRController_C::IsMeshVisibile(bool* Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_VRController.BPC_VRController_C.IsMeshVisibile");
		
		UBPC_VRController_C_IsMeshVisibile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_VRController.BPC_VRController_C.GetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_VRController_C::GetMaterial(class UMaterialInstanceDynamic** Material)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_VRController.BPC_VRController_C.GetMaterial");
		
		UBPC_VRController_C_GetMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_VRController.BPC_VRController_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_VRController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_VRController.BPC_VRController_C.ReceiveEndPlay");
		
		UBPC_VRController_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_VRController.BPC_VRController_C.UpdateControllerMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_VRController_C::UpdateControllerMesh(class USceneComponent* Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_VRController.BPC_VRController_C.UpdateControllerMesh");
		
		UBPC_VRController_C_UpdateControllerMesh_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_VRController.BPC_VRController_C.SetMeshVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_VRController_C::SetMeshVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_VRController.BPC_VRController_C.SetMeshVisibility");
		
		UBPC_VRController_C_SetMeshVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_VRController.BPC_VRController_C.ExecuteUbergraph_BPC_VRController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_VRController_C::ExecuteUbergraph_BPC_VRController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_VRController.BPC_VRController_C.ExecuteUbergraph_BPC_VRController");
		
		UBPC_VRController_C_ExecuteUbergraph_BPC_VRController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_VRController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_VRController_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_VRController.BPC_VRController_C");
		return ptr;
	}

}


