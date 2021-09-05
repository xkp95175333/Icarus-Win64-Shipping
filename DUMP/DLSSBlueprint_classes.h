// Class DLSSBlueprint.DLSSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary {

	void SetDLSSSharpness(float Sharpness); // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xed1300
	void SetDLSSMode(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xed1290
	enum class UDLSSSupport QueryDLSSSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed1260
	bool IsDLSSSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed1130
	bool IsDLSSModeSupported(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed11e0
	struct TArray<enum class UDLSSMode> GetSupportedDLSSModes(); // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed1160
	float GetDLSSSharpness(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed1100
	void GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage); // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xed1020
	void GetDLSSModeInformation(enum class UDLSSMode DLSSMode, struct FVector2D ScreenResolution, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness); // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xed0d80
	enum class UDLSSMode GetDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed0d50
	void GetDLSSMinimumDriverVersion(int32_t MinDriverVersionMajor, int32_t MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xed0c70
	enum class UDLSSMode GetDefaultDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed1130
};

