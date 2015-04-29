/*
 This project is released under the GPL 2.0 license.
 Please do no evil.
 
 Initial author: (https://github.com/)Convery
 Started: 2015-04-08
 Notes:
 Information about the application.
 */

#include "../../StdInc.h"

bool ProxiedGameServer::InitGameServer(uint32 unGameIP, uint16 unGamePort, uint16 usQueryPort, uint32 unServerFlags, AppId_t nAppID, const char *pchVersion)
{
    HHSDBG();
    return true;
}
void ProxiedGameServer::SetProduct(const char *pchProductName)
{
    HHSDBG();
}
void ProxiedGameServer::SetGameDescription(const char *pchGameDescription)
{
    HHSDBG();
}
void ProxiedGameServer::SetModDir(const char *pchModDir)
{
    HHSDBG();
}
void ProxiedGameServer::SetDedicatedServer(bool bDedicatedServer)
{
    HHSDBG();
}

void ProxiedGameServer::LogOn(const char *pszAccountName, const char *pszPassword)
{
    HHSDBG();
}
void ProxiedGameServer::LogOn()
{
    HHSDBG();
}
void ProxiedGameServer::LogOnAnonymous()
{
    HHSDBG();
}
void ProxiedGameServer::LogOff()
{
    HHSDBG();
}
bool ProxiedGameServer::BLoggedOn()
{
    HHSDBG();
    return true;
}

void ProxiedGameServer::SetSpawnCount( uint32 ucSpawn )
{
    HHSDBG();
}

bool ProxiedGameServer::BSecure()
{
    HHSDBG();
    return true;//obviously duh, trust me!
}
CSteamID ProxiedGameServer::GetSteamID()
{
    HHSDBG();
	return CSteamID();
}
bool ProxiedGameServer::WasRestartRequested()
{
    HHSDBG();
    return false;
}

bool ProxiedGameServer::SendUserStatusResponse( CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast )
{
    HHSDBG();
	return true;
}
bool ProxiedGameServer::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName )
{
    HHSDBG();
    return true;
}
 bool ProxiedGameServer::GetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    HHSDBG();
    return true;
}

bool ProxiedGameServer::CreateUnauthenticatedUser( CSteamID *pSteamID )
{
    HHSDBG();
    return true;
}

void ProxiedGameServer::SetMaxPlayerCount(int cPlayersMax)
{
    HHSDBG();
}
void ProxiedGameServer::SetBotPlayerCount(int cBotPlayers)
{
    HHSDBG();
}
void ProxiedGameServer::SetServerName(const char *pszServerName)
{
    HHSDBG();
}
void ProxiedGameServer::SetMapName(const char *pszMapName)
{
    HHSDBG();
}
void ProxiedGameServer::SetPasswordProtected(bool bPasswordProtected)
{
    HHSDBG();
}
void ProxiedGameServer::SetSpectatorPort(uint16 unSpectatorPort)
{
    HHSDBG();
}
void ProxiedGameServer::SetSpectatorServerName(const char *pszSpectatorServerName)
{
    HHSDBG();
}
void ProxiedGameServer::ClearAllKeyValues()
{
    HHSDBG();
}
void ProxiedGameServer::SetKeyValue(const char *pKey, const char *pValue)
{
    HHSDBG();
}
void ProxiedGameServer::SetGameTags(const char *pchGameTags)
{
    HHSDBG();
}
void ProxiedGameServer::SetGameData(const char *pchGameData)
{
    HHSDBG();
}
void ProxiedGameServer::SetRegion(const char *pchRegionName)
{
    HHSDBG();
}
void ProxiedGameServer::SetGameType( const char *pchGameType )
{
    HHSDBG();
}

int ProxiedGameServer::SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    HHSDBG();
	return 0;
}
CSteamID ProxiedGameServer::CreateUnauthenticatedUserConnection()
{
    HHSDBG();
	return CSteamID();
}
void ProxiedGameServer::SendUserDisconnect(CSteamID steamIDUser)
{
    HHSDBG();
}
bool ProxiedGameServer::BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    HHSDBG();
    return true;
}

HAuthTicket ProxiedGameServer::GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HHSDBG();
    return NULL;
}
EBeginAuthSessionResult ProxiedGameServer::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    HHSDBG();
	return EBeginAuthSessionResult::k_EBeginAuthSessionResultOK;
}
void ProxiedGameServer::EndAuthSession(CSteamID steamID)
{
    HHSDBG();
}
void ProxiedGameServer::CancelAuthTicket(HAuthTicket hAuthTicket)
{
    HHSDBG();
}
EUserHasLicenseForAppResult ProxiedGameServer::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
    HHSDBG();
    return EUserHasLicenseForAppResult::k_EUserHasLicenseResultHasLicense;
}
bool ProxiedGameServer::RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)
{
    HHSDBG();
    return true;
}

void ProxiedGameServer::GetGameplayStats()
{
    HHSDBG();
}
SteamAPICall_t ProxiedGameServer::GetServerReputation()
{
    HHSDBG();
    return NULL;
}
uint32 ProxiedGameServer::GetPublicIP()
{
    HHSDBG();
    return 0;
}
bool ProxiedGameServer::HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    HHSDBG();
    return false;
}
int ProxiedGameServer::GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    HHSDBG();
    return 0;
}
void ProxiedGameServer::EnableHeartbeats(bool bActive)
{
    HHSDBG();
}
void ProxiedGameServer::SetHeartbeatInterval(int iHeartbeatInterval)
{
    HHSDBG();
}
void ProxiedGameServer::ForceHeartbeat()
{
    HHSDBG();
}
SteamAPICall_t ProxiedGameServer::AssociateWithClan(CSteamID clanID)
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedGameServer::ComputeNewPlayerCompatibility(CSteamID steamID)
{
    HHSDBG();
    return NULL;
}

/*
 These are methods that get called on SteamGameServer_Init,
 these are not, and should not, be called directly from a game
 */
bool ProxiedGameServer::SetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServer::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServer::SetServerType2( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    HHSDBG();
    return true;
}

/*Most of these have been considered deprecated in their respective interfaces or
should not be called directly from the game ( eg. BSetServerType)
 you probably can skip these.
 */
bool ProxiedGameServer::GetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServer::SendSteam2UserConnect(  uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServer::SendSteam3UserConnect( CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie )
{
    HHSDBG();
    return true;
}

bool ProxiedGameServer::UpdateStatus2( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    HHSDBG();
    return true;
}

bool ProxiedGameServer::SendUserConnectAndAuthenticate( CSteamID steamIDUser, uint32 unk1, void * unk2, uint32 unk3)
{
    HHSDBG();
    return true;
}
bool ProxiedGameServer::SendUserConnect( uint32 unk1, uint32 unk2, uint16 unk3, const void * unk4, uint32 unk5)
{
    HHSDBG();
    return true;
}

bool ProxiedGameServer::RemoveUserConnect( uint32 unUserID )
{
    HHSDBG();
    return true;
}