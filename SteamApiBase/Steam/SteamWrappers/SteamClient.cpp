/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
	Information about the game.
	*/

#include "..\..\StdInc.h"

#pragma region SteamClient006
HSteamPipe SteamClient006::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient006::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient006::CreateGlobalUser(HSteamPipe *phSteamPipe)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

HSteamUser SteamClient006::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient006::CreateLocalUser(HSteamPipe *phSteamPipe)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient006::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser* SteamClient006::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

IVAC* SteamClient006::GetIVAC(HSteamUser hSteamUser)
{
	return ProxiedClient::GetIVAC(hSteamUser);
}

ISteamGameServer* SteamClient006::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient006::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

const char* SteamClient006::GetUniverseName(EUniverse eUniverse)
{
	return ProxiedClient::GetUniverseName(eUniverse);
}

ISteamFriends* SteamClient006::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils* SteamClient006::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamBilling* SteamClient006::GetISteamBilling(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamBilling(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmaking* SteamClient006::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamContentServer* SteamClient006::GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamContentServer(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps* SteamClient006::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMasterServerUpdater* SteamClient006::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers* SteamClient006::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient006::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient006::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}
#pragma endregion

#pragma region SteamClient007
HSteamPipe SteamClient007::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient007::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient007::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient007::CreateLocalUser(HSteamPipe *phSteamPipe)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient007::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser* SteamClient007::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServer* SteamClient007::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient007::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

ISteamFriends* SteamClient007::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils* SteamClient007::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamMatchmaking* SteamClient007::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamContentServer* SteamClient007::GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamContentServer(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMasterServerUpdater* SteamClient007::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers* SteamClient007::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void* SteamClient007::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient007::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient007::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}

ISteamUserStats* SteamClient007::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps* SteamClient007::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamNetworking* SteamClient007::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient007::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	ProxiedClient::SetWarningMessageHook(pFunction);
}

ISteamRemoteStorage* SteamClient007::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}
#pragma endregion

#pragma region SteamClient008
HSteamPipe SteamClient008::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient008::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient008::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient008::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient008::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser* SteamClient008::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServer* SteamClient008::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient008::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

ISteamFriends* SteamClient008::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils* SteamClient008::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamMatchmaking* SteamClient008::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMasterServerUpdater* SteamClient008::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers* SteamClient008::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void* SteamClient008::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUserStats* SteamClient008::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps* SteamClient008::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamNetworking* SteamClient008::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamRemoteStorage* SteamClient008::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}

void SteamClient008::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient008::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}

void SteamClient008::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	ProxiedClient::SetWarningMessageHook(pFunction);
}
#pragma endregion

#pragma region SteamClient009
HSteamPipe SteamClient009::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient009::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient009::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient009::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient009::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser* SteamClient009::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServer* SteamClient009::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient009::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

ISteamFriends* SteamClient009::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils* SteamClient009::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamMatchmaking* SteamClient009::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMasterServerUpdater* SteamClient009::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers* SteamClient009::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void* SteamClient009::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUserStats *SteamClient009::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServerStats *SteamClient009::GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServerStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps *SteamClient009::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamNetworking *SteamClient009::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamRemoteStorage *SteamClient009::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}

void SteamClient009::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient009::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}

void SteamClient009::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	ProxiedClient::SetWarningMessageHook(pFunction);
}
#pragma endregion

#pragma region SteamClient010
HSteamPipe SteamClient010::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient010::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient010::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient010::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient010::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser *SteamClient010::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServer *SteamClient010::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient010::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

ISteamFriends *SteamClient010::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils *SteamClient010::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamMatchmaking *SteamClient010::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMasterServerUpdater *SteamClient010::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers *SteamClient010::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void *SteamClient010::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUserStats *SteamClient010::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServerStats *SteamClient010::GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServerStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps *SteamClient010::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamNetworking *SteamClient010::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamRemoteStorage *SteamClient010::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}

void SteamClient010::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient010::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}

void SteamClient010::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	ProxiedClient::SetWarningMessageHook(pFunction);
}

bool SteamClient010::BShutdownIfAllPipesClosed()
{
	return ProxiedClient::BShutdownIfAllPipesClosed();
}

ISteamHTTP* SteamClient010::GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamHTTP(hSteamuser, hSteamPipe, pchVersion);
}
#pragma endregion

#pragma region SteamClient011
HSteamPipe SteamClient011::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient011::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient011::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient011::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient011::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser *SteamClient011::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServer *SteamClient011::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient011::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

ISteamFriends *SteamClient011::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils *SteamClient011::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamMatchmaking *SteamClient011::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMasterServerUpdater *SteamClient011::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMasterServerUpdater(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers *SteamClient011::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void *SteamClient011::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUserStats *SteamClient011::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServerStats *SteamClient011::GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServerStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps *SteamClient011::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamNetworking *SteamClient011::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamRemoteStorage *SteamClient011::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}

ISteamScreenshots *SteamClient011::GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamScreenshots(hSteamuser, hSteamPipe, pchVersion);
}

void SteamClient011::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient011::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}

void SteamClient011::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	ProxiedClient::SetWarningMessageHook(pFunction);
}

bool SteamClient011::BShutdownIfAllPipesClosed()
{
	return ProxiedClient::BShutdownIfAllPipesClosed();
}

ISteamHTTP* SteamClient011::GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamHTTP(hSteamuser, hSteamPipe, pchVersion);
}
#pragma endregion

#pragma region SteamClient012
HSteamPipe SteamClient012::CreateSteamPipe()
{
	return ProxiedClient::CreateSteamPipe();
}

bool SteamClient012::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	return ProxiedClient::BReleaseSteamPipe(hSteamPipe);
}

HSteamUser SteamClient012::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	return ProxiedClient::ConnectToGlobalUser(hSteamPipe);
}

HSteamUser SteamClient012::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	return ProxiedClient::CreateGlobalUser(phSteamPipe);
}

void SteamClient012::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	ProxiedClient::ReleaseUser(hSteamPipe, hUser);
}

ISteamUser *SteamClient012::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServer *SteamClient012::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

void SteamClient012::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	return ProxiedClient::SetLocalIPBinding(unIP, usPort);
}

ISteamFriends *SteamClient012::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUtils *SteamClient012::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUtils(hSteamPipe, pchVersion);
}

ISteamMatchmaking *SteamClient012::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamMatchmakingServers *SteamClient012::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

void *SteamClient012::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

ISteamUserStats *SteamClient012::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamGameServerStats *SteamClient012::GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamGameServerStats(hSteamUser, hSteamPipe, pchVersion);
}

ISteamApps *SteamClient012::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

ISteamNetworking *SteamClient012::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

ISteamRemoteStorage *SteamClient012::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}

ISteamScreenshots *SteamClient012::GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamScreenshots(hSteamuser, hSteamPipe, pchVersion);
}

void SteamClient012::RunFrame()
{
	ProxiedClient::RunFrame();
}

uint32 SteamClient012::GetIPCCallCount()
{
	return ProxiedClient::GetIPCCallCount();
}

void SteamClient012::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	ProxiedClient::SetWarningMessageHook(pFunction);
}

bool SteamClient012::BShutdownIfAllPipesClosed()
{
	return ProxiedClient::BShutdownIfAllPipesClosed();
}

ISteamHTTP* SteamClient012::GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamHTTP(hSteamuser, hSteamPipe, pchVersion);
}

ISteamUnifiedMessages* SteamClient012::GetISteamUnifiedMessages(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamUnifiedMessages(hSteamUser, hSteamPipe, pchVersion);
}

ISteamController* SteamClient012::GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	return ProxiedClient::GetISteamController(hSteamUser, hSteamPipe, pchVersion);
}
#pragma endregion