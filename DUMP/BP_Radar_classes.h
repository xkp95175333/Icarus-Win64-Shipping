// BlueprintGeneratedClass BP_Radar.BP_Radar_C
// Size: 0x5b1 (Inherited: 0x560)
struct ABP_Radar_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UFMODAudioComponent* FMOD_Radar_Audio; // 0x568(0x08)
	struct UPointLightComponent* PointLight; // 0x570(0x08)
	struct UStaticMeshComponent* Cube; // 0x578(0x08)
	bool IsOn; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	int32_t ScanningTileX; // 0x584(0x04)
	int32_t ScanningTileY; // 0x588(0x04)
	float Progress; // 0x58c(0x04)
	float SecondsToScan; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct AMapManager_C* MapManager; // 0x598(0x08)
	int32_t SpiralRadiusMax; // 0x5a0(0x04)
	int32_t SpiralRadiusCurrent; // 0x5a4(0x04)
	int32_t SpiralLastX; // 0x5a8(0x04)
	int32_t SpiralLastY; // 0x5ac(0x04)
	bool Completed; // 0x5b0(0x01)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Radar.BP_Radar_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void OnRep_IsOn(); // Function BP_Radar.BP_Radar_C.OnRep_IsOn // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void NextSpiralScanLocation(bool Success); // Function BP_Radar.BP_Radar_C.NextSpiralScanLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveTick(float DeltaSeconds); // Function BP_Radar.BP_Radar_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveBeginPlay(); // Function BP_Radar.BP_Radar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a04fd0
	void Activate(struct AActor* Instigator); // Function BP_Radar.BP_Radar_C.Activate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_Radar(int32_t EntryPoint); // Function BP_Radar.BP_Radar_C.ExecuteUbergraph_BP_Radar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a04fd0
};

