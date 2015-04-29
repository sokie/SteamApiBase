/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the game.
*/

#pragma once

#pragma region SteamClient006
class SteamClient006 : public ISteamClient006
{
public:
	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser CreateGlobalUser(HSteamPipe *phSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	IVAC *GetIVAC(HSteamUser hSteamUser);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	const char *GetUniverseName(EUniverse eUniverse);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamBilling *GetISteamBilling(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamContentServer *GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();
};
#pragma endregion

#pragma region SteamClient007
class SteamClient007 : ISteamClient007
{
public:
	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamContentServer *GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();

	ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
};
#pragma endregion

#pragma region SteamClient008
class SteamClient008 : ISteamClient008
{
public:

	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);
};
#pragma endregion

#pragma region SteamClient009
class SteamClient009 : ISteamClient009
{
public:
	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServerStats *GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);
};
#pragma endregion

#pragma region SteamClient010
class SteamClient010 : ISteamClient010
{
public:

	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServerStats *GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	bool BShutdownIfAllPipesClosed();

	ISteamHTTP* GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
};
#pragma endregion

#pragma region SteamClient011
class SteamClient011 : ISteamClient011
{
public:

	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServerStats *GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamScreenshots *GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	bool BShutdownIfAllPipesClosed();

	ISteamHTTP* GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);
};
#pragma endregion

#pragma region SteamClient012
class SteamClient012 : ISteamClient012
{
public:
	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamGameServerStats *GetISteamGameServerStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamScreenshots *GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);

	bool BShutdownIfAllPipesClosed();

	ISteamHTTP* GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUnifiedMessages* GetISteamUnifiedMessages(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamController* GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);
};
#pragma endregion