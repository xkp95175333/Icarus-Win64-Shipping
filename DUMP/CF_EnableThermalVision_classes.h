// WidgetBlueprintGeneratedClass CF_EnableThermalVision.CF_EnableThermalVision_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_EnableThermalVision_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_EnableThermalVision.CF_EnableThermalVision_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a04fd0
	void OnCheckboxStateChanged(bool NewState); // Function CF_EnableThermalVision.CF_EnableThermalVision_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_CF_EnableThermalVision(int32_t EntryPoint); // Function CF_EnableThermalVision.CF_EnableThermalVision_C.ExecuteUbergraph_CF_EnableThermalVision // (Final|UbergraphFunction) // @ game+0x1a04fd0
};

