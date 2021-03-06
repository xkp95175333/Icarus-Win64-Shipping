// BlueprintGeneratedClass BP_Deployable_Hab_FoodCanister.BP_Deployable_Hab_FoodCanister_C
// Size: 0x588 (Inherited: 0x569)
struct ABP_Deployable_Hab_FoodCanister_C : ABP_HabDeployable_Base_C {
	char pad_569[0x7]; // 0x569(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct AHab_LightbulbSocket_C* Socket; // 0x578(0x08)
	struct UMaterialInstanceDynamic* CanisterFillMaterial; // 0x580(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Deployable_Hab_FoodCanister.BP_Deployable_Hab_FoodCanister_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void Deployable_Pickup(struct AActor* Instigator, bool PickedUp); // Function BP_Deployable_Hab_FoodCanister.BP_Deployable_Hab_FoodCanister_C.Deployable_Pickup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveBeginPlay(); // Function BP_Deployable_Hab_FoodCanister.BP_Deployable_Hab_FoodCanister_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a04fd0
	void UpdateHealthValue(struct UActorState* ActorState, float NewHealth); // Function BP_Deployable_Hab_FoodCanister.BP_Deployable_Hab_FoodCanister_C.UpdateHealthValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_Deployable_Hab_FoodCanister(int32_t EntryPoint); // Function BP_Deployable_Hab_FoodCanister.BP_Deployable_Hab_FoodCanister_C.ExecuteUbergraph_BP_Deployable_Hab_FoodCanister // (Final|UbergraphFunction) // @ game+0x1a04fd0
};

