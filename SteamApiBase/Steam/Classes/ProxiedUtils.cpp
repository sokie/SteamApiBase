/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
		Utils.
*/

#include "..\..\StdInc.h"

// Return the number of seconds since
uint32_t ProxiedUtils::GetSecondsSinceAppActive()
{
	HHSDBG();
	return (uint32_t)((std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - Global::StartupPoint).count()) / 1000);
}
uint32_t ProxiedUtils::GetSecondsSinceComputerActive()
{
	HHSDBG();
	return (uint32_t)GetTickCount64() / 1000;
}

// Each universe is a self-contained Steam instance.
EUniverse ProxiedUtils::GetConnectedUniverse()
{
	HHSDBG();
	return k_EUniversePublic;
}

// Steam servertime, UNIX time.
uint32_t ProxiedUtils::GetServerRealTime()
{
	HHSDBG();
#ifdef _WIN64
	return 0;
#else
	return (uint32_t)time(NULL);
#endif
}

// Return the two digit ISO 3166-1-alpha-2 country code.
const char *ProxiedUtils::GetIPCountry()
{
	HHSDBG();
	return "SE"; // TODO: Query the master..
}

// Returns true if the image exists.
bool ProxiedUtils::GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
	HHSDBG();
	return false;
}

// Returns true if the image exists.
bool ProxiedUtils::GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)
{
	HHSDBG();
	return false;
}

// Returns the IP of the reporting server for Valve.
bool ProxiedUtils::GetCSERIPPort(uint32_t *unIP, uint16_t *usPort)
{
	HHSDBG();
	return false;
}

// Return the percent of battery left, 255 for AC power.
uint8_t ProxiedUtils::GetCurrentBatteryPower()
{
	HHSDBG();
	return 255;
}

// Returns the ID of the current process.
uint32_t ProxiedUtils::GetAppID()
{
	HHSDBG();
	return Global::Steam_AppID;
}

// Sets the position where the overlay instance for the currently calling game should show notifications.
void ProxiedUtils::SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)
{
	HHSDBG();
}

// API asynchronous call results
bool ProxiedUtils::IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
	HHSDBG();
	return false;
}
ESteamAPICallFailure ProxiedUtils::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)
{
	HHSDBG();
	return k_ESteamAPICallFailureNone;
}
bool ProxiedUtils::GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
	HHSDBG();
	return false;
}

// Called each frame to process matchmaking results.
// Redundant if SteamAPI_RunCallbacks() is called.
void ProxiedUtils::RunFrame()
{
	HHSDBG();
}

// Returns the number of IPC calls made since the last time this func was called.
// For performance debugging.
uint32_t ProxiedUtils::GetIPCCallCount()
{
	HHSDBG();
	return 0;
}

// API warning handling
void ProxiedUtils::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	HHSDBG();
}

// Returns true if the overlay is enabled.
bool ProxiedUtils::IsOverlayEnabled()
{
	HHSDBG();
	return true;
}

// Used when the game doesn't refresh in a loop.
bool ProxiedUtils::BOverlayNeedsPresent()
{
	HHSDBG();
	return false;
}

// Creates a hash of the file.
SteamAPICall_t ProxiedUtils::CheckFileSignature(const char *szFileName)
{
	HHSDBG();
	return 0; // TODO: Proper hashing.
}

// Gamepad support.
bool ProxiedUtils::ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength, const char * pUnk)
{
	HHSDBG();
	return false;
}
uint32_t ProxiedUtils::GetEnteredGamepadTextLength()
{
	HHSDBG();
	return 0;
}
bool ProxiedUtils::GetEnteredGamepadTextInput(char *pchValue, uint32_t cchValueMax)
{
	HHSDBG();
	return false;
}

const char *ProxiedUtils::GetSteamUILanguage()
{
	HHSDBG();
	return Global::Steam_Language;
}

bool ProxiedUtils::IsSteamRunningInVR()
{
	HHSDBG();
	return false;
}