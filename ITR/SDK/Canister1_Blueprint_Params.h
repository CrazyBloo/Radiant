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
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.UserConstructionScript
	 */
	struct ACanister1_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.Explode
	 */
	struct ACanister1_Blueprint_C_Explode_Params
	{	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.ReceiveBeginPlay
	 */
	struct ACanister1_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.Punctured
	 */
	struct ACanister1_Blueprint_C_Punctured_Params
	{	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.ReceiveAnyDamage
	 */
	struct ACanister1_Blueprint_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6WCX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.Kill
	 */
	struct ACanister1_Blueprint_C_Kill_Params
	{	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_628_ComponentHitSignature__DelegateSignature
	 */
	struct ACanister1_Blueprint_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_628_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Canister1_Blueprint.Canister1_Blueprint_C.ExecuteUbergraph_Canister1_Blueprint
	 */
	struct ACanister1_Blueprint_C_ExecuteUbergraph_Canister1_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
