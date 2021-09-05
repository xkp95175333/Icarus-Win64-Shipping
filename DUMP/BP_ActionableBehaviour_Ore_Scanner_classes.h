// BlueprintGeneratedClass BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C
// Size: 0x308 (Inherited: 0x2d8)
struct UBP_ActionableBehaviour_Ore_Scanner_C : UBP_ActionableBehaviour_Radial_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCapsuleComponent* HitCollider; // 0x2e0(0x08)
	struct AActor* OwningActor; // 0x2e8(0x08)
	struct ABP_SkeletalItem_Ore_Scanner_C* OreScannerRef; // 0x2f0(0x08)
	struct TArray<struct FContextMenuItemData> Options; // 0x2f8(0x10)

	void GetContextMenuItems(struct TArray<struct FContextMenuItemData> MenuItems); // Function BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C.GetContextMenuItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a04fd0
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // Function BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C.MenuItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_ActionableBehaviour_Ore_Scanner(int32_t EntryPoint); // Function BP_ActionableBehaviour_Ore_Scanner.BP_ActionableBehaviour_Ore_Scanner_C.ExecuteUbergraph_BP_ActionableBehaviour_Ore_Scanner // (Final|UbergraphFunction) // @ game+0x1a04fd0
};

