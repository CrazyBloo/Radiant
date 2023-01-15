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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct FXMaterialData.FXMaterialData
	 * Size -> 0x0088
	 */
	struct FFXMaterialData
	{
	public:
		EPhysicalSurface                                           Surface_5_A13BA84C444F7DFF70888788C6FCCCC2;              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MQVK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ImpactParticleFX_47_2D1ADA5E4AE492B40F6A018E974AFC88;    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     RicochetParticleTrailFX_89_A804146D4F1C22B014298B9F801BFD53; // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     DebrisParticleFX_78_0D9CC68F469BBA2E68FE8BAD0FBA4293;    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683;       // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C;         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711;       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DecalSize_39_3448E2FF4BC678271EB742853872E7C2;           // 0x0038(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3OA[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A;       // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB;   // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HZRQ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80;   // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16; // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5;       // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D;          // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD;        // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F;           // 0x0073(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Conductive_101_68E6B3B1478513C4738E5690BE4F6175;         // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Flammable_110_20E5C07646851E782F138697A7FC19FC;          // 0x0075(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Caustic_121_992CDE584A6F006FC3F901A49916A947;            // 0x0076(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EMaterialState                                             MaterialState_109_530FAB1948850D8B126EC3A58F6426F5;      // 0x0077(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Temperature_113_01E4F81C469340C33D67C88676011699;        // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Flammability_115_635CCA024B0C5A5736CA668C10996472;       // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E;       // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580;         // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
