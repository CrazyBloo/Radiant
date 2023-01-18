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
	 * BlueprintGeneratedClass BP_Anomaly_Shatter.BP_Anomaly_Shatter_C
	 * Size -> 0x005C (FullSize[0x0444] - InheritedSize[0x03E8])
	 */
	class ABP_Anomaly_Shatter_C : public ABPA_Anomaly_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_RadialDamage_C*                                 BPC_RadialDamage;                                        // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UPrimitiveComponent*>                         Components;                                              // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<float>                                              ChargeArr;                                               // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MaxTraceLength;                                          // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxAmmountOfComponents;                                  // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Delay;                                                   // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZK02[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnBoxSize;                                            // 0x0434(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      deltaSec;                                                // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FindPoints(bool* HasValidPoint, TArray<struct FVector>* PointArr, TArray<struct FVector>* Normals);
		void Spawn();
		void UserConstructionScript();
		void ChargeComponent(int32_t Index, float ChargeValue);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Explode();
		void CheckSun();
		void LightOn_2(const struct FVector& Location, class USceneComponent* Component);
		void ExecuteUbergraph_BP_Anomaly_Shatter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
