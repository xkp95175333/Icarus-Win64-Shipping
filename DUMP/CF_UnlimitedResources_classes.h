// WidgetBlueprintGeneratedClass CF_UnlimitedResources.CF_UnlimitedResources_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_UnlimitedResources_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_UnlimitedResources.CF_UnlimitedResources_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a04fd0
	void OnCheckboxStateChanged(bool NewState); // Function CF_UnlimitedResources.CF_UnlimitedResources_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_CF_UnlimitedResources(int32_t EntryPoint); // Function CF_UnlimitedResources.CF_UnlimitedResources_C.ExecuteUbergraph_CF_UnlimitedResources // (Final|UbergraphFunction) // @ game+0x1a04fd0
};

