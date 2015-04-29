/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedGameServer
{
public:
    static bool InitGameServer(uint32 unGameIP, uint16 unGamePort, uint16 usQueryPort, uint32 unServerFlags, AppId_t nAppID, const char *pchVersion);
    static void SetProduct(const char *pchProductName);
    static void SetGameDescription(const char *pchGameDescription);
    static void SetModDir(const char *pchModDir);
    static void SetDedicatedServer(bool bDedicatedServer);
    
	static void LogOn();
    static void LogOn(const char *pszAccountName, const char *pszPassword);

    static void LogOnAnonymous();
    static void LogOff();
    static bool BLoggedOn();
    static void SetSpawnCount( uint32 ucSpawn );
    static bool BSecure();
    static CSteamID GetSteamID();
    static bool WasRestartRequested();
    
    static bool SendUserStatusResponse( CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast );
    static bool UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName );
    static bool CreateUnauthenticatedUser( CSteamID *pSteamID );
    
    static void SetMaxPlayerCount(int cPlayersMax);
    static void SetBotPlayerCount(int cBotPlayers);
    static void SetServerName(const char *pszServerName);
    static void SetMapName(const char *pszMapName);
    static void SetPasswordProtected(bool bPasswordProtected);
    static void SetSpectatorPort(uint16 unSpectatorPort);
    static void SetSpectatorServerName(const char *pszSpectatorServerName);
    static void ClearAllKeyValues();
    static void SetKeyValue(const char *pKey, const char *pValue);
    static void SetGameTags(const char *pchGameTags);
    static void SetGameData(const char *pchGameData);
    static void SetRegion(const char *pchRegionName);
    static void SetGameType( const char *pchGameType );
    
    static int SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser);
    static CSteamID CreateUnauthenticatedUserConnection();
    static void SendUserDisconnect(CSteamID steamIDUser);
    static bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore);
    static bool GetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
    static HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
    static EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID);
    static void EndAuthSession(CSteamID steamID);
    static void CancelAuthTicket(HAuthTicket hAuthTicket);
    static EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);
    static bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup);
    
    static void GetGameplayStats();
    static SteamAPICall_t GetServerReputation();
    static uint32 GetPublicIP();
    static bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort);
    static int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort);
    static void EnableHeartbeats(bool bActive);
    static void SetHeartbeatInterval(int iHeartbeatInterval);
    static void ForceHeartbeat();
    static SteamAPICall_t AssociateWithClan(CSteamID clanID);
    static SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamID);
    
    static bool SetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion );
    static bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    static bool SetServerType2( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    static bool GetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey );
    static bool SendSteam2UserConnect(  uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie );
    static bool SendSteam3UserConnect( CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie );
    
    static bool UpdateStatus2( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );

    static bool SendUserConnectAndAuthenticate( CSteamID steamIDUser, uint32 unk1, void * unk2, uint32 unk3);
    static bool SendUserConnect( uint32 unk1, uint32 unk2, uint16 unk3, const void * unk4, uint32 unk5);
    
    static bool RemoveUserConnect( uint32 unUserID );
};
