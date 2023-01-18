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
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetCleanableVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumCleanableVert                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetCleanableVertices(int32_t* NumCleanableVert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetCleanableVertices");
		
		ABP_FirearmItem_C_GetCleanableVertices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumCleanableVert != nullptr)
			*NumCleanableVert = params.NumCleanableVert;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetCleanableMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                CleanableMeshes                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_FirearmItem_C::GetCleanableMeshes(TArray<class UStaticMeshComponent*>* CleanableMeshes)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetCleanableMeshes");
		
		ABP_FirearmItem_C_GetCleanableMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CleanableMeshes != nullptr)
			*CleanableMeshes = params.CleanableMeshes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetRepairDurabilityRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMinMaxFloat                                DurabilityRange                                            (Parm, OutParm, NoDestructor)
	 */
	void ABP_FirearmItem_C::GetRepairDurabilityRange(const struct FGameplayTag& Requestor, struct FMinMaxFloat* DurabilityRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetRepairDurabilityRange");
		
		ABP_FirearmItem_C_GetRepairDurabilityRange_Params params {};
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DurabilityRange != nullptr)
			*DurabilityRange = params.DurabilityRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetRefsForRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                RepairRequestor                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBPC_ItemDurability_C*                       DurabilityComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RT                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetRefsForRepair(const struct FGameplayTag& RepairRequestor, bool* Valid, class UBPC_ItemDurability_C** DurabilityComponent, class UTextureRenderTarget2D** RT)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetRefsForRepair");
		
		ABP_FirearmItem_C_GetRefsForRepair_Params params {};
		params.RepairRequestor = RepairRequestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (DurabilityComponent != nullptr)
			*DurabilityComponent = params.DurabilityComponent;
		if (RT != nullptr)
			*RT = params.RT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsSmoothingScriptOn
	 * 		Flags  -> ()
	 */
	bool ABP_FirearmItem_C::IsSmoothingScriptOn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsSmoothingScriptOn");
		
		ABP_FirearmItem_C_IsSmoothingScriptOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetWeaponInfo
	 * 		Flags  -> ()
	 */
	struct FWeaponInfo ABP_FirearmItem_C::GetWeaponInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetWeaponInfo");
		
		ABP_FirearmItem_C_GetWeaponInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsLoadingLocked
	 * 		Flags  -> ()
	 */
	bool ABP_FirearmItem_C::IsLoadingLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsLoadingLocked");
		
		ABP_FirearmItem_C_IsLoadingLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetAmmoContainerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoContainerData                          Data                                                       (Parm, OutParm)
	 */
	void ABP_FirearmItem_C::GetAmmoContainerData(struct FAmmoContainerData* Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetAmmoContainerData");
		
		ABP_FirearmItem_C_GetAmmoContainerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetAmmoContainerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPRAmmoContainerInfo                        Info                                                       (Parm, OutParm)
	 */
	void ABP_FirearmItem_C::GetAmmoContainerInfo(struct FPRAmmoContainerInfo* Info)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetAmmoContainerInfo");
		
		ABP_FirearmItem_C_GetAmmoContainerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetSmoothingScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_Smoothing_C*                             SmoothingScript                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetSmoothingScript(class UGS_Smoothing_C** SmoothingScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetSmoothingScript");
		
		ABP_FirearmItem_C_GetSmoothingScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SmoothingScript != nullptr)
			*SmoothingScript = params.SmoothingScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetCleaningBarrelLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetCleaningBarrelLength(float* Length)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetCleaningBarrelLength");
		
		ABP_FirearmItem_C_GetCleaningBarrelLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetShootingPointTransform");
		
		ABP_FirearmItem_C_GetShootingPointTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (Parent != nullptr)
			*Parent = params.Parent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsSmoothingDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDisabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsSmoothingDisabled(bool* bIsDisabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsSmoothingDisabled");
		
		ABP_FirearmItem_C_IsSmoothingDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsDisabled != nullptr)
			*bIsDisabled = params.bIsDisabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetCurrentMaxSmoothing
	 * 		Flags  -> ()
	 */
	float ABP_FirearmItem_C::GetCurrentMaxSmoothing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetCurrentMaxSmoothing");
		
		ABP_FirearmItem_C_GetCurrentMaxSmoothing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Check Mesh to Sight Alignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        MeshToAlign                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraComponent*                            VrCamera                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAligned                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              WeaponSmootingAlpha                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::CheckMeshtoSightAlignment(class UStaticMeshComponent* MeshToAlign, class UCameraComponent* VrCamera, bool* bIsAligned, float* WeaponSmootingAlpha)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Check Mesh to Sight Alignment");
		
		ABP_FirearmItem_C_CheckMeshtoSightAlignment_Params params {};
		params.MeshToAlign = MeshToAlign;
		params.VrCamera = VrCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsAligned != nullptr)
			*bIsAligned = params.bIsAligned;
		if (WeaponSmootingAlpha != nullptr)
			*WeaponSmootingAlpha = params.WeaponSmootingAlpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SwitchSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSwitchOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::SwitchSmoothing(bool bSwitchOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SwitchSmoothing");
		
		ABP_FirearmItem_C_SwitchSmoothing_Params params {};
		params.bSwitchOn = bSwitchOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetParentFromFirearmOrProxy
	 * 		Flags  -> ()
	 */
	class AActor* ABP_FirearmItem_C::GetParentFromFirearmOrProxy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetParentFromFirearmOrProxy");
		
		ABP_FirearmItem_C_GetParentFromFirearmOrProxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.AttachFirePointToProxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FirePointsocket                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::AttachFirePointToProxy(const class FName& FirePointsocket)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.AttachFirePointToProxy");
		
		ABP_FirearmItem_C_AttachFirePointToProxy_Params params {};
		params.FirePointsocket = FirePointsocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsFireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_FirearmItem_C::IsFireMode(EWeaponFireMode FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsFireMode");
		
		ABP_FirearmItem_C_IsFireMode_Params params {};
		params.FireMode = FireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Next Fire Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWeaponFireMode                                    FireMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::NextFireMode(bool* Changed, EWeaponFireMode* FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Next Fire Mode");
		
		ABP_FirearmItem_C_NextFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Changed != nullptr)
			*Changed = params.Changed;
		if (FireMode != nullptr)
			*FireMode = params.FireMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetReliability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Reliability                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetReliability(float* Reliability)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetReliability");
		
		ABP_FirearmItem_C_GetReliability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reliability != nullptr)
			*Reliability = params.Reliability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Is Going to Jam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               jammed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsGoingtoJam(bool* jammed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Is Going to Jam");
		
		ABP_FirearmItem_C_IsGoingtoJam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (jammed != nullptr)
			*jammed = params.jammed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Recoil                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::GetRecoil(struct FTransform* Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetRecoil");
		
		ABP_FirearmItem_C_GetRecoil_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Recoil != nullptr)
			*Recoil = params.Recoil;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetGunScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_GunTools*                                Gun                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::GetGunScript(class UGS_GunTools** Gun)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetGunScript");
		
		ABP_FirearmItem_C_GetGunScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gun != nullptr)
			*Gun = params.Gun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsOn");
		
		ABP_FirearmItem_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Is Attachment Slot Busy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemSlot                                          socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               busy                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsAttachmentSlotBusy(EItemSlot socket, bool* busy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Is Attachment Slot Busy");
		
		ABP_FirearmItem_C_IsAttachmentSlotBusy_Params params {};
		params.socket = socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (busy != nullptr)
			*busy = params.busy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.UpdateVirtualStock
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::UpdateVirtualStock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.UpdateVirtualStock");
		
		ABP_FirearmItem_C_UpdateVirtualStock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetDefaultPoseType
	 * 		Flags  -> ()
	 */
	EPRHandPoseType ABP_FirearmItem_C::GetDefaultPoseType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetDefaultPoseType");
		
		ABP_FirearmItem_C_GetDefaultPoseType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Reconfigure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::Reconfigure(class UInventoryItem* InventoryItem, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Reconfigure");
		
		ABP_FirearmItem_C_Reconfigure_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsItemActorAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsItemActorAttachmentsLocked(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsItemActorAttachmentsLocked");
		
		ABP_FirearmItem_C_IsItemActorAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.PerUsageDamage
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::PerUsageDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.PerUsageDamage");
		
		ABP_FirearmItem_C_PerUsageDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsItemSelfAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Attachment                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsItemSelfAttachment(class UInventoryItem* Item, bool* Attachment)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsItemSelfAttachment");
		
		ABP_FirearmItem_C_IsItemSelfAttachment_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachment != nullptr)
			*Attachment = params.Attachment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Update Accuracy
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::UpdateAccuracy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Update Accuracy");
		
		ABP_FirearmItem_C_UpdateAccuracy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_FirearmItem_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.GetAttachmentsList");
		
		ABP_FirearmItem_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.UpdateSilencerEffects
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::UpdateSilencerEffects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.UpdateSilencerEffects");
		
		ABP_FirearmItem_C_UpdateSilencerEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.IsSilencerAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SilencerAttached                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::IsSilencerAttached(bool* SilencerAttached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.IsSilencerAttached");
		
		ABP_FirearmItem_C_IsSilencerAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SilencerAttached != nullptr)
			*SilencerAttached = params.SilencerAttached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Timeline_0__FinishedFunc");
		
		ABP_FirearmItem_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Timeline_0__UpdateFunc");
		
		ABP_FirearmItem_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.RequestUpdateMaterial
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::RequestUpdateMaterial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.RequestUpdateMaterial");
		
		ABP_FirearmItem_C_RequestUpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnAmmoAdded
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnAmmoAdded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnAmmoAdded");
		
		ABP_FirearmItem_C_OnAmmoAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnAmmoRemoved");
		
		ABP_FirearmItem_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SetLoadingLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::SetLoadingLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SetLoadingLock");
		
		ABP_FirearmItem_C_SetLoadingLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OutOfAmmo
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OutOfAmmo");
		
		ABP_FirearmItem_C_OutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ReloadFinished
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::ReloadFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ReloadFinished");
		
		ABP_FirearmItem_C_ReloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.PlayerWeaponFired
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::PlayerWeaponFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.PlayerWeaponFired");
		
		ABP_FirearmItem_C_PlayerWeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_FirearmItem_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnGrip");
		
		ABP_FirearmItem_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnEndUsed");
		
		ABP_FirearmItem_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnGripRelease");
		
		ABP_FirearmItem_C_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.EndFireGun
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::EndFireGun()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.EndFireGun");
		
		ABP_FirearmItem_C_EndFireGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripOwningController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             SecondaryGripComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_FirearmItem_C::OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryGrip");
		
		ABP_FirearmItem_C_OnSecondaryGrip_Params params {};
		params.GripOwningController = GripOwningController;
		params.SecondaryGripComponent = SecondaryGripComponent;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripOwningController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ReleasingSecondaryGripComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_FirearmItem_C::OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryGripRelease");
		
		ABP_FirearmItem_C_OnSecondaryGripRelease_Params params {};
		params.GripOwningController = GripOwningController;
		params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_FirearmItem_C::BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_FirearmItem_C_BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Grip Lock
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::GripLock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Grip Lock");
		
		ABP_FirearmItem_C_GripLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.Grip Unlock
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::GripUnlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.Grip Unlock");
		
		ABP_FirearmItem_C_GripUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SetItemActorAttachmentsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::SetItemActorAttachmentsLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SetItemActorAttachmentsLock");
		
		ABP_FirearmItem_C_SetItemActorAttachmentsLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnReconfigure");
		
		ABP_FirearmItem_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnBulletFired
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnBulletFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnBulletFired");
		
		ABP_FirearmItem_C_OnBulletFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.BotConfigure
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::BotConfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.BotConfigure");
		
		ABP_FirearmItem_C_BotConfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.PlayFireHandHaptics
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::PlayFireHandHaptics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.PlayFireHandHaptics");
		
		ABP_FirearmItem_C_PlayFireHandHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ThumbLeft");
		
		ABP_FirearmItem_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnFiremodeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::OnFiremodeChanged(EWeaponFireMode FireMode, bool PlaySound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnFiremodeChanged");
		
		ABP_FirearmItem_C_OnFiremodeChanged_Params params {};
		params.FireMode = FireMode;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnUsed");
		
		ABP_FirearmItem_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.VisualRecoil
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::VisualRecoil()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.VisualRecoil");
		
		ABP_FirearmItem_C_VisualRecoil_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnItemTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::OnItemTaken(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnItemTaken");
		
		ABP_FirearmItem_C_OnItemTaken_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SubtileComment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_FirearmItem_C::SubtileComment(const class FText& Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SubtileComment");
		
		ABP_FirearmItem_C_SubtileComment_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.VirtualStockToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::VirtualStockToggle(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.VirtualStockToggle");
		
		ABP_FirearmItem_C_VirtualStockToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SetAdditionalSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SmoothAlpha                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::SetAdditionalSmoothing(float SmoothAlpha)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SetAdditionalSmoothing");
		
		ABP_FirearmItem_C_SetAdditionalSmoothing_Params params {};
		params.SmoothAlpha = SmoothAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SetupCleaning
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::SetupCleaning()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SetupCleaning");
		
		ABP_FirearmItem_C_SetupCleaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ApplyRecoil
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::ApplyRecoil()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ApplyRecoil");
		
		ABP_FirearmItem_C_ApplyRecoil_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.UpdateAttachmentSlots");
		
		ABP_FirearmItem_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.AttachmentAttached");
		
		ABP_FirearmItem_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.AttachmentDetached");
		
		ABP_FirearmItem_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.FireGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Diviation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BurstFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FireRateMult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BurstModeCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::FireGun(class AActor* Target, float Diviation, bool BurstFire, const struct FVector& TargetLoc, float FireRateMult, int32_t BurstModeCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.FireGun");
		
		ABP_FirearmItem_C_FireGun_Params params {};
		params.Target = Target;
		params.Diviation = Diviation;
		params.BurstFire = BurstFire;
		params.TargetLoc = TargetLoc;
		params.FireRateMult = FireRateMult;
		params.BurstModeCount = BurstModeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.BotFire
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::BotFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.BotFire");
		
		ABP_FirearmItem_C_BotFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.StopFire
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::StopFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.StopFire");
		
		ABP_FirearmItem_C_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.UpdateTargetLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::UpdateTargetLoc(const struct FVector& TargetLoc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.UpdateTargetLoc");
		
		ABP_FirearmItem_C_UpdateTargetLoc_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.BotBurstFire
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::BotBurstFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.BotBurstFire");
		
		ABP_FirearmItem_C_BotBurstFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.EnableAllSlots
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::EnableAllSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.EnableAllSlots");
		
		ABP_FirearmItem_C_EnableAllSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ToggleAttachments
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::ToggleAttachments()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ToggleAttachments");
		
		ABP_FirearmItem_C_ToggleAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnShotVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::OnShotVFX(const struct FVector& TargetLoc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnShotVFX");
		
		ABP_FirearmItem_C_OnShotVFX_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryUsed
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnSecondaryUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryUsed");
		
		ABP_FirearmItem_C_OnSecondaryUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.PlayFeedbackHaptics
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::PlayFeedbackHaptics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.PlayFeedbackHaptics");
		
		ABP_FirearmItem_C_PlayFeedbackHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.UpdateFireMode
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::UpdateFireMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.UpdateFireMode");
		
		ABP_FirearmItem_C_UpdateFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ExtractRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRoundChambered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isBulletFired                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              AmmoImpulse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShellImpulse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                AmmoTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::ExtractRound(bool isRoundChambered, bool isBulletFired, const struct FTransform& Transform, float AmmoImpulse, float ShellImpulse, const struct FGameplayTag& AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ExtractRound");
		
		ABP_FirearmItem_C_ExtractRound_Params params {};
		params.isRoundChambered = isRoundChambered;
		params.isBulletFired = isBulletFired;
		params.Transform = Transform;
		params.AmmoImpulse = AmmoImpulse;
		params.ShellImpulse = ShellImpulse;
		params.AmmoTag = AmmoTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SmoothingToggle
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::SmoothingToggle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SmoothingToggle");
		
		ABP_FirearmItem_C_SmoothingToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ReceiveTick");
		
		ABP_FirearmItem_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.SmoothingTick
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::SmoothingTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.SmoothingTick");
		
		ABP_FirearmItem_C_SmoothingTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.UpdateSmoothingAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseLocalAlpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewMaxSmoothAlpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAdd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FirearmItem_C::UpdateSmoothingAttachment(bool bUseLocalAlpha, float NewMaxSmoothAlpha, bool bIsAdd)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.UpdateSmoothingAttachment");
		
		ABP_FirearmItem_C_UpdateSmoothingAttachment_Params params {};
		params.bUseLocalAlpha = bUseLocalAlpha;
		params.NewMaxSmoothAlpha = NewMaxSmoothAlpha;
		params.bIsAdd = bIsAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.ExecuteUbergraph_BP_FirearmItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FirearmItem_C::ExecuteUbergraph_BP_FirearmItem(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.ExecuteUbergraph_BP_FirearmItem");
		
		ABP_FirearmItem_C_ExecuteUbergraph_BP_FirearmItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnBurstFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnBurstFinished__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnBurstFinished__DelegateSignature");
		
		ABP_FirearmItem_C_OnBurstFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.OnBotFired__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::OnBotFired__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.OnBotFired__DelegateSignature");
		
		ABP_FirearmItem_C_OnBotFired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.BulletFired__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::BulletFired__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.BulletFired__DelegateSignature");
		
		ABP_FirearmItem_C_BulletFired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.DispUnGrip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::DispUnGrip__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.DispUnGrip__DelegateSignature");
		
		ABP_FirearmItem_C_DispUnGrip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FirearmItem.BP_FirearmItem_C.DispOnGrip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_FirearmItem_C::DispOnGrip__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FirearmItem.BP_FirearmItem_C.DispOnGrip__DelegateSignature");
		
		ABP_FirearmItem_C_DispOnGrip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FirearmItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FirearmItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FirearmItem.BP_FirearmItem_C");
		return ptr;
	}

}


