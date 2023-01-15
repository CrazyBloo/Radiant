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
	 * BlueprintGeneratedClass BPI_Interact.BPI_Interact_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Interact_C : public UInterface
	{
	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void PrimaryTrigger(float AxisValue);
		void ToggleAttachments();
		void GameplayTrigger();
		void DenyHolstering(bool* Deny);
		void GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript);
		void SetAttachedCollision(bool Attached);
		void TakenByHolder(const class FString& Name);
		void SetDenyGrip(bool DenyGrip);
		void RequestPhysicsCollision(bool On, const class FName& Requestor);
		void BeginItemPositionChecks();
		void IsOn(bool* On);
		void RequestPositionCheck(bool On);
		void Request_Recoil(const struct FVector& Recoil);
		void SecondaryTrigger(float AxisValue);
		void NightGlow(bool On);
		void IsItemActorAttachmentsLocked(bool* Result);
		void DropEjectedMag();
		void SetItemActorAttachmentsLock(bool lock);
		void Hide(bool Show);
		void TutUnlock();
		void TutLock();
		void Use();
		void Unbind();
		void Inspect(bool On);
		void ThumbRight();
		void ThumbLeft();
		void Bind();
		void ThumbUp();
		void EjectMag();
		void PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
