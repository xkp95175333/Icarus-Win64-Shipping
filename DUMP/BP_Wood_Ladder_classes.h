// BlueprintGeneratedClass BP_Wood_Ladder.BP_Wood_Ladder_C
// Size: 0x578 (Inherited: 0x560)
struct ABP_Wood_Ladder_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UBoxComponent* Collision; // 0x568(0x08)
	struct UBP_LadderComponent_C* BP_LadderComponent; // 0x570(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Wood_Ladder.BP_Wood_Ladder_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Wood_Ladder.BP_Wood_Ladder_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_Wood_Ladder(int32_t EntryPoint); // Function BP_Wood_Ladder.BP_Wood_Ladder_C.ExecuteUbergraph_BP_Wood_Ladder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a04fd0
};

