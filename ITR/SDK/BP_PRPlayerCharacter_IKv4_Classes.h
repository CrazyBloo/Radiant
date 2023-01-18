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
	 * BlueprintGeneratedClass BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C
	 * Size -> 0x0589 (FullSize[0x13D9] - InheritedSize[0x0E50])
	 */
	class ABP_PRPlayerCharacter_IKv4_C : public APRPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Scene;                                                   // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRNotificationsComponent*                           VRNotifications;                                         // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_PlayerPostProcess_C*                            BPC_PlayerPostProcess;                                   // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BraceletTrigger1;                                        // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BraceletTrigger;                                         // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_Probes_R;                                        // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_Probes_L;                                        // 0x0E88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_cloth;                                             // 0x0E90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Footsteps;                                         // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    W_R_WristMenu;                                           // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    W_L_WristMenu;                                           // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Vest;                                              // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_WeaponPrimary;                                   // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_WeaponPrimary_C*                        Holster_WeaponPrimary;                                   // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_StatsIndicator_C*                               BPC_StatsIndicator;                                      // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      MouthSlot;                                               // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_MagHolster5;                                          // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_MagHolster4;                                          // 0x0EE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_MagHolster6;                                          // 0x0EE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_MagHolster3;                                          // 0x0EF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ArmorSlot_C*                                    ArmorSlot_Body;                                          // 0x0EF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ArmorSlot_C*                                    ArmorSlot_Head;                                          // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ItemInfosController_C*                          BPC_ItemInfosController;                                 // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetInteractionComponent*                         WidgetInteractionLeft_finger;                            // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetInteractionComponent*                         WidgetInteractionRight_finger;                           // 0x0F18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   LHandFingerColider1;                                     // 0x0F20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   RHandFingerColider;                                      // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ProfilingComponent_C*                           BPC_ProfilingComponent;                                  // 0x0F30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    FingerTouchUITrigger_l;                                  // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    FingerTouchUITrigger_r;                                  // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Melee;                                           // 0x0F48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Detector;                                        // 0x0F50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_Holder_SmallPouch;                                    // 0x0F58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    RHandCollider2;                                          // 0x0F60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    LHandCollider2;                                          // 0x0F68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   UIPoseTriggerRight;                                      // 0x0F70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    GrabSphereRight;                                         // 0x0F78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   UIPoseTriggerLeft;                                       // 0x0F80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    GrabSphereLeft;                                          // 0x0F88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_HeadLamp;                                        // 0x0F90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetInteractionComponent*                         WidgetInteractionRight;                                  // 0x0F98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetInteractionComponent*                         WidgetInteractionLeft;                                   // 0x0FA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_VRController_C*                                 BPC_VRController_Left;                                   // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    RHandCollider;                                           // 0x0FB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       RHandRoot;                                               // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPhysicsConstraintComponent*                         RHandContstraint;                                        // 0x0FC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    LHandCollider;                                           // 0x0FC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPhysicsConstraintComponent*                         LHandContstraint;                                        // 0x0FD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       LHandRoot;                                               // 0x0FD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AC_MissionChanged;                                       // 0x0FE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_MagPouch;                                        // 0x0FE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_MagPouch4;                                       // 0x0FF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_MagPouch3;                                       // 0x0FF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_MagPouch2;                                       // 0x1000(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_BeamTarget_WristUnlock;                               // 0x1008(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_ClimbingIndicatorRight;                               // 0x1010(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeamPointerRight;                                     // 0x1018(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_ClimbingIndicatorLeft;                                // 0x1020(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_BeamPointerLeft;                                      // 0x1028(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_VRController_C*                                 BPC_VRController_Right;                                  // 0x1030(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    DirectionWidget;                                         // 0x1038(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Direction;                                         // 0x1040(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    W_HolsterIndicator;                                      // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera_PIE;                                              // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Visibility_C*                                   BPC_Visibility;                                          // 0x1058(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Neck;                                              // 0x1060(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Backpack;                                          // 0x1068(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Head;                                                    // 0x1070(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_Melee;                                           // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_Detector;                                        // 0x1080(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_WeaponSecondary;                                 // 0x1088(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_HolsterSecondary;                                     // 0x1090(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_WeaponSecondary;                                 // 0x1098(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Map;                                             // 0x10A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Holster_C*                                      Holster_Map;                                             // 0x10A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Face;                                            // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Backpack;                                        // 0x10B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_MagHolsters;                                       // 0x10C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Drowning;                                          // 0x10C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Underwater;                                        // 0x10D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Hungry;                                            // 0x10D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Yawn;                                              // 0x10E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_GasCough;                                          // 0x10E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Heartbeat;                                         // 0x10F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Breath;                                            // 0x10F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Gasmask;                                           // 0x1100(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_PlayerStats_C*                                  BPC_PlayerStats;                                         // 0x1108(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_HeadLamp;                                          // 0x1110(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TL_Turn_NewTrack_0_3597729F487BBB5DF71333901CA3BB7F;     // 0x1118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_Turn__Direction_3597729F487BBB5DF71333901CA3BB7F;     // 0x111C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AD2V[0x3];                                   // 0x111D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_Turn;                                                 // 0x1120(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Fade_A45EA900496BF124E0ABA78296F6EE85;        // 0x1128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Sleep_A45EA900496BF124E0ABA78296F6EE85;       // 0x112C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Blink01_A45EA900496BF124E0ABA78296F6EE85;     // 0x1130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_A45EA900496BF124E0ABA78296F6EE85;  // 0x1134(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PQTX[0x3];                                   // 0x1135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x1138(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_Scale_8E5A57DF48B2D8D751CAC8A24B3A82C7;       // 0x1140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_TintAmount_8E5A57DF48B2D8D751CAC8A24B3A82C7;  // 0x1144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_8E5A57DF48B2D8D751CAC8A24B3A82C7;  // 0x1148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6BNP[0x7];                                   // 0x1149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x1150(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_blink2_8B75161F4F1701F8098E388948E78CF0;      // 0x1158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Sleep_8B75161F4F1701F8098E388948E78CF0;       // 0x115C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Blink01_8B75161F4F1701F8098E388948E78CF0;     // 0x1160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_8B75161F4F1701F8098E388948E78CF0;  // 0x1164(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XIK5[0x3];                                   // 0x1165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x1168(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RotateDir;                                               // 0x1170(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Blink;                                                   // 0x117C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Yawn;                                                    // 0x117D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ViveLButtonPressed;                                      // 0x117E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5L49[0x1];                                   // 0x117F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageType*                                         LastDamageType;                                          // 0x1180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AController*                                         LastDamageInstigator;                                    // 0x1188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastDamageCauser;                                        // 0x1190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                LastDamageCauserName;                                    // 0x1198(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DamageCauserNameSelf;                                    // 0x11B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        HeadTriggerTimer;                                        // 0x11C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ActorInHeadTrigger;                                      // 0x11D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       L_HapticDelay;                                           // 0x11D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       R_HapticDelay;                                           // 0x11D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HWH5[0x2];                                   // 0x11DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviousBodyLocation;                                    // 0x11DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootstepVolume;                                          // 0x11E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode_EMovementMode                                MovementModeLeft;                                        // 0x11EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode_EMovementMode                                MovementModeRight;                                       // 0x11ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AlwaysAllowClimbing;                                     // 0x11EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSPS[0x1];                                   // 0x11EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickHeadBodyYaw;                                         // 0x11F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TickHeadBodyPitch;                                       // 0x11F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZBDL[0x8];                                   // 0x11F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TickResultBodyTransform;                                 // 0x1200(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BodyHeadMismatchTimer;                                   // 0x1230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BodyHeadWaitLerpTime;                                    // 0x1234(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBodyPitchDown;                                       // 0x1238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBodyYawTolerance;                                    // 0x123C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadInWater;                                             // 0x1240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BodyInWater;                                             // 0x1241(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CKTC[0x2];                                   // 0x1242(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThrowVelMult;                                            // 0x1244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ThrowMultThreshold;                                      // 0x1248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RHandLoc;                                                // 0x124C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LHandLoc;                                                // 0x1258(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HMDLoc;                                                  // 0x1264(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RHandLocDelta;                                           // 0x1270(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LHandLocDelta;                                           // 0x127C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HMDLocDelta;                                             // 0x1288(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StepInProgress;                                          // 0x1294(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NL8T[0x3];                                   // 0x1295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBodyYaw;                                              // 0x1298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLookPitch;                                            // 0x129C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxLookPitch;                                            // 0x12A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchMinHeightMult;                                     // 0x12A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchMaxHeightMult;                                     // 0x12A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchAlpha;                                             // 0x12AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightLocation;                                           // 0x12B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasRightLocation;                                        // 0x12BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLKF[0x3];                                   // 0x12BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LeftLocation;                                            // 0x12C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasLeftLocation;                                         // 0x12CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WAJ[0x3];                                   // 0x12CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WakeUpTime;                                              // 0x12D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RHandVel;                                                // 0x12D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LHandVel;                                                // 0x12D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HintLookTo;                                              // 0x12DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GripSelectorShift;                                       // 0x12E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootstepPitch;                                           // 0x12F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StepsCount;                                              // 0x12F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HighCapsuleHalfHeight;                                   // 0x12FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MidCapsuleHalfHeight;                                    // 0x1300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LowCapsuleHalfHeight;                                    // 0x1304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       stateDeadBody;                                           // 0x1308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor
		bool                                                       stateNormalBody;                                         // 0x1309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x130A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMEV[0x1];                                   // 0x130B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InspectMinAngles;                                        // 0x130C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InspectMaxAngles;                                        // 0x1318(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VelocityCalcDelay;                                       // 0x1324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      maxVolumeSound;                                          // 0x1328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Turning;                                                 // 0x132C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VF4U[0x3];                                   // 0x132D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnDegrees;                                             // 0x1330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnTargetDeg;                                           // 0x1334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasFalling;                                              // 0x1338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VYHF[0x3];                                   // 0x1339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlyTime;                                                 // 0x133C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VirtualStockOn;                                          // 0x1340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanLean;                                                 // 0x1341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBlackout;                                              // 0x1342(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JW9S[0x5];                                   // 0x1343(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DropedCache;                                             // 0x1348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentVelocity;                                         // 0x1350(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSecondsSum;                                         // 0x135C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DeltaSecondsNum;                                         // 0x1360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GasMaskOn;                                               // 0x1364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KSOZ[0x3];                                   // 0x1365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHandDistance;                                         // 0x1368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PreviousLocation;                                        // 0x136C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                InstigatorText;                                          // 0x1378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CauserText;                                              // 0x1390(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasLeftTriggerAxis;                                      // 0x13A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasRightTriggerAxis;                                     // 0x13A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HolstersToLeft;                                          // 0x13AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AZ1Q[0x5];                                   // 0x13AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastRagDoll;                                             // 0x13B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGripMotionControllerComponent*                      handForDirection;                                        // 0x13B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTurnLerp;                                         // 0x13C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XTT2[0x4];                                   // 0x13C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Teleport_Controller_C*                           TeleportControllerLeft;                                  // 0x13C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Teleport_Controller_C*                           TeleportControllerRight;                                 // 0x13D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Teleporting;                                             // 0x13D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetActionButtonName(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void GetPostProcesscomp(class UBPC_PlayerPostProcess_C** PPcomp);
		void GetOverlapGrips(EPRHand hand, struct FGripOverlap* Grip, struct FGripOverlap* selectedGrip);
		void IsRunning(bool* running);
		void GetAudioCaptureRef(class UAudioCaptureComponent** Ref);
		void IsLeaning(bool* IsLeaning);
		void GetCalculatedBodyRotation(float* BodyYaw);
		void getNetSmoother(class USceneComponent** comp);
		void GetStepsCount(int32_t* Steps);
		void GetMovementDirection(struct FVector* MovementVector);
		void GetTargetingInfo(struct FTransform* BodyTransform, struct FVector* Velocity);
		void GetPlayerControllerType(EPRControllerType* Controller);
		void GetControllerVelocity(float* LeftVel, float* RightVel);
		void IsBackpackEquipped(bool* equipped);
		void GetMoveSpeedCoefficient(float* Coefficient);
		void IsActorInHands(class AActor** Actor, bool* Result);
		void GetLastDamageData(class UDamageType** DamageType, class AController** Instigator, class AActor** causer, class FText* CauserName);
		void GetStats(float* Health, float* HealthPercent, float* Stamina, float* StaminaPercent, float* Rest, float* RestPercent, float* Nutrition, float* NutritionPercent);
		void GetUnderwaterState(bool* HeadUnderwater, bool* BodyUnderwater);
		void IsActorClassInHands(class UClass* ActorClass, bool* Result);
		void GetHolsterIndicatorRef(class UWidgetComponent** Indicator);
		void GetMarkerMesh(class UStaticMeshComponent** Mesh);
		void PlayFootstepAndClothSounds();
		void GetBeamPointerComponents(class USceneComponent** Left, class USceneComponent** Right);
		struct FVector GetInputMovementVector();
		bool IsSecondaryGrip(bool bLeft);
		void CheckFallDamage(float DeltaSpeed);
		class USceneComponent* GetBackpackPivot();
		bool IsAnyLampEnabled();
		void LoadInHandItems(bool bIsRightHand);
		void SetHandForDirection();
		bool IsActorLerpingToHand(class UObject* Object);
		void GetGripRelativeTransformByGeometryTypeAndPoseNumber(class UObject* GripObject, class UGripMotionControllerComponent* handController, EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, bool* bSuccess, struct FTransform* GripRelativeTransform);
		class UHolsterComponent* GetHolsterProbes_R();
		class UHolsterComponent* GetHolsterProbes_L();
		class UHolsterComponent* GetHolsterWeaponSecondary();
		class UBoxComponent* GetTriggerMelee();
		class UHolsterComponent* GetHolsterMelee();
		class UBoxComponent* GetTriggerWeaponSecondary();
		class UBoxComponent* GetTriggerMap();
		class UBoxComponent* GetTriggerDetector();
		class UBoxComponent* GetTriggerBackpack();
		class UHolsterComponent* GetHolsterDetector();
		class UBoxComponent* GetTriggerWeaponPrimary();
		class UHolsterComponent* GetHolsterWeaponPrimary();
		class UChildActorComponent* GetHolderSmallPouchActorComponent();
		class UHolsterComponent* GetHolsterMap();
		bool GetIsInteractableHolsterable(class AActor* Actor);
		void UnbindInteractable(class AActor* Actor);
		class USceneComponent* GetPivotBackpack();
		void BindInteractable(class AActor* Actor);
		class USceneComponent* GetPivotNeck();
		void SetCameraFade(float InFadeAmount);
		void SetBlinkRadius(float BlinkRadius);
		class UStaticMeshComponent* GetSM_ClimbingIndicatorRight();
		class UStaticMeshComponent* GetSM_ClimbingIndicatorLeft();
		class UVRControllerComponent* GetBPC_VRController_Left();
		class UVRControllerComponent* GetBPC_VRController_Right();
		class UParticleSystemComponent* GetPS_BeamPointerLeft();
		class UParticleSystemComponent* GetPS_BeamPointerRight();
		class UWidgetInteractionComponent* GetWidgetInteractionLeft();
		class UWidgetInteractionComponent* GetWidgetInteractionRight();
		class UWidgetComponent* GetW_L_WristMenu();
		class UWidgetComponent* GetW_R_WristMenu();
		class USphereComponent* GetLHandCollider();
		class USphereComponent* GetRHandCollider();
		class UCapsuleComponent* GetUIPoseTriggerLeft();
		class UCapsuleComponent* GetUIPoseTriggerRight();
		class USphereComponent* GetGrabSphereLeft();
		class USphereComponent* GetGrabSphereRight();
		class USceneComponent* GetPivotVest();
		TArray<class UPrimitiveComponent*> GetVisibilityPrimitives();
		float GetCrouch();
		void SetArmLength(unsigned char hand);
		void StopAllAudio();
		void SetDamageCauserName(class UDamageType* LastDamageType, class AController* LastDamageInstigator, class AActor* LastDamageCauser);
		void UpdateLefthanded();
		void UpdateMarkers();
		void GetArmorFootStepNoiseBonus(float* );
		class UCameraComponent* GetCameraRef();
		void GetCurrentVelocity(struct FVector* Velocity);
		void IsHoldingActor(class UGripMotionControllerComponent* Controller, class AActor* Actor, bool* holding);
		void DoUnstuck();
		void DropOrRetakeOrHolster(class UGripMotionControllerComponent* Controller, class UObject* GrippedObject, bool SecondaryGrip, bool zeroVel, bool* holstered);
		bool IsItemActorSticked(class AActor* Actor);
		void CheckHandStickBreak();
		void ForceGrabObject(class UObject* ObjectToTryToGrab, const struct FTransform& WorldTransform, const struct FTransform& GripPoint, class UGripMotionControllerComponent* hand, bool IsSlotGrip, bool* Gripped);
		void ResetMoveSpeedCoefficient();
		void UpdateIndicators();
		void EnableRagdoll(bool enable);
		void GetControlsRefs(bool* success, bool* alive, class UCameraComponent** cameraRef, class USceneComponent** pivotHead, class UGripMotionControllerComponent** leftControllerRef, class USceneComponent** pivotLeftController, class USceneComponent** pivotLeftHand, class USphereComponent** sphereLeftHand, class UMaterialInstanceDynamic** materialLeftController, class UGripMotionControllerComponent** rightControllerRef, class USceneComponent** pivotRightController, class USceneComponent** pivotRightHand, class USphereComponent** sphereRightHand, class UMaterialInstanceDynamic** materialRightController);
		void GetHandPivot(class UGripMotionControllerComponent* Controller, class USceneComponent** Pivot);
		void GetHealth(float* Health);
		void GetHealthPercent(float* HealthPercent);
		bool IsAlive();
		void SpawnItemsInHands();
		void VelocityCalculations(float DeltaSeconds);
		void GetDPadMovementFacing(EMovementMode_EMovementMode MovementMode, class UGripMotionControllerComponent* hand, class UGripMotionControllerComponent* OtherHand, EMovementMode_EMovementMode OtherHandMovementMode, struct FVector* ForwardVector, struct FVector* RightVector);
		void ScaleWristWidgets();
		void ProcessClimb(float DeltaSeconds);
		void CheckTriggerOverlaps(class USphereComponent* GrabSphere, class UGripMotionControllerComponent* GripMotionController, bool* Overlapped);
		void FindBinding(class UObject* Object, bool* IsBound, bool* Bindable, bool* HolsterFree, bool* IsUsable, class UBPC_Holster_C** HolsterPoint);
		void LoadSettings();
		void UserConstructionScript();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void TL_Turn__FinishedFunc();
		void TL_Turn__UpdateFunc();
		void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void BindLeft(bool Pressed);
		void BindRight(bool Pressed);
		void RunToggle(bool Pressed);
		void ShowButtons(bool Show, TArray<EControlAction> Actions);
		void TurnPlayerToFaceActor(class AActor* Actor);
		void BlockInput(TArray<EControlAction> Actions, bool AllowInput);
		void ShowCapTouch(EOculusButton Button, bool Show);
		void StopHaptics(EControllerHand hand);
		void AllowAll();
		void AllowOnly(TArray<EControlAction> Actions);
		void AudioFootstep();
		void ReceiveTick(float DeltaSeconds);
		void TurnPlayer(float Degrees);
		void YawnSounds();
		void Sleep(bool UntilRested, bool UntilHealed, bool Healing, float WakeUpTime);
		void OnGameStartedEventDelegate();
		void HungrySounds();
		void AudioGasMask(bool PlayOrStop, bool ForcePlay);
		void AudioUnderwater(bool PlayOrStop, bool ForcePlay);
		void AudioDrowning(bool PlayOrStop, bool ForcePlay);
		void SetSecondaryGripController(class USceneComponent* SecondaryController);
		void ChangeStamina(float ChangeBy);
		void ChangeNutrition(float ChangeBy);
		void BuffRest(float Amount, float Time);
		void SetControllersVisibility(bool Visible);
		void SetDPadVelocityScale(float DPadVelocityScale);
		void Backward(float Axis);
		void Left(float Axis);
		void Sprint();
		void OnClimbingSteppedUp();
		void FireMode(bool Right);
		void Arm(bool Right);
		void EjectMag(bool Right);
		void InteractLeft(bool Pressed);
		void InteractRight(bool Pressed);
		void DropFirstGrip(class UGripMotionControllerComponent* Controller);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void EventHeadtrigger();
		void Unstuck();
		void SetUnderwaterState(bool HeadUnderwater, bool BodyUnderwater);
		void BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void RefreshBackpack(bool allowCreate);
		void Initialize();
		void SpawnInventory();
		void ReturnBackpack(bool instant);
		void ShowDirectionHint(const struct FVector& LookTo, bool Show);
		void RefreshHandPose(class UGripMotionControllerComponent* Controller);
		void ChangeHealth(float HealthDelta);
		void OpenEyes();
		void CloseEyes();
		void EjectMagDrop(bool Right);
		void RestoreAfterDeath(bool ShowNormalBody);
		void ChangeHealthByPercent(int32_t Percent);
		void ChangeRestByPercent(int32_t Percent);
		void SetStats(int32_t HealthPercent, int32_t RestPercent, int32_t StaminaPercent, int32_t HungerPercent);
		void ClearRefs();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DropAll();
		void SetMoveSpeedCoefficient(ESpeedCoefficient Source, float Coefficient);
		void UpdateControllerAndHands();
		void BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature(EPRStatStatus Status);
		void BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature(EPRStatStatus Status);
		void BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature(EPRStatStatus Status);
		void OnHealthEnd();
		void BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature();
		void OnTeleported();
		void UpdateWeight();
		void SetCrouch(bool Crouch);
		void ToggleCrouch();
		void PreTeleport();
		void SetWristMenuHidden(bool Hidden);
		void SwitchPlayerMesh();
		void StopBlink();
		void SpawnItemInHand(bool LeftHand, const struct FGameplayTag& ItemTypeID);
		void ProcessHaptics();
		void ResetSeatedMode();
		void UpdateControllerShifts();
		void SetCurrentVelocity(const struct FVector& Velocity);
		void Gasmask(bool PutOn);
		void StopHapticses();
		void SetPaused(bool paused);
		void OnInventoryModeChanged(EInventoryMode Mode);
		void SpawnItemConfigInHand(bool bLeftHand, class UPRItemConfig* itemConfig);
		void UpdateHealthSounds(EPRStatStatus HealthLevel);
		void UpdateStaminaSounds(EPRStatStatus StaminaLevel);
		void UpdateNutritionSounds(EPRStatStatus NutritionLevel);
		void TriggerRight(float AngleAxis);
		void TriggerLeft(float AxisAngle);
		void CallNightGlow(class UObject* Target, bool bOn);
		void LerpRightGrip(class AActor* Actor, class UGripMotionControllerComponent* hand, bool bIsSlot, const struct FTransform& Offset, bool bDisableCollision, bool bKeepHandSnapped);
		void LerpLeftGrip(class AActor* Actor, class UGripMotionControllerComponent* hand, bool bIsSlot, const struct FTransform& Offset, bool bDisableCollision, bool bKeepHandSnapped);
		void UpdateItemInfos();
		void DropGrip(class UGripMotionControllerComponent* GripMotionController, const struct FBPActorGripInformation& GripToDrop, const struct FVector& AngleVel, const struct FVector& LinearVel);
		void DropAllGrips(class UGripMotionControllerComponent* GripMotionController, bool bZeroVelo);
		void HandHaptics(EHapticsCurve Type, EControllerHand hand);
		void OnLanded(const struct FHitResult& Hit);
		void BlockAll();
		void ToggleAimSmoothing(bool bIsLeft);
		void CheckRest();
		void OnItemInfoClickedRight();
		void OnItemInfoClickedLeft();
		void OnMenuButtonClicked();
		void E1(class AActor* Actor);
		void E2(class UInventoryItem* InventoryItem);
		void LeftLerpTimeOut();
		void LeftLerpEnd();
		void ReportPlayerLocation();
		void RightLerpTimeOut();
		void RightLerpEnd();
		void OnTransitionStartEvent();
		void OnMissionStateChangedEvent(class UMissionData* MissionData);
		void OnLevelPrepare(const struct FGameplayTag& Value);
		void OnTransitionEndEvent();
		void ResetOnLVLStart(const struct FGameplayTag& Value);
		void PlayerResetEvent();
		void OnSeatedModeChanged();
		void ExecuteUbergraph_BP_PRPlayerCharacter_IKv4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
