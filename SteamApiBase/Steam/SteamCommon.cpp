#include "..\STDInc.h"

#pragma region Interfaces
static SteamInterface_t _SteamAppList;
static SteamInterface_t _SteamApps;
static SteamInterface_t _SteamClient;
static SteamInterface_t _SteamContentServer;
static SteamInterface_t _SteamController;
static SteamInterface_t _SteamFriends;
static SteamInterface_t _SteamGameServer;
static SteamInterface_t _SteamGameServerStats;
static SteamInterface_t _SteamHTTP;
static SteamInterface_t _SteamMasterServerUpdater;
static SteamInterface_t _SteamMatchMaking;
static SteamInterface_t _SteamMatchMakingServers;
static SteamInterface_t _SteamMusic;
static SteamInterface_t _SteamMusicRemote;
static SteamInterface_t _SteamNetworking;
static SteamInterface_t _SteamRemoteStorage;
static SteamInterface_t _SteamScreenshots;
static SteamInterface_t _SteamUGC;
static SteamInterface_t _SteamUnifiedMessages;
static SteamInterface_t _SteamUser;
static SteamInterface_t _SteamUserStats;
static SteamInterface_t _SteamUtils;
#pragma endregion

#define PARSEINTERFACE(path, var, key, default) {	if (ValueExists("Interfaces", key, Path)){	int val = GetPrivateProfileIntA("Interfaces", key, 0, Path); var = (SteamInterface_t)(default - 1 + val); 	}else{ 		var = default; 	} }

bool ValueExists(char *Section, char *Key, char *File)
{
	char Buffer[512];
	if (GetPrivateProfileString(Section, Key, NULL, Buffer, 512, File) > 0)
		return true;
	return false;
}

/*void SteamCommon::LoadOverlay()
{
	if (!*SteamCommon::SteamPath) SteamCommon::SetSteamDirectory();

	SteamCommon::SteamOverlay = GetModuleHandleA(GAMEOVERLAY_LIB);

	if (!SteamCommon::SteamOverlay)
	{
		SteamCommon::SteamOverlay = LoadLibraryA(GAMEOVERLAY_LIB);
	}
}*/

void SteamCommon::Init()
{
	HHSDBG();

	char Buffer[512];
	char Path[512];
	GetCurrentDirectoryA(512, Path);
	sprintf(Path, "%s\\SteamApiBase.ini", Path);

	if (GetPrivateProfileString("Authentication", "Username", "Unknown", Buffer, 512, Path) > 0)
		strcpy(Global::Steam_Username, Buffer);	 

	if (GetPrivateProfileString("Game", "Language", "english", Buffer, 512, Path) > 0)
		strcpy(Global::Steam_Language, Buffer);

	if (ValueExists("Game", "SteamId", Path))
		Global::Steam_UserID = GetPrivateProfileIntA("Game", "SteamId", 0, Path);

	steamID = new CSteamID(Global::Steam_UserID, EUniverse::k_EUniversePublic, EAccountType::k_EAccountTypeIndividual);

	if (ValueExists("Game", "SteamAppID", Path))
		Global::Steam_AppID = GetPrivateProfileIntA("Game", "SteamAppID", 0, Path);

	PARSEINTERFACE(Path, _SteamApps, "SteamApps", INTERFACE_STEAMAPPS001)
		PARSEINTERFACE(Path, _SteamClient, "SteamClient", INTERFACE_STEAMCLIENT001)
	PARSEINTERFACE(Path, _SteamContentServer, "SteamContentServer", INTERFACE_STEAMCONTENTSERVER001)
	//PARSEINTERFACE(Path, _SteamController,          "SteamController",          INTERFACE_STEAMCONTROLLER001)
	PARSEINTERFACE(Path, _SteamFriends, "SteamFriends", INTERFACE_STEAMFRIENDS001)
	PARSEINTERFACE(Path, _SteamGameServer, "SteamGameServer", INTERFACE_STEAMGAMESERVER001)
	PARSEINTERFACE(Path, _SteamGameServerStats, "SteamGameServerStats", INTERFACE_STEAMGAMESERVER001)
	PARSEINTERFACE(Path, _SteamHTTP, "SteamHTTP", INTERFACE_STEAMHTTP001)
	PARSEINTERFACE(Path, _SteamMasterServerUpdater, "SteamMasterServerUpdater", INTERFACE_STEAMMASTERUPDATER001)
	PARSEINTERFACE(Path, _SteamMatchMaking, "SteamMatchMaking", INTERFACE_STEAMMATCHMAKING001)
	PARSEINTERFACE(Path, _SteamMatchMakingServers, "SteamMatchMakingServers", INTERFACE_STEAMMATCHMAKINGSERVERS001)
	PARSEINTERFACE(Path, _SteamMusic, "SteamMusic", INTERFACE_STEAMMUSIC001)
	//		PARSEINTERFACE(Path, _SteamMusicRemote,         "SteamMusicRemote",         INTERFACE_STEAMMUSICREMOTE001)
	PARSEINTERFACE(Path, _SteamNetworking, "SteamNetworking", INTERFACE_STEAMNETWORKING001)
	PARSEINTERFACE(Path, _SteamRemoteStorage, "SteamRemoteStorage", INTERFACE_STEAMREMOTESTORAGE001)
	PARSEINTERFACE(Path, _SteamScreenshots, "SteamScreenshots", INTERFACE_STEAMSCREENSHOTS001)
	PARSEINTERFACE(Path, _SteamUnifiedMessages, "SteamUnifiedMessages", INTERFACE_STEAMUNIFIEDMESSAGES001)
	PARSEINTERFACE(Path, _SteamUser, "SteamUser", INTERFACE_STEAMUSER001)
	PARSEINTERFACE(Path, _SteamUserStats, "SteamUserStats", INTERFACE_STEAMUSERSTATS001)
	PARSEINTERFACE(Path, _SteamUtils, "SteamUtils", INTERFACE_STEAMUTILS001)
}

SteamAPICall_t SteamCommon::RequestEncryptedAppTicket(const void *pUserData, int cbUserData)
{
	HHSDBG();
	uint64 userID = GetSteamID()->ConvertToUint64();

	memset(encryptedAppTicket, 0, sizeof(encryptedAppTicket));

	memcpy(&encryptedAppTicket[32], pUserData, min(cbUserData, sizeof(encryptedAppTicket)));
	memcpy(&encryptedAppTicket[cbUserData + 32], &userID, sizeof(userID));

	SteamAPICall_t callID = SteamCallback::RegisterCall();

	EncryptedAppTicketResponse_t *response = (EncryptedAppTicketResponse_t*)malloc(sizeof(EncryptedAppTicketResponse_t));
	response->m_eResult = k_EResultOK;

	//SteamCallback::Return(response, EncryptedAppTicketResponse_t::k_iCallback, callID, sizeof(EncryptedAppTicketResponse_t));

	return callID;
}

CSteamID *SteamCommon::GetSteamID()
{
	//not needed
	//HHSDBG();
	return steamID;
}

AppId_t SteamCommon::GetSteamAppID()
{
	return Global::Steam_AppID;
}

char *SteamCommon::GetEncryptedAppTicket()
{
	HHSDBG();
	return encryptedAppTicket;
}

char *SteamCommon::GetPlayerName()
{
	HHSDBG();
	return Global::Steam_Username;
}

void SteamCommon::SetPlayerName(const char *newName)
{
	HHSDBG();
	strcpy(Global::Steam_Username, newName);
}

ISteamApps *SteamCommon::GetSteamApps()
{
	HHSDBG();
	return (ISteamApps *)InterfaceManager::GetInterface(_SteamApps);
}

ISteamFriends *SteamCommon::GetSteamFriends()
{
	HHSDBG();
	return (ISteamFriends *)InterfaceManager::GetInterface(_SteamFriends);
}

ISteamClient *SteamCommon::GetSteamClient()
{
	HHSDBG();
	return (ISteamClient *)InterfaceManager::GetInterface(_SteamClient);
}

ISteamGameServer *SteamCommon::GetSteamGameServer()
{
	HHSDBG();
	return (ISteamGameServer *)InterfaceManager::GetInterface(_SteamGameServer);
}

ISteamGameServerStats *SteamCommon::GetSteamGameServerStats()
{
	HHSDBG();
	return (ISteamGameServerStats *)InterfaceManager::GetInterface(_SteamGameServerStats);
}

ISteamHTTP *SteamCommon::GetSteamHTTP()
{
	HHSDBG();
	return (ISteamHTTP *)InterfaceManager::GetInterface(_SteamHTTP);
}

ISteamMatchmaking *SteamCommon::GetSteamMatchmaking()
{
	HHSDBG();
	return (ISteamMatchmaking *)InterfaceManager::GetInterface(_SteamMatchMaking);
}

ISteamMatchmakingServers *SteamCommon::GetSteamMatchmakingServers()
{
	HHSDBG();
	return (ISteamMatchmakingServers *)InterfaceManager::GetInterface(_SteamMatchMakingServers);
}

ISteamNetworking *SteamCommon::GetSteamNetworking()
{
	HHSDBG();
	return (ISteamNetworking *)InterfaceManager::GetInterface(_SteamNetworking);
}

ISteamRemoteStorage *SteamCommon::GetSteamRemoteStorage()
{
	HHSDBG();
	return (ISteamRemoteStorage *)InterfaceManager::GetInterface(_SteamRemoteStorage);
}

ISteamUser *SteamCommon::GetSteamUser()
{
	HHSDBG();
	return (ISteamUser *)InterfaceManager::GetInterface(_SteamUser);
}

ISteamUserStats *SteamCommon::GetSteamUserStats()
{
	HHSDBG();
	return (ISteamUserStats *)InterfaceManager::GetInterface(_SteamUserStats);
}

ISteamUtils *SteamCommon::GetSteamUtils()
{
	HHSDBG();
	return (ISteamUtils *)InterfaceManager::GetInterface(_SteamUtils);
}

ISteamBilling *SteamCommon::GetSteamBilling()
{
	HHSDBG();
	//return (ISteamBilling *)InterfaceManager::GetInterface(_steam);
	return NULL;
}

ISteamContentServer *SteamCommon::GetSteamContentServer()
{
	HHSDBG();
	return (ISteamContentServer *)InterfaceManager::GetInterface(_SteamContentServer);
}

ISteamMasterServerUpdater *SteamCommon::GetSteamMasterServerUpdater()
{
	HHSDBG();
	//return (ISteamMasterServerUpdater *)InterfaceManager::GetInterface(_masterserv);
	return NULL;
}

ISteamController *SteamCommon::GetSteamController()
{
	HHSDBG();
	return (ISteamController *)InterfaceManager::GetInterface(_SteamController);
}
ISteamScreenshots *SteamCommon::GetSteamScreenshots()
{
	HHSDBG();
	return (ISteamScreenshots *)InterfaceManager::GetInterface(_SteamScreenshots);
}
ISteamUnifiedMessages *SteamCommon::GetSteamUnifiedMessages()
{
	HHSDBG();
	return (ISteamUnifiedMessages *)InterfaceManager::GetInterface(_SteamUnifiedMessages);
}

CSteamID *SteamCommon::steamID = NULL;
AppId_t SteamCommon::steamAppID = NULL;

//HMODULE SteamCommon::SteamOverlay = 0;

char SteamCommon::encryptedAppTicket[128];