// BlueprintGeneratedClass BP_StoneFurnace.BP_StoneFurnace_C
// Size: 0x739 (Inherited: 0x700)
struct ABP_StoneFurnace_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Furnace_Stone_SHA; // 0x708(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x710(0x08)
	struct UPointLightComponent* PointLight_Bounce_Exterior; // 0x718(0x08)
	struct UPointLightComponent* PointLight_Bounce_Top; // 0x720(0x08)
	struct UPointLightComponent* PointLight_Main_Shadow; // 0x728(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x730(0x08)
	bool ActiveEffects; // 0x738(0x01)

	void OnRep_ActiveEffects(); // Function BP_StoneFurnace.BP_StoneFurnace_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ReceiveBeginPlay(); // Function BP_StoneFurnace.BP_StoneFurnace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a04fd0
	void OnGeneratorStateUpdated(bool IsActive); // Function BP_StoneFurnace.BP_StoneFurnace_C.OnGeneratorStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_BP_StoneFurnace(int32_t EntryPoint); // Function BP_StoneFurnace.BP_StoneFurnace_C.ExecuteUbergraph_BP_StoneFurnace // (Final|UbergraphFunction) // @ game+0x1a04fd0
};

