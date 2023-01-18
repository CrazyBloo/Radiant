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
	 * UserDefinedStruct FImpactEffects.FImpactEffects
	 * Size -> 0x00C8
	 */
	struct FFImpactEffects
	{
	public:
		class UParticleSystem*                                     DefaultParticle_24_CAA8C28747063FFD8C764D95A69FDE5E;     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     DirtParticle_2_16A1685848DC5FC90FD7E281697D1BA5;         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     RockParticle_42_19E2F78142F20DE374888C972A2497C8;        // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SandParticle_43_3C9E06924EECE4F7A7178FA64CC9B46C;        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WaterParticle_44_1AE74D384197962EC3A2569974EB77C4;       // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     GlassParticle_45_5110CAA54BA5C2597EBD8C8260E3D15D;       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ClothParticle_46_8C84EB194BCEBF08240640BDC9C182A0;       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     MetalParticle_47_AE531321454A36ADCE3DD59C9216EF39;       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WoodParticle_87_9C321D784CBFA96BE648138A45EA834B;        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     GrassParticle_88_A99F99BD40F3930D011D20BE5F58E51A;       // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     CarpetParticle_89_66696C6F4270D4140A6F88935B31BA73;      // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ConcreteParticle_90_9A7FF24F4A59A09558E7388106FF7FC9;    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SnowParticle_91_1C52FAB34F14DC01FEFF23BE4185D113;        // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     TileParticle_92_D5C4BF8D4AD8A9A88945A6998B58E388;        // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     AsphaltParticle_93_60BC91F640F2D9263B9DC0A2C0B3C352;     // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     BrickParticle_121_07866E8343B6FD4BC0DBE9967ED65877;      // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     CardboardParticle_122_86C0BC0B4F4B2E07D24744B330EC3EC5;  // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ClayParticle_123_65666BCA41795CE8E3D94588DDF32AEB;       // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PlasticParticle_124_7238B7AF40ACC3AE176669AA43C33A97;    // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ElectronicsParticle_125_684EAA544452D08525BB43A268816FD3; // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SheetrockParticle_126_C579044F457F39DB3318B6B79A89C9AA;  // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PlasterParticle_127_80CC242B43C5FEAF48461FA4BE57CCEB;    // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     LeavesParticle_128_2F934A3A43D6EB199AE51B8E4284A8A1;     // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     BloodParticle_129_4DC29B254E423A51AA6A9D8FB3C84A6B;      // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     BlackParticle_150_39F3D1244FFC2F24F67D8E9EA9D46D53;      // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
