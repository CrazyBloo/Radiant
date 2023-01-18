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
	 * Class GeometryCache.GeometryCache
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UGeometryCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_HCTQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGeometryCacheTrack*>                         Tracks;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5WP[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StartFrame;                                              // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    EndFrame;                                                // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint64_t                                                   Hash;                                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheActor
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class AGeometryCacheActor : public AActor
	{
	public:
		class UGeometryCacheComponent*                             GeometryCacheComponent;                                  // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGeometryCacheComponent* GetGeometryCacheComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGeometryCacheCodecBase : public UObject
	{
	public:
		TArray<int32_t>                                            TopologyRanges;                                          // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecRaw
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
	{
	public:
		int32_t                                                    DummyProperty;                                           // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DW69[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecV1
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
	{
	public:
		unsigned char                                              UnknownData_IXOI[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheComponent
	 * Size -> 0x0068 (FullSize[0x0510] - InheritedSize[0x04A8])
	 */
	class UGeometryCacheComponent : public UMeshComponent
	{
	public:
		class UGeometryCache*                                      GeometryCache;                                           // 0x04A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLooping;                                                // 0x04B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExtrapolateFrames;                                      // 0x04B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OHJX[0x1];                                   // 0x04B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTimeOffset;                                         // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlaybackSpeed;                                           // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MotionVectorScale;                                       // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTracks;                                               // 0x04C0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTime;                                             // 0x04C4(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G3OE[0x34];                                  // 0x04C8(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x04FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManualTick;                                             // 0x0500(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EVVW[0xF];                                   // 0x0501(0x000F) MISSED OFFSET (PADDING)

	public:
		void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
		void Stop();
		void SetStartTimeOffset(float NewStartTimeOffset);
		void SetPlaybackSpeed(float NewPlaybackSpeed);
		void SetMotionVectorScale(float NewMotionVectorScale);
		void SetLooping(bool bNewLooping);
		bool SetGeometryCache(class UGeometryCache* NewGeomCache);
		void SetExtrapolateFrames(bool bNewExtrapolating);
		void PlayReversedFromEnd();
		void PlayReversed();
		void PlayFromStart();
		void Play();
		void Pause();
		bool IsPlayingReversed();
		bool IsPlaying();
		bool IsLooping();
		bool IsExtrapolatingFrames();
		float GetStartTimeOffset();
		float GetPlaybackSpeed();
		float GetPlaybackDirection();
		int32_t GetNumberOfFrames();
		float GetMotionVectorScale();
		float GetDuration();
		float GetAnimationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGeometryCacheTrack : public UObject
	{
	public:
		float                                                      Duration;                                                // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NUXV[0x2C];                                  // 0x002C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
	{
	public:
		uint32_t                                                   NumMeshSamples;                                          // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LVAR[0x24];                                  // 0x005C(0x0024) MISSED OFFSET (PADDING)

	public:
		void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrackStreamable
	 * Size -> 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
	{
	public:
		class UGeometryCacheCodecBase*                             Codec;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I1D[0x68];                                  // 0x0060(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartSampleTime;                                         // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XGHU[0xC];                                   // 0x00CC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformAnimation
	 * Size -> 0x00B0 (FullSize[0x0108] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_DC7M[0xB0];                                  // 0x0058(0x00B0) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
	 * Size -> 0x00B0 (FullSize[0x0108] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_0RUX[0xB0];                                  // 0x0058(0x00B0) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
