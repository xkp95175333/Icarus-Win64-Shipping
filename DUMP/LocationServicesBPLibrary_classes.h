// Class LocationServicesBPLibrary.LocationServices
// Size: 0x28 (Inherited: 0x28)
struct ULocationServices : UBlueprintFunctionLibrary {

	bool StopLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StopLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b970
	bool StartLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StartLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b940
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy); // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b8c0
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter); // Function LocationServicesBPLibrary.LocationServices.InitLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b7b0
	struct ULocationServicesImpl* GetLocationServicesImpl(); // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b790
	struct FLocationServicesData GetLastKnownLocation(); // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b750
	bool AreLocationServicesEnabled(); // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x111b720
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// Size: 0x38 (Inherited: 0x28)
struct ULocationServicesImpl : UObject {
	struct FMulticastInlineDelegate OnLocationChanged; // 0x28(0x10)
};

