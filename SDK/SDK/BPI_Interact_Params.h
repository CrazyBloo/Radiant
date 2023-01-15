#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_Interact.BPI_Interact_C.GetLightItem
	 */
	struct UBPI_Interact_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZQJ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.PrimaryTrigger
	 */
	struct UBPI_Interact_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.ToggleAttachments
	 */
	struct UBPI_Interact_C_ToggleAttachments_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.GameplayTrigger
	 */
	struct UBPI_Interact_C_GameplayTrigger_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.DenyHolstering
	 */
	struct UBPI_Interact_C_DenyHolstering_Params
	{
	public:
		bool                                                       Deny;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.GetGSLerpToHand
	 */
	struct UBPI_Interact_C_GetGSLerpToHand_Params
	{
	public:
		class UGS_LerpToHand*                                      LerpToHandScript;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.SetAttachedCollision
	 */
	struct UBPI_Interact_C_SetAttachedCollision_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.TakenByHolder
	 */
	struct UBPI_Interact_C_TakenByHolder_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.SetDenyGrip
	 */
	struct UBPI_Interact_C_SetDenyGrip_Params
	{
	public:
		bool                                                       DenyGrip;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.RequestPhysicsCollision
	 */
	struct UBPI_Interact_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_USRA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.BeginItemPositionChecks
	 */
	struct UBPI_Interact_C_BeginItemPositionChecks_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.IsOn
	 */
	struct UBPI_Interact_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.RequestPositionCheck
	 */
	struct UBPI_Interact_C_RequestPositionCheck_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.Request Recoil
	 */
	struct UBPI_Interact_C_Request_Recoil_Params
	{
	public:
		struct FVector                                             Recoil;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.SecondaryTrigger
	 */
	struct UBPI_Interact_C_SecondaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.NightGlow
	 */
	struct UBPI_Interact_C_NightGlow_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.IsItemActorAttachmentsLocked
	 */
	struct UBPI_Interact_C_IsItemActorAttachmentsLocked_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.DropEjectedMag
	 */
	struct UBPI_Interact_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.SetItemActorAttachmentsLock
	 */
	struct UBPI_Interact_C_SetItemActorAttachmentsLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.Hide
	 */
	struct UBPI_Interact_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.TutUnlock
	 */
	struct UBPI_Interact_C_TutUnlock_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.TutLock
	 */
	struct UBPI_Interact_C_TutLock_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.Use
	 */
	struct UBPI_Interact_C_Use_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.Unbind
	 */
	struct UBPI_Interact_C_Unbind_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.Inspect
	 */
	struct UBPI_Interact_C_Inspect_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.ThumbRight
	 */
	struct UBPI_Interact_C_ThumbRight_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.ThumbLeft
	 */
	struct UBPI_Interact_C_ThumbLeft_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.Bind
	 */
	struct UBPI_Interact_C_Bind_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.ThumbUp
	 */
	struct UBPI_Interact_C_ThumbUp_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.EjectMag
	 */
	struct UBPI_Interact_C_EjectMag_Params
	{	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.PlayerInteract
	 */
	struct UBPI_Interact_C_PlayerInteract_Params
	{
	public:
		EHand_EHand                                                hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9T7H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
