// Class AudioMixer.SynthComponent
// Size: 0x6c0 (Inherited: 0x200)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f8(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x1f8(0x01)
	char bAllowSpatialization : 1; // 0x1f8(0x01)
	char bOverrideAttenuation : 1; // 0x1f8(0x01)
	char bOutputToBusOnly : 1; // 0x1fc(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x200(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x208(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5a8(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5b0(0x50)
	struct USoundClass* SoundClass; // 0x600(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x608(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x610(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x618(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x628(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x638(0x10)
	char bIsUISound : 1; // 0x648(0x01)
	char bIsPreviewSound : 1; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x64c(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x658(0x10)
	char pad_668[0x20]; // 0x668(0x20)
	struct USynthSound* Synth; // 0x688(0x08)
	struct UAudioComponent* AudioComponent; // 0x690(0x08)
	char pad_698[0x28]; // 0x698(0x28)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x2b17c60
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x2b17850
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x2b177d0
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // @ game+0x2b17380
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function AudioMixer.SynthComponent.SetLowPassFilterFrequency // (Native|Public|BlueprintCallable) // @ game+0x15ad0f0
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Function AudioMixer.SynthComponent.SetLowPassFilterEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2b16ab0
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b15780
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : UObject {
	char pad_28[0x80]; // 0x28(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b18260
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b17e00
	void StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b17d40
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b17c80
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b17b50
	void StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b17a90
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b17870
	void SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b171f0
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b168d0
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b16650
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b16390
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b16290
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b16190
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b16090
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b15fd0
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b15f00
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b15e80
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b15dc0
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b15b90
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b159a0
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b157b0
	bool IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b156b0
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float> Frequencies, struct TArray<float> Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2b15160
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b15090
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float> Frequencies, struct TArray<float> Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2b14e60
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b14800
	void ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b146f0
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b14670
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b14570
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b14460
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b143a0
};

// Class AudioMixer.QuartzClockHandle
// Size: 0x190 (Inherited: 0x28)
struct UQuartzClockHandle : UObject {
	char pad_28[0x168]; // 0x28(0x168)

	void UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision // (Final|Native|Public|BlueprintCallable) // @ game+0x2b18380
	void UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions // (Final|Native|Public|BlueprintCallable) // @ game+0x2b182f0
	void SubscribeToQuantizationEvent(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct FDelegate OnQuantizationEvent); // Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b18120
	void SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, struct FDelegate OnQuantizationEvent); // Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b18030
	void SetTicksPerSecond(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary QuantizationBoundary, struct FDelegate Delegate, float TicksPerSecond); // Function AudioMixer.QuartzClockHandle.SetTicksPerSecond // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b17610
	void SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary QuantizationBoundary, struct FDelegate Delegate, float ThirtySecondsNotesPerMinute); // Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b17450
	void SetSecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary QuantizationBoundary, struct FDelegate Delegate, float SecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetSecondsPerTick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b16d00
	void SetMillisecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary QuantizationBoundary, struct FDelegate Delegate, float MillisecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b16b40
	void SetBeatsPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary QuantizationBoundary, struct FDelegate Delegate, float BeatsPerMinute); // Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b16710
	void ResumeClock(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.ResumeClock // (Final|Native|Public|BlueprintCallable) // @ game+0x2b165c0
	void ResetTransport(struct UObject* WorldContextObject, struct FDelegate InDelegate); // Function AudioMixer.QuartzClockHandle.ResetTransport // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b164d0
	void PauseClock(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.PauseClock // (Final|Native|Public|BlueprintCallable) // @ game+0x2b15d30
	float GetTicksPerSecond(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetTicksPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b15610
	float GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b15570
	float GetSecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetSecondsPerTick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b154d0
	float GetMillisecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b14ff0
	float GetBeatsPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b14bb0
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x130 (Inherited: 0x68)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_68[0x78]; // 0x68(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xe0(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b16ec0
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x2b16a20
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xb0 (Inherited: 0x68)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11916a0
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0x110 (Inherited: 0x68)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_68[0x68]; // 0x68(0x68)
	struct FSubmixEffectReverbSettings Settings; // 0xd0(0x40)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x2b170e0
	void SetSettings(struct FSubmixEffectReverbSettings InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b16fd0
};

// Class AudioMixer.QuartzSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UQuartzSubsystem : UWorldSubsystem {
	char pad_30[0x50]; // 0x30(0x50)

	float GetRoundTripMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b15430
	float GetRoundTripMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b15390
	float GetRoundTripAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b152f0
	struct UQuartzClockHandle* GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.GetHandleForClock // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14d90
	float GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14cf0
	float GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14cf0
	float GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14c50
	float GetAudioRenderThreadToGameThreadMinLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14b80
	float GetAudioRenderThreadToGameThreadMaxLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14b50
	float GetAudioRenderThreadToGameThreadAverageLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14b20
	bool DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.DoesClockExist // (Final|Native|Public|BlueprintCallable) // @ game+0x2b14a50
	struct UQuartzClockHandle* CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists); // Function AudioMixer.QuartzSubsystem.CreateNewClock // (Final|Native|Public|BlueprintCallable) // @ game+0x2b148c0
};

// Class AudioMixer.SynthSound
// Size: 0x3e0 (Inherited: 0x3c0)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x3c0(0x08)
	char pad_3C8[0x18]; // 0x3c8(0x18)
};

