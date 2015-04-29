/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
*/

#pragma once

#include "..\..\StdInc.h"

#pragma region SteamUser001

#pragma endregion

#pragma region SteamUser002

#pragma endregion

#pragma region SteamUser003

#pragma endregion

#pragma region SteamUser004

#pragma endregion

#pragma region SteamUser005

#pragma endregion

#pragma region SteamUser006

#pragma endregion

#pragma region SteamUser007

#pragma endregion

#pragma region SteamUser008

#pragma endregion

#pragma region SteamUser009

#pragma endregion

#pragma region SteamUser010

#pragma endregion

#pragma region SteamUser011

#pragma endregion

#pragma region SteamUser012

#pragma endregion

#pragma region SteamUser013

#pragma endregion

#pragma region SteamUser014

#pragma endregion

#pragma region SteamUser015

#pragma endregion

#pragma region SteamUser016

class SteamUser016 : public ISteamUser016
{
public:
	// Returns the HSteamUser this interface represents.
	HSteamUser GetHSteamUser();

	// If we are connected to the backend.
	bool BLoggedOn();

	// Returns the current XUID.
	CSteamID GetSteamID();

	// Multiplayer authentication.
	int32_t InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure);
	void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer);

	// #### Legacy functions ####

	// Rarely used, ignore.
	void TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo = "");

	// Get storage relative to stem, like "C:\Progam Files\Steam\userdata\<SteamID>\<AppID>\local"
	bool GetUserDataFolder(char *pchBuffer, int32_t cubBuffer);

	// Starts voice recording. Once started, use GetCompressedVoice() to get the data.
	void StartVoiceRecording();

	// Stops voice recording. Because people often release push-to-talk keys early, the system will keep recording for a sec.
	void StopVoiceRecording();

	// Determine the amount of captured audio data that is available in bytes.
	EVoiceResult GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate);

	// Gets the latest voice data from the microphone.
	EVoiceResult GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate);

	// Decompresses a chunk of compressed data produced by GetVoice().
	EVoiceResult DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate);

	// This returns the frequency of the voice data as it's stored internally; calling DecompressVoice() with this size will yield the best results.
	uint32_t GetVoiceOptimalSampleRate();

	// Retrieve ticket to be sent to the entity who wishes to authenticate you. 
	uint32_t GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);

	// Authenticate ticket from entity steamID to be sure it is valid and isnt reused.
	EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID);

	// Stop tracking started by BeginAuthSession - called when no longer playing game with this entity.
	void EndAuthSession(CSteamID steamID);

	// Cancel auth ticket from GetAuthSessionTicket, called when no longer playing game with the entity you gave the ticket to.
	void CancelAuthTicket(HAuthTicket hAuthTicket);

	// After receiving a user's authentication data, and passing it to BeginAuthSession, use this function
	// to determine if the user owns downloadable content specified by the provided AppID.
	EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);

	// Misc.
	bool BIsBehindNAT();
	void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer);

	// These need more research.
	SteamAPICall_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude);
	bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
};

#pragma endregion

#pragma region SteamUser017

#pragma endregion