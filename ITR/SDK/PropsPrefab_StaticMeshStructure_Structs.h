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
	 * UserDefinedStruct PropsPrefab_StaticMeshStructure.PropsPrefab_StaticMeshStructure
	 * Size -> 0x0018
	 */
	struct FPropsPrefab_StaticMeshStructure
	{
	public:
		class UStaticMesh*                                         StaticMesh_3_C9AFAD1A494E7F55D81ADA980EE14941;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPrefabMaterialOverrideStructure>            MaterialOverride_8_9C937A6848CD7FC8519788B316AEF09D;     // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
