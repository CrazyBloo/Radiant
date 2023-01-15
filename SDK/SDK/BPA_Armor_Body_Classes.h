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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPA_Armor_Body.BPA_Armor_Body_C
	 * Size -> 0x0070 (FullSize[0x0678] - InheritedSize[0x0608])
	 */
	class ABPA_Armor_Body_C : public ABPA_Armor_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0608(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FFBodyArmorSetup                                    BaseVisSetup;                                            // 0x0610(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FFBodyArmorSetup                                    HideVisSetup;                                            // 0x0630(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              OnPlayerMesh;                                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    SoundType;                                               // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S93T[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          SavedMaterials;                                          // 0x0660(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay
		class AActor*                                              SavedChar;                                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSoundType(bool* Exist, int32_t* Type);
		void ApplayVisualEffects(class AActor* _char_, bool Applay, const struct FFBodyArmorSetup& FBodyArmorSetup);
		void ApplayToCharacter(class AActor* Chracter);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnShowBodyChanged_Event_1();
		void OnAddedToHolster(class UHolsterComponent* Holster);
		void OnRemovedFromHolster(class UHolsterComponent* Holster);
		void ExecuteUbergraph_BPA_Armor_Body(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
