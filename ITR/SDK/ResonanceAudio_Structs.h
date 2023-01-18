﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ResonanceAudio.EResonanceRenderMode
	 */
	enum class EResonanceRenderMode : uint8_t
	{
		StereoPanning         = 0,
		BinauralLowQuality    = 1,
		BinauralMediumQuality = 2,
		BinauralHighQuality   = 3,
		RoomEffectsOnly       = 4,
		MAX                   = 5
	};

	/**
	 * Enum ResonanceAudio.ERaMaterialName
	 */
	enum class ERaMaterialName : uint8_t
	{
		_TRANSPARENT_             = 0,
		ACOUSTIC_CEILING_TILES    = 1,
		BRICK_BARE                = 2,
		BRICK_PAINTED             = 3,
		CONCRETE_BLOCK_COARSE     = 4,
		CONCRETE_BLOCK_PAINTED    = 5,
		CURTAIN_HEAVY             = 6,
		FIBER_GLASS_INSULATION    = 7,
		GLASS_THIN                = 8,
		GLASS_THICK               = 9,
		GRASS                     = 10,
		LINOLEUM_ON_CONCRETE      = 11,
		MARBLE                    = 12,
		METAL                     = 13,
		PARQUET_ONCONCRETE        = 14,
		PLASTER_ROUGH             = 15,
		PLASTER_SMOOTH            = 16,
		PLYWOOD_PANEL             = 17,
		POLISHED_CONCRETE_OR_TILE = 18,
		SHEETROCK                 = 19,
		WATER_OR_ICE_SURFACE      = 20,
		WOOD_CEILING              = 21,
		WOOD_PANEL                = 22,
		UNIFORM                   = 23,
		MAX                       = 24
	};

	/**
	 * Enum ResonanceAudio.ERaDistanceRolloffModel
	 */
	enum class ERaDistanceRolloffModel : uint8_t
	{
		LOGARITHMIC = 0,
		LINEAR      = 1,
		NONE        = 2,
		MAX         = 3
	};

	/**
	 * Enum ResonanceAudio.ERaSpatializationMethod
	 */
	enum class ERaSpatializationMethod : uint8_t
	{
		STEREO_PANNING = 0,
		HRTF           = 1,
		MAX            = 2
	};

	/**
	 * Enum ResonanceAudio.ERaQualityMode
	 */
	enum class ERaQualityMode : uint8_t
	{
		STEREO_PANNING  = 0,
		BINAURAL_LOW    = 1,
		BINAURAL_MEDIUM = 2,
		BINAURAL_HIGH   = 3,
		MAX             = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
	 * Size -> 0x0050
	 */
	struct FResonanceAudioReverbPluginSettings
	{
	public:
		bool                                                       bEnableRoomEffects;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGetTransformFromAudioVolume;                            // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1SZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RoomPosition;                                            // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               RoomRotation;                                            // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RoomDimensions;                                          // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaMaterialName                                            LeftWallMaterial;                                        // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaMaterialName                                            RightWallMaterial;                                       // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaMaterialName                                            FloorMaterial;                                           // 0x002E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaMaterialName                                            CeilingMaterial;                                         // 0x002F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaMaterialName                                            FrontWallMaterial;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaMaterialName                                            BackWallMaterial;                                        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WH8G[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReflectionScalar;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbGain;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbTimeModifier;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverbBrightness;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QYW[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif