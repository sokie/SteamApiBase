/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
		Users.
*/

#include "..\..\StdInc.h"

// Returns the HSteamUser this interface represents.
HSteamUser ProxiedUser::GetHSteamUser()
{
	HHSDBG();
	return NULL;
}

// If we are connected to the backend.
bool ProxiedUser::BLoggedOn()
{
	return true;
}

// Returns the current XUID.
CSteamID ProxiedUser::GetSteamID()
{
	return *SteamCommon::GetSteamID();
}

// Multiplayer authentication.
int ProxiedUser::InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
	HHSDBG();

	// Offline auth server.
	if (steamIDGameServer.ConvertToUint64() == 0xDEADC0DE)
	{
		memcpy(pAuthBlob, "Legit auth", 11);
		return 11;
	}

	return cbMaxAuthBlob;
}
void ProxiedUser::TerminateGameConnection(uint32_t unIPServer, uint16_t usPortServer)
{
	HHSDBG();
}

// #### Legacy functions ####

// Rarely used, ignore.
void ProxiedUser::TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo)
{
	HHSDBG();
}

// Get storage relative to stem, like "C:\Progam Files\Steam\userdata\<SteamID>\<AppID>\local"
bool ProxiedUser::GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
	HHSDBG();
	return true;
}

// Starts voice recording. Once started, use GetCompressedVoice() to get the data.
void ProxiedUser::StartVoiceRecording()
{
	HHSDBG();
}

// Stops voice recording. Because people often release push-to-talk keys early, the system will keep recording for a sec.
void ProxiedUser::StopVoiceRecording()
{
	HHSDBG();
}

// Determine the amount of captured audio data that is available in bytes.
EVoiceResult ProxiedUser::GetAvailableVoice(uint32_t *pcbCompressed, uint32_t *pcbUncompressed, uint32_t nUncompressedVoiceDesiredSampleRate)
{
	HHSDBG();
	return k_EVoiceResultOK;
}

// Gets the latest voice data from the microphone.
EVoiceResult ProxiedUser::GetVoice(bool bWantCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32_t cbUncompressedDestBufferSize, uint32_t *nUncompressBytesWritten, uint32_t nUncompressedVoiceDesiredSampleRate)
{
	HHSDBG();
	return k_EVoiceResultOK;
}

// Decompresses a chunk of compressed data produced by GetVoice().
EVoiceResult ProxiedUser::DecompressVoice(const void *pCompressed, uint32_t cbCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten, uint32_t nDesiredSampleRate)
{
	HHSDBG();
	return k_EVoiceResultOK;
}

// This returns the frequency of the voice data as it's stored internally; calling DecompressVoice() with this size will yield the best results.
uint32_t ProxiedUser::GetVoiceOptimalSampleRate()
{
	HHSDBG();
	return 44100;
}

// Retrieve ticket to be sent to the entity who wishes to authenticate you. 
uint32_t ProxiedUser::GetAuthSessionTicket(void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
	HHSDBG();
	return 0;
}

// Authenticate ticket from entity steamID to be sure it is valid and isnt reused.
EBeginAuthSessionResult ProxiedUser::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
	HHSDBG();
	return k_EBeginAuthSessionResultOK;
}

// Stop tracking started by BeginAuthSession - called when no longer playing game with this entity.
void ProxiedUser::EndAuthSession(CSteamID steamID)
{
	HHSDBG();
}

// Cancel auth ticket from GetAuthSessionTicket, called when no longer playing game with the entity you gave the ticket to.
void ProxiedUser::CancelAuthTicket(uint32_t hAuthTicket)
{
	HHSDBG();
}

// After receiving a user's authentication data, and passing it to BeginAuthSession, use this function
// to determine if the user owns downloadable content specified by the provided AppID.
EUserHasLicenseForAppResult ProxiedUser::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
	HHSDBG();
	return k_EUserHasLicenseResultHasLicense;
}

// Misc.
bool ProxiedUser::BIsBehindNAT()
{
	HHSDBG();
	return false; // TODO: Actually check.
}
void ProxiedUser::AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
	HHSDBG();
}

static unsigned char TicketData[128];
SteamAPICall_t ProxiedUser::RequestEncryptedAppTicket(void *pUserData, int cbUserData)
{
	HHSDBG();

	uint64_t callID = NULL;
	EncryptedAppTicketResponse_t *response = nullptr;

	memset(TicketData, 0, sizeof(TicketData));
	memcpy(&TicketData[32], pUserData, min(cbUserData, sizeof(TicketData)));

	callID = SteamCallback::RegisterCall();
	response = static_cast<EncryptedAppTicketResponse_t*>(malloc(sizeof(EncryptedAppTicketResponse_t)));
	response->m_eResult = k_EResultOK;

	SteamCallback::ReturnCall(response, sizeof(EncryptedAppTicketResponse_t), response->k_iCallback, callID);
	return callID;
}
bool ProxiedUser::GetEncryptedAppTicket(void *pTicket, int32_t cbMaxTicket, uint32_t *pcbTicket)
{
	HHSDBG();

	memcpy(pTicket, TicketData, min(cbMaxTicket, sizeof(TicketData)));
	*pcbTicket = sizeof(TicketData);
	return true;
}
int ProxiedUser::GetGameBadgeLevel(int nSeries, bool bFoil)
{
	HHSDBG();
	return 0;
}
int ProxiedUser::GetPlayerSteamLevel()
{
	HHSDBG();
	return 0;
}