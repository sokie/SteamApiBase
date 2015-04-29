/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
*/

#include "..\..\StdInc.h"

#pragma region SteamUtils001

#pragma endregion

#pragma region SteamUtils002

#pragma endregion

#pragma region SteamUtils003

#pragma endregion

#pragma region SteamUtils004

#pragma endregion

#pragma region SteamUtils005

// Return the number of seconds since
uint32 SteamUtils005::GetSecondsSinceAppActive()
{
	return ProxiedUtils::GetSecondsSinceAppActive();
}
uint32 SteamUtils005::GetSecondsSinceComputerActive()
{
	return ProxiedUtils::GetSecondsSinceComputerActive();
}

// Each universe is a self-contained Steam instance.
EUniverse SteamUtils005::GetConnectedUniverse()
{
	return ProxiedUtils::GetConnectedUniverse();
}

// Steam servertime, UNIX time.
uint32 SteamUtils005::GetServerRealTime()
{
	return ProxiedUtils::GetConnectedUniverse();
}

// Return the two digit ISO 3166-1-alpha-2 country code.
const char *SteamUtils005::GetIPCountry()
{
	return ProxiedUtils::GetIPCountry();
}

// Returns true if the image exists.
bool SteamUtils005::GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
	return ProxiedUtils::GetImageSize(iImage, pnWidth, pnHeight);
}

// Returns true if the image exists.
bool SteamUtils005::GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)
{
	return ProxiedUtils::GetImageRGBA(iImage, pubDest, nDestBufferSize);
}

// Returns the IP of the reporting server for Valve.
bool SteamUtils005::GetCSERIPPort(uint32_t *unIP, uint16_t *usPort)
{
	return ProxiedUtils::GetCSERIPPort(unIP, usPort);
}

// Return the percent of battery left, 255 for AC power.
uint8 SteamUtils005::GetCurrentBatteryPower()
{
	return ProxiedUtils::GetCurrentBatteryPower();
}

// Returns the ID of the current process.
uint32 SteamUtils005::GetAppID()
{
	return ProxiedUtils::GetAppID();
}

// Sets the position where the overlay instance for the currently calling game should show notifications.
void SteamUtils005::SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)
{
	return ProxiedUtils::SetOverlayNotificationPosition(eNotificationPosition);
}

// API asynchronous call results
bool SteamUtils005::IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
	return ProxiedUtils::IsAPICallCompleted(hSteamAPICall, pbFailed);
}
ESteamAPICallFailure SteamUtils005::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)
{
	return ProxiedUtils::GetAPICallFailureReason(hSteamAPICall);
}
bool SteamUtils005::GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
	return ProxiedUtils::GetAPICallResult(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

// Called each frame to process matchmaking results.
// Redundant if SteamAPI_RunCallbacks() is called.
void SteamUtils005::RunFrame()
{
	return ProxiedUtils::RunFrame();
}

// Returns the number of IPC calls made since the last time this func was called.
// For performance debugging.
uint32 SteamUtils005::GetIPCCallCount()
{
	return ProxiedUtils::GetIPCCallCount();
}

// API warning handling
void SteamUtils005::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	return ProxiedUtils::SetWarningMessageHook(pFunction);
}

// Returns true if the overlay is enabled.
bool SteamUtils005::IsOverlayEnabled()
{
	return ProxiedUtils::IsOverlayEnabled();
}

// Used when the game doesn't refresh in a loop.
bool SteamUtils005::BOverlayNeedsPresent()
{
	return ProxiedUtils::BOverlayNeedsPresent();
}

// Creates a hash of the file.
SteamAPICall_t SteamUtils005::CheckFileSignature(const char *szFileName)
{
	return ProxiedUtils::CheckFileSignature(szFileName);
}

// Gamepad support.
bool SteamUtils005::ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength)
{
	return ProxiedUtils::ShowGamepadTextInput(eInputMode, eInputLineMode, szText, uMaxLength, NULL);
}
uint32 SteamUtils005::GetEnteredGamepadTextLength()
{
	return ProxiedUtils::GetEnteredGamepadTextLength();
}
bool SteamUtils005::GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax)
{
	return ProxiedUtils::GetEnteredGamepadTextInput(pchValue, cchValueMax);
}

#pragma endregion