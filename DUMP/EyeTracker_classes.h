// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2bc5190
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2bc5160
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2bc5130
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2bc5090
	bool GetGazeData(struct FEyeTrackerGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2bc4fe0
};

