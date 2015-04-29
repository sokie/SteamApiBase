/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedClient
{
public:
	static HSteamPipe CreateSteamPipe();

	static bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	static HSteamUser CreateGlobalUser(HSteamPipe *phSteamPipe);

	static HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	static HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType);

	static void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	static ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	static IVAC *GetIVAC(HSteamUser hSteamUser);

	static const char *GetUniverseName(EUniverse eUniverse);

	static ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamBilling *GetISteamBilling(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamContentServer *GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamGameServerStats *GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamScreenshots *GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	static void RunFrame();

	static uint32 GetIPCCallCount();

	static void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	static bool BShutdownIfAllPipesClosed();

	static ISteamHTTP* GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamUnifiedMessages* GetISteamUnifiedMessages(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	static ISteamController* GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
};
