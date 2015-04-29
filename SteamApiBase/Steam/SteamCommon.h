#pragma once

#include "..\STDInc.h"

#define GAMEOVERLAY_LIB "gameoverlayrenderer.dll"

class SteamCommon
{
public:
	static void Init();

	static CSteamID *GetSteamID();
	static AppId_t GetSteamAppID();

	static SteamAPICall_t RequestEncryptedAppTicket(const void *pUserData, int cbUserData);

	static char *GetEncryptedAppTicket();

	static char *GetPlayerName();
	static void SetPlayerName(const char *newName);

	static ISteamApps *GetSteamApps();
	static ISteamFriends *GetSteamFriends();
	static ISteamClient *GetSteamClient();
	static ISteamGameServer *GetSteamGameServer();
	static ISteamGameServerStats *GetSteamGameServerStats();
	
	static ISteamHTTP *GetSteamHTTP();
	static ISteamMatchmaking *GetSteamMatchmaking();
	static ISteamMatchmakingServers *GetSteamMatchmakingServers();

	static ISteamNetworking *GetSteamNetworking();
	static ISteamRemoteStorage *GetSteamRemoteStorage();

	static ISteamUser *GetSteamUser();
	static ISteamUtils *GetSteamUtils();
	static ISteamUserStats *GetSteamUserStats();

	static ISteamBilling *GetSteamBilling();
	static ISteamContentServer *GetSteamContentServer();
	static ISteamMasterServerUpdater *GetSteamMasterServerUpdater();

	static ISteamController *GetSteamController();
	static ISteamScreenshots *GetSteamScreenshots();
	static ISteamUnifiedMessages *GetSteamUnifiedMessages();
	

private:
	static CSteamID *steamID;
	static AppId_t steamAppID;

	static HMODULE SteamOverlay;

	static char encryptedAppTicket[128];
};