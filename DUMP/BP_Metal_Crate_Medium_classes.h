// BlueprintGeneratedClass BP_Metal_Crate_Medium.BP_Metal_Crate_Medium_C
// Size: 0x588 (Inherited: 0x572)
struct ABP_Metal_Crate_Medium_C : ABP_DeployableContainerBase_C {
	char pad_572[0x6]; // 0x572(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x580(0x08)

	void OnBecomeInteractedWith(); // Function BP_Metal_Crate_Medium.BP_Metal_Crate_Medium_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void OnNoLongerInteractedWith(); // Function BP_Metal_Crate_Medium.BP_Metal_Crate_Medium_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_Metal_Crate_Medium(int32_t EntryPoint); // Function BP_Metal_Crate_Medium.BP_Metal_Crate_Medium_C.ExecuteUbergraph_BP_Metal_Crate_Medium // (Final|UbergraphFunction) // @ game+0x1a04fd0
};
