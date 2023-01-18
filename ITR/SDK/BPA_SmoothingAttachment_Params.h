#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.AttachTo
	 */
	struct ABPA_SmoothingAttachment_C_AttachTo_Params
	{
	public:
		class UAttachmentSlotComponent*                            SlotComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMakeSound;                                              // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.DetachFrom
	 */
	struct ABPA_SmoothingAttachment_C_DetachFrom_Params
	{
	public:
		class UAttachmentSlotComponent*                            SlotComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_SmoothingAttachment.BPA_SmoothingAttachment_C.ExecuteUbergraph_BPA_SmoothingAttachment
	 */
	struct ABPA_SmoothingAttachment_C_ExecuteUbergraph_BPA_SmoothingAttachment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_APNS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
