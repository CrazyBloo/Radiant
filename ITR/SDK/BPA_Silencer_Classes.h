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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPA_Silencer.BPA_Silencer_C
	 * Size -> 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
	 */
	class ABPA_Silencer_C : public ABPA_Attachment_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      DurabilityDamagePerShot;                                 // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UIK5[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DefaultMesh;                                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDamagedMesh;                                           // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D692[0x3];                                   // 0x0659(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeaponDamagePerShot;                                     // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__BPA_Silencer_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDurabilityChange__DelegateSignature();
		void OnBulletFired();
		void ExecuteUbergraph_BPA_Silencer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
