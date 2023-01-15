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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DLSSBlueprint.UDLSSMode
	 */
	enum class EUDLSSMode : uint8_t
	{
		UDLSSMode_Off              = 0,
		UDLSSMode_Auto             = 1,
		UDLSSMode_UltraQuality     = 2,
		UDLSSMode_Quality          = 3,
		UDLSSMode_Balanced         = 4,
		UDLSSMode_Performance      = 5,
		UDLSSMode_UltraPerformance = 6,
		UDLSSMode_UDLSSMode_MAX    = 7
	};

	/**
	 * Enum DLSSBlueprint.UDLSSSupport
	 */
	enum class EUDLSSSupport : uint8_t
	{
		UDLSSSupport_Supported                            = 0,
		UDLSSSupport_NotSupported                         = 1,
		UDLSSSupport_NotSupportedIncompatibleHardware     = 2,
		UDLSSSupport_NotSupportedDriverOutOfDate          = 3,
		UDLSSSupport_NotSupportedOperatingSystemOutOfDate = 4,
		UDLSSSupport_NotSupportedByPlatformAtBuildTime    = 5,
		UDLSSSupport_UDLSSSupport_MAX                     = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
