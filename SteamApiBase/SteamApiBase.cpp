#include "STDInc.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		// Init
		Log::Init("SteamApiBase.log", LogLevel_All);
		Log::Info("SteamApiBase", "Starting up..");
	}

	if (ul_reason_for_call == DLL_PROCESS_DETACH)
	{
		// Clear
		Log::Stop();
	}

	return TRUE;
}