/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "..\..\StdInc.h"

HSteamPipe ProxiedClient::CreateSteamPipe()
{
	HHSDBG();
	return 1;
}

bool ProxiedClient::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return true;
}

HSteamUser ProxiedClient::CreateGlobalUser(HSteamPipe *phSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser ProxiedClient::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser ProxiedClient::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	HHSDBG();
	return NULL;
}

void ProxiedClient::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	HHSDBG();
}

ISteamUser *ProxiedClient::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUser();
}

ISteamGameServer *ProxiedClient::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamGameServer();
}

IVAC *ProxiedClient::GetIVAC(HSteamUser hSteamUser)
{
	HHSDBG();
	//deprecated so...
	return NULL;
}

const char *ProxiedClient::GetUniverseName(EUniverse eUniverse)
{
	HHSDBG();
	//TODO: convert universe correctly
	return "k_EUniversePublic"; // SteamCommon::GetSteamID()->GetEUniverse(); 
}

void ProxiedClient::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	HHSDBG();
}

ISteamFriends *ProxiedClient::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamFriends();
}

ISteamBilling *ProxiedClient::GetISteamBilling(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamBilling();
}

ISteamUtils *ProxiedClient::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUtils();
}

ISteamMatchmaking *ProxiedClient::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmaking();
}

ISteamMatchmakingServers *ProxiedClient::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmakingServers();
}

ISteamContentServer *ProxiedClient::GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamContentServer();
}

void *ProxiedClient::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	//TODO: what should we return here?!?
	return NULL;
}

ISteamUserStats *ProxiedClient::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUserStats();
}

ISteamGameServerStats *ProxiedClient::GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamGameServerStats();
}

ISteamApps *ProxiedClient::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamApps();
}

ISteamMasterServerUpdater *ProxiedClient::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMasterServerUpdater();
}

ISteamNetworking *ProxiedClient::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamNetworking();
}

ISteamRemoteStorage *ProxiedClient::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamRemoteStorage();
}

ISteamScreenshots *ProxiedClient::GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamScreenshots();
}

void ProxiedClient::RunFrame()
{
	HHSDBG();
}

uint32 ProxiedClient::GetIPCCallCount()
{
	HHSDBG();
	return 1338;
}

void ProxiedClient::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	HHSDBG();
}

bool ProxiedClient::BShutdownIfAllPipesClosed()
{
	HHSDBG();
	return true;
}

ISteamHTTP* ProxiedClient::GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamHTTP();
}

ISteamUnifiedMessages* ProxiedClient::GetISteamUnifiedMessages(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUnifiedMessages();
}

ISteamController* ProxiedClient::GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamController();
}