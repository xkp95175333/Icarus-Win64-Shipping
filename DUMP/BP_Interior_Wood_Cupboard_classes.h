// BlueprintGeneratedClass BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C
// Size: 0x588 (Inherited: 0x572)
struct ABP_Interior_Wood_Cupboard_C : ABP_DeployableContainerBase_C {
	char pad_572[0x6]; // 0x572(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x580(0x08)

	void OnBecomeInteractedWith(); // Function BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void OnNoLongerInteractedWith(); // Function BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_Interior_Wood_Cupboard(int32_t EntryPoint); // Function BP_Interior_Wood_Cupboard.BP_Interior_Wood_Cupboard_C.ExecuteUbergraph_BP_Interior_Wood_Cupboard // (Final|UbergraphFunction) // @ game+0x1a04fd0
};

