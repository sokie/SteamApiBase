/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
		Utils.
*/

#pragma once

class ProxiedUtils
{
public:
	static uint32 GetSecondsSinceAppActive();
	static uint32 GetSecondsSinceComputerActive();
	static EUniverse GetConnectedUniverse();
	static uint32 GetServerRealTime();
	static const char *GetIPCountry();

	static bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight);
	static bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize);

	static bool GetCSERIPPort(uint32 *unIP, uint16 *usPort);
	static uint8 GetCurrentBatteryPower();

	static uint32 GetAppID();

	static void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition);

	static bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed);
	static ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall);
	static bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed);

	static void RunFrame();

	static uint32 GetIPCCallCount();

	static void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	static bool IsOverlayEnabled();
	static bool BOverlayNeedsPresent();

	static SteamAPICall_t CheckFileSignature(const char *szFileName);

	static bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength, const char * pUnk);

	static uint32 GetEnteredGamepadTextLength();
	static bool GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax);

	static const char *GetSteamUILanguage();
	static bool IsSteamRunningInVR();
};
