// AnimBlueprintGeneratedClass SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C
// Size: 0x18a1 (Inherited: 0x9c0)
struct USK_BOW_Recurve_AnimBP_C : UIcarusBowAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x9c8(0x30)
	struct FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x9f8(0x70)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xa68(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xb08(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xb88(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xc28(0x50)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xc78(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xcc8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xd68(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xde8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xe30(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xe78(0xa0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; // 0xf18(0x368)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x1280(0x368)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x15e8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1740(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1768(0x28)
	struct FVector __CustomProperty_ArrowPlacment_E90AF9D644AEB8C07771F59532BDEF56; // 0x1790(0x0c)
	char pad_179C[0x4]; // 0x179c(0x04)
	struct FTransform __CustomProperty_String_Global_Position_E90AF9D644AEB8C07771F59532BDEF56; // 0x17a0(0x30)
	struct FVector __CustomProperty_ArrowPlacment_63770F5D487BC3C2C8FC61BDF209CFEB; // 0x17d0(0x0c)
	char pad_17DC[0x4]; // 0x17dc(0x04)
	struct FTransform __CustomProperty_AttachArrowToHand_63770F5D487BC3C2C8FC61BDF209CFEB; // 0x17e0(0x30)
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; // 0x1810(0x08)
	struct AIcarusPlayerCharacter* Player; // 0x1818(0x08)
	struct UBP_FocusableBehaviour_C* FocusableRef; // 0x1820(0x08)
	bool Focusing; // 0x1828(0x01)
	char pad_1829[0x7]; // 0x1829(0x07)
	struct FTransform StringWorldPosition; // 0x1830(0x30)
	struct FVector HandArrowPlacment; // 0x1860(0x0c)
	bool IsArrowDetached; // 0x186c(0x01)
	char pad_186D[0x3]; // 0x186d(0x03)
	struct FTransform AttachOffset; // 0x1870(0x30)
	bool Is3RDCha; // 0x18a0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	bool IsHandConnectedToString(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.IsHandConnectedToString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a04fd0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_BlendListByBool_9FE755934092A3714CDB3BABCD5F562B(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_BlendListByBool_9FE755934092A3714CDB3BABCD5F562B // (BlueprintEvent) // @ game+0x1a04fd0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequencePlayer_6D67B7A94934BA80010E5EB98B8BC4AA(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequencePlayer_6D67B7A94934BA80010E5EB98B8BC4AA // (BlueprintEvent) // @ game+0x1a04fd0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_BlendListByBool_5CCE1804490BB6F54953859DB5E08E0B(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_BlendListByBool_5CCE1804490BB6F54953859DB5E08E0B // (BlueprintEvent) // @ game+0x1a04fd0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequenceEvaluator_CED749E64C3E4B0A031299956B3C373E(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequenceEvaluator_CED749E64C3E4B0A031299956B3C373E // (BlueprintEvent) // @ game+0x1a04fd0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequenceEvaluator_736F35A04FB3715EF40F09B932EC537D(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequenceEvaluator_736F35A04FB3715EF40F09B932EC537D // (BlueprintEvent) // @ game+0x1a04fd0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequencePlayer_709802004986C92C91829C952F86F9CC(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_AnimBP_AnimGraphNode_SequencePlayer_709802004986C92C91829C952F86F9CC // (BlueprintEvent) // @ game+0x1a04fd0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a04fd0
	void AnimNotify_Bow_AttachArrow(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.AnimNotify_Bow_AttachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void AnimNotify_Bow_DetachArrow(); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.AnimNotify_Bow_DetachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a04fd0
	void ExecuteUbergraph_SK_BOW_Recurve_AnimBP(int32_t EntryPoint); // Function SK_BOW_Recurve_AnimBP.SK_BOW_Recurve_AnimBP_C.ExecuteUbergraph_SK_BOW_Recurve_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a04fd0
};

