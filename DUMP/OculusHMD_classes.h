// Class OculusHMD.OculusFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusFunctionLibrary : UBlueprintFunctionLibrary {

	void SetReorientHMDOnControllerRecenter(bool recenterMode); // Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142ba0
	void SetPositionScale3D(struct FVector PosScale3D); // Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1142b40
	void SetGuardianVisibility(bool GuardianVisible); // Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142ac0
	void SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level, bool isDynamic); // Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142a00
	void SetDisplayFrequency(float RequestedFrequency); // Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142980
	void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel); // Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142740
	void SetColorScaleAndOffset(struct FLinearColor ColorScale, struct FLinearColor ColorOffset, bool bApplyToAllLayers); // Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1142870
	void SetClientColorDesc(enum class EColorSpace ColorSpace); // Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1142800
	void SetBaseRotationAndPositionOffset(struct FRotator BaseRot, struct FVector PosOffset, enum class EOrientPositionSelector Options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1142620
	void SetBaseRotationAndBaseOffsetInMeters(struct FRotator Rotation, struct FVector BaseOffsetInMeters, enum class EOrientPositionSelector Options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1142500
	bool IsGuardianDisplayed(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11424d0
	bool IsGuardianConfigured(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11424a0
	bool IsDeviceTracked(enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1142420
	bool HasSystemOverlayPresent(); // Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11423f0
	bool HasInputFocus(); // Function OculusHMD.OculusFunctionLibrary.HasInputFocus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11423c0
	bool GetUserProfile(struct FHmdUserProfile Profile); // Function OculusHMD.OculusFunctionLibrary.GetUserProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1142290
	bool GetSystemHmd3DofModeEnabled(); // Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1142260
	void GetRawSensorData(struct FVector AngularAcceleration, struct FVector LinearAcceleration, struct FVector AngularVelocity, struct FVector LinearVelocity, float TimeInSeconds, enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.GetRawSensorData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1142020
	void GetPose(struct FRotator DeviceRotation, struct FVector DevicePosition, struct FVector NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, struct FVector PositionScale); // Function OculusHMD.OculusFunctionLibrary.GetPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141e10
	struct FGuardianTestResult GetPointGuardianIntersection(struct FVector Point, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1141d30
	struct FTransform GetPlayAreaTransform(); // Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141cd0
	struct FGuardianTestResult GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1141bf0
	enum class EColorSpace GetHmdColorDesc(); // Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141bc0
	struct TArray<struct FVector> GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace); // Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141ab0
	struct FVector GetGuardianDimensions(enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141a20
	void GetGPUUtilization(bool IsGPUAvailable, float GPUUtilization); // Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1141940
	float GetGPUFrameTime(); // Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141910
	enum class EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel(); // Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11418e0
	enum class EOculusDeviceType GetDeviceType(); // Function OculusHMD.OculusFunctionLibrary.GetDeviceType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11418b0
	struct FString GetDeviceName(); // Function OculusHMD.OculusFunctionLibrary.GetDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141830
	float GetCurrentDisplayFrequency(); // Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1141800
	void GetBaseRotationAndPositionOffset(struct FRotator OutRot, struct FVector OutPosOffset); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1141730
	void GetBaseRotationAndBaseOffsetInMeters(struct FRotator OutRotation, struct FVector OutBaseOffsetInMeters); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1141660
	struct TArray<float> GetAvailableDisplayFrequencies(); // Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11415e0
	void EnablePositionTracking(bool bPositionTracking); // Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1141560
	void EnableOrientationTracking(bool bOrientationTracking); // Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11414e0
	void ClearLoadingSplashScreens(); // Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11414c0
	void AddLoadingSplashScreen(struct UTexture2D* Texture, struct FVector TranslationInMeters, struct FRotator Rotation, struct FVector2D SizeInMeters, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x11412c0
};

// Class OculusHMD.OculusHMDRuntimeSettings
// Size: 0x60 (Inherited: 0x28)
struct UOculusHMDRuntimeSettings : UObject {
	bool bAutoEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FOculusSplashDesc> SplashDescs; // 0x30(0x10)
	bool bEnableSpecificColorGamut; // 0x40(0x01)
	enum class EColorSpace ColorSpace; // 0x41(0x01)
	bool bSupportsDash; // 0x42(0x01)
	bool bCompositesDepth; // 0x43(0x01)
	bool bHQDistortion; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float PixelDensityMin; // 0x48(0x04)
	float PixelDensityMax; // 0x4c(0x04)
	int32_t CPULevel; // 0x50(0x04)
	int32_t GPULevel; // 0x54(0x04)
	enum class EFixedFoveatedRenderingLevel FFRLevel; // 0x58(0x01)
	bool FFRDynamic; // 0x59(0x01)
	bool bChromaCorrection; // 0x5a(0x01)
	bool bRecenterHMDWithController; // 0x5b(0x01)
	bool bFocusAware; // 0x5c(0x01)
	bool bRequiresSystemKeyboard; // 0x5d(0x01)
	enum class EHandTrackingSupport HandTrackingSupport; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// Class OculusHMD.OculusResourceHolder
// Size: 0x30 (Inherited: 0x28)
struct UOculusResourceHolder : UObject {
	struct UMaterial* PokeAHoleMaterial; // 0x28(0x08)
};

// Class OculusHMD.OculusSceneCaptureCubemap
// Size: 0x90 (Inherited: 0x28)
struct UOculusSceneCaptureCubemap : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct USceneCaptureComponent2D*> CaptureComponents; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)
};

