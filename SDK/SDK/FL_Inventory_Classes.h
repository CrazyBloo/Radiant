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
	 * BlueprintGeneratedClass FL_Inventory.FL_Inventory_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Inventory_C : public UBlueprintFunctionLibrary
	{
	public:
		void FindHolder(const struct FGameplayTag& holderID, bool exact, class UObject* __WorldContext, class UObject** holderObject);
		void SpawnLevelItems(class UObject* __WorldContext);
		void FindItemPoint(const struct FGameplayTag& ItemTag, class USceneComponent* ParentComponent, class UObject* __WorldContext, bool* success, class USceneComponent** Point);
		void FindHoldersForActor(class AActor* Actor, bool onlyFree, class UObject* __WorldContext, TArray<class UObject*>* Holders);
		void SpawnItemByTag(const struct FGameplayTag& ItemTag, class USceneComponent* ParentSceneComponent, bool SnapToParent, const struct FTransform& Transform, bool Preconfigured, const class FString& CustomUID, class UObject* __WorldContext, class AActor** SpawnedActor);
		void SpawnInventoryItem(class UInventoryItem* InventoryItem, class USceneComponent* ParentSceneComponent, bool KeepRelativeLoc, bool Simulate, class UObject* __WorldContext, class AActor** SpawnedActor);
		void CallSpawnActor(class AActor* Actor, class UObject* __WorldContext);
		void CallSpawnComponent(class USceneComponent* Component, class UObject* __WorldContext);
		void CheckAndSpawnItems(class UObject* Object, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
