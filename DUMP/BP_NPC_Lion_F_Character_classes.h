// BlueprintGeneratedClass BP_NPC_Lion_F_Character.BP_NPC_Lion_F_Character_C
// Size: 0x871 (Inherited: 0x858)
struct ABP_NPC_Lion_F_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AI; // 0x858(0x08)
	struct USceneComponent* Alert; // 0x860(0x08)
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; // 0x868(0x08)
	enum class EGOAPProperty FastestActiveState; // 0x870(0x01)

	void Get Stance Transition Montage(enum class EGOAPCharacterStance NewStance, struct UAnimMontage* OutMontage); // Function BP_NPC_Lion_F_Character.BP_NPC_Lion_F_Character_C.Get Stance Transition Montage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void GetAlertWidgetLocation(struct FVector Location); // Function BP_NPC_Lion_F_Character.BP_NPC_Lion_F_Character_C.GetAlertWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void FindFloorAngle(float Angle); // Function BP_NPC_Lion_F_Character.BP_NPC_Lion_F_Character_C.FindFloorAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a04fd0
};

