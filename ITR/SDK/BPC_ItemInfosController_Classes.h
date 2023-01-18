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
	 * BlueprintGeneratedClass BPC_ItemInfosController.BPC_ItemInfosController_C
	 * Size -> 0x004C (FullSize[0x012C] - InheritedSize[0x00E0])
	 */
	class UBPC_ItemInfosController_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Body;                                                    // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ItemInfo_C*                                      infoLeft;                                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ItemInfo_C*                                      infoRight;                                               // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             avrgInfoLeft;                                            // 0x0100(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             avrgInfoRight;                                           // 0x010C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_PRPlayerCharacter_IKv4_C*                        Player;                                                  // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceLoc;                                                // 0x0120(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInfoObject(bool Left, class ABP_ItemInfo_C** Actor);
		void GetInfoFirstPivot(bool Left, class USceneComponent** Pivot);
		void IsInfoShown(bool Left, bool* shown);
		void SetupInfoPosition(bool bLeft);
		void UpdateInfos();
		void ShowOneInfo(bool Left, bool toggle, bool unlock);
		void ShowAllInfos(bool toggle, bool unlock);
		void GetInfoActor(bool Left, class AActor** infoActor);
		void SpawnInfos();
		void ToggleInfos();
		void ShowInfo(bool Left, bool toggle);
		void Nullify();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Initialize(class USkeletalMeshComponent* Body);
		void ExecuteUbergraph_BPC_ItemInfosController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
