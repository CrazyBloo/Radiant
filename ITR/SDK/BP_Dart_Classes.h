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
	 * BlueprintGeneratedClass BP_Dart.BP_Dart_C
	 * Size -> 0x0000 (FullSize[0x0999] - InheritedSize[0x0999])
	 */
	class ABP_Dart_C : public ABP_Knife_C
	{
	public:
		void PlayImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse, class UObject* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
