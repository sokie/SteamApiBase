/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
		User.
*/

#pragma once

class ProxiedUser
{
public:
	static HSteamUser GetHSteamUser();

	static bool BLoggedOn();

	static CSteamID GetSteamID();

	static int InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure);
	static void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer);

	static void TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo = "");

	static bool GetUserDataFolder(char *pchBuffer, int cubBuffer);

	static void StartVoiceRecording();
	static void StopVoiceRecording();
	static EVoiceResult GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate);
	static EVoiceResult GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate);
	static EVoiceResult DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate);
	static uint32 GetVoiceOptimalSampleRate();

	static HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
	static EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID);
	static void EndAuthSession(CSteamID steamID);
	static void CancelAuthTicket(HAuthTicket hAuthTicket);
	static EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);
	static bool BIsBehindNAT();
	static void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer);
	static SteamAPICall_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude);
	static bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
	static int GetGameBadgeLevel(int nSeries, bool bFoil);
	static int GetPlayerSteamLevel();
};
