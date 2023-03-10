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
	 * BlueprintGeneratedClass BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C
	 * Size -> 0x0008 (FullSize[0x0380] - InheritedSize[0x0378])
	 */
	class UBPC_Holster_WeaponPrimary_C : public UBPC_Holster_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnItemTaken(class UInventoryItem* InventoryItem);
		void ReceiveTick(float DeltaSeconds);
		void ClearGSLerptarget();
		void AttachAndLerpHold();
		void InstantAttach();
		void SpawnContent();
		void ExecuteUbergraph_BPC_Holster_WeaponPrimary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
