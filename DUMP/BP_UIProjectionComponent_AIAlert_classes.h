// BlueprintGeneratedClass BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C
// Size: 0x120 (Inherited: 0x104)
struct UBP_UIProjectionComponent_AIAlert_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	int32_t AlertValue; // 0x110(0x04)
	bool PerceptionEnabled; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float HealthValue; // 0x118(0x04)
	float AlertTickRate; // 0x11c(0x04)

	void OnRep_HealthValue(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_HealthValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void OnRep_AlertValue(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_AlertValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void UpdateHealthState(struct UActorState* ActorState, float NewHealth); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.UpdateHealthState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void UpdatePerceptionState(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.UpdatePerceptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void GetWidgetLocation(struct FVector Location); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.GetWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a04fd0
	void OnStatContainerUpdated(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnStatContainerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveTick(float DeltaSeconds); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a04fd0
	void AlertTick(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.AlertTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_UIProjectionComponent_AIAlert(int32_t EntryPoint); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.ExecuteUbergraph_BP_UIProjectionComponent_AIAlert // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a04fd0
};

