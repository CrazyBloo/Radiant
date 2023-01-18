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
	 * BlueprintGeneratedClass BPC_VRController.BPC_VRController_C
	 * Size -> 0x001A (FullSize[0x024A] - InheritedSize[0x0230])
	 */
	class UBPC_VRController_C : public UVRControllerComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPRControllerType                                          controllerOverride;                                      // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseInEditor;                                            // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsMeshVisibile(bool* Visible);
		void GetMaterial(class UMaterialInstanceDynamic** Material);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void UpdateControllerMesh(class USceneComponent* Parent);
		void SetMeshVisibility(bool Visible);
		void ExecuteUbergraph_BPC_VRController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
