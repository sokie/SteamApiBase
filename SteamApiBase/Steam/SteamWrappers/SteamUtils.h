/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
*/

#pragma once

#pragma region SteamUtils001

#pragma endregion

#pragma region SteamUtils002

#pragma endregion

#pragma region SteamUtils003

#pragma endregion

#pragma region SteamUtils004

#pragma endregion

#pragma region SteamUtils005

class SteamUtils005 : public ISteamUtils005
{
public:
	uint32 GetSecondsSinceAppActive();
	uint32 GetSecondsSinceComputerActive();
	EUniverse GetConnectedUniverse();
	uint32 GetServerRealTime();
	const char *GetIPCountry();

	bool GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight);
	bool GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize);

	bool GetCSERIPPort(uint32 *unIP, uint16 *usPort);

	uint8 GetCurrentBatteryPower();

	uint32 GetAppID();

	void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition);

	bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed);
	ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall);
	bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	bool IsOverlayEnabled();
	bool BOverlayNeedsPresent();

	SteamAPICall_t CheckFileSignature(const char *szFileName);

	bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength);
	uint32 GetEnteredGamepadTextLength();
	bool GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax);
};

#pragma endregion