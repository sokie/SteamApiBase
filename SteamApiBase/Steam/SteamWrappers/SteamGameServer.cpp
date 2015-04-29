/*
 This project is released under the GPL 2.0 license.
 Please do no evil.
 
 Initial author: (https://github.com/)Convery
 Started: 2015-04-08
 Notes:
 Information about the game.
 */
#include "..\..\StdInc.h"

#pragma region SteamGameServer002
void SteamGameServer002::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer002::LogOff()
{
    ProxiedGameServer::LogOff();
}
bool SteamGameServer002::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}

void SteamGameServer002::SetSpawnCount( uint32 ucSpawn )
{
    ProxiedGameServer::SetSpawnCount(ucSpawn);
}

bool SteamGameServer002::GetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey )
{
    return ProxiedGameServer::GetSteam2GetEncryptionKeyToSendToNewClient(pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey);
}

bool SteamGameServer002::SendSteam2UserConnect(  uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie )
{
    return ProxiedGameServer::SendSteam2UserConnect(unUserID, pvRawKey, unKeyLen, unIPPublic, usPort, pvCookie, cubCookie);
}

bool SteamGameServer002::SendSteam3UserConnect( CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie )
{
    return ProxiedGameServer::SendSteam3UserConnect(steamID, unIPPublic, pvCookie, cubCookie);
}

bool SteamGameServer002::RemoveUserConnect( uint32 unUserID )
{
    return ProxiedGameServer::RemoveUserConnect(unUserID);
}

bool SteamGameServer002::SendUserDisconnect( CSteamID steamID, uint32 unUserID )
{
    ProxiedGameServer::SendUserDisconnect(steamID);
	return true;
}

bool SteamGameServer002::SendUserStatusResponse( CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast )
{
    return ProxiedGameServer::SendUserStatusResponse(steamID, nSecondsConnected, nSecondsSinceLast);
}

bool SteamGameServer002::Obsolete_GSSetStatus( int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion )
{
	return ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

bool SteamGameServer002::UpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName )
{
	return ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

bool SteamGameServer002::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer002::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer002::SetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion )
{
    return ProxiedGameServer::SetServerType(nGameAppId, unServerFlags, unGameIP, unGamePort, pchGameDir, pchVersion);
}

bool SteamGameServer002::SetServerType2( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::SetServerType2(nGameAppId, unServerFlags, unGameIP, unGamePort, usSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

bool SteamGameServer002::UpdateStatus2( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    return ProxiedGameServer::UpdateStatus2(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pSpectatorServerName, pchMapName);
}

bool SteamGameServer002::CreateUnauthenticatedUser( CSteamID *pSteamID )
{
    return ProxiedGameServer::CreateUnauthenticatedUser(pSteamID);
}

bool SteamGameServer002::SetUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

void SteamGameServer002::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}

void SteamGameServer002::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}
#pragma endregion

#pragma region SteamGameServer003
void SteamGameServer003::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer003::LogOff()
{
    ProxiedGameServer::LogOff();
}
bool SteamGameServer003::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}

bool SteamGameServer003::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer003::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer003::GetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey )
{
    return ProxiedGameServer::GetSteam2GetEncryptionKeyToSendToNewClient(pvEncryptionKey, pcbEncryptionKey, cbMaxEncryptionKey);
}

bool SteamGameServer003::SendUserConnect( uint32 unk1, uint32 unk2, uint16 unk3, const void * unk4, uint32 unk5)
{
    return ProxiedGameServer::SendUserConnect(unk1, unk2, unk3, unk4, unk5);
}

bool SteamGameServer003::RemoveUserConnect( uint32 unUserID )
{
    return ProxiedGameServer::RemoveUserConnect(unUserID);
}

bool SteamGameServer003::SendUserDisconnect( CSteamID steamID, uint32 unUserID )
{
    ProxiedGameServer::SendUserDisconnect(steamID);
	return true;
}

void SteamGameServer003::SetSpawnCount( uint32 ucSpawn )
{
    ProxiedGameServer::SetSpawnCount(ucSpawn);
}

bool SteamGameServer003::SetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::SetServerType(nGameAppId, unServerFlags, unGameIP, unGamePort, pchGameDir, pchVersion);
}

bool SteamGameServer003::UpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    return ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

bool SteamGameServer003::CreateUnauthenticatedUser( CSteamID *pSteamID )
{
    return ProxiedGameServer::CreateUnauthenticatedUser(pSteamID);
}

bool SteamGameServer003::SetUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

void SteamGameServer003::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}

void SteamGameServer003::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}

bool SteamGameServer003::GetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}

#pragma endregion

#pragma region SteamGameServer004
void SteamGameServer004::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer004::LogOff()
{
    ProxiedGameServer::LogOff();
}
bool SteamGameServer004::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}

bool SteamGameServer004::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer004::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer004::SendUserConnectAndAuthenticate( CSteamID steamIDUser, uint32 unk1, void * unk2, uint32 unk3)
{
    //this is probably not used at all
    return ProxiedGameServer::SendUserConnectAndAuthenticate(steamIDUser, unk1, unk2, unk3);
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer004::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer004::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}

bool SteamGameServer004::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool SteamGameServer004::BSetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
	return ProxiedGameServer::BSetServerType(/*nGameAppId,*/ unServerFlags, unGameIP, unGamePort, usSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

bool SteamGameServer004::UpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    return ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

void SteamGameServer004::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}
void SteamGameServer004::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}
bool SteamGameServer004::BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}
#pragma endregion

#pragma region SteamGameServer005
void SteamGameServer005::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer005::LogOff()
{
    ProxiedGameServer::LogOff();
}
bool SteamGameServer005::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}

bool SteamGameServer005::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer005::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer005::SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser )
{
    ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
	return true;
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer005::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer005::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}

bool SteamGameServer005::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool SteamGameServer005::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

void SteamGameServer005::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

void SteamGameServer005::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}
void SteamGameServer005::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}
bool SteamGameServer005::BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}
void SteamGameServer005::GetGameplayStats( )
{
    ProxiedGameServer::GetGameplayStats();
}
#pragma endregion

#pragma region SteamGameServer006
void SteamGameServer006::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer006::LogOff()
{
    ProxiedGameServer::LogOff();
}

bool SteamGameServer006::BLoggedOn()
{
   return ProxiedGameServer::BLoggedOn();
}
bool SteamGameServer006::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer006::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer006::SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser )
{
    ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
	return true;
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer006::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer006::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}

bool SteamGameServer006::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool SteamGameServer006::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

void SteamGameServer006::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

void SteamGameServer006::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}

void SteamGameServer006::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}

bool SteamGameServer006::BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}
void SteamGameServer006::GetGameplayStats( )
{
    ProxiedGameServer::GetGameplayStats();
}
#pragma endregion

#pragma region SteamGameServer007
void SteamGameServer007::LogOn()
{
    return ProxiedGameServer::LogOn();
}
void SteamGameServer007::LogOff()
{
    ProxiedGameServer::LogOff();
}

bool SteamGameServer007::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}
bool SteamGameServer007::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer007::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer007::SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser )
{
    ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
	return true;
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer007::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer007::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}

bool SteamGameServer007::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool SteamGameServer007::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

void SteamGameServer007::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

void SteamGameServer007::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}

void SteamGameServer007::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}

bool SteamGameServer007::BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}

void SteamGameServer007::GetGameplayStats( )
{
    ProxiedGameServer::GetGameplayStats();
}

bool SteamGameServer007::RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup )
{
    return ProxiedGameServer::RequestUserGroupStatus(steamIDUser, steamIDGroup);
}
#pragma endregion

#pragma region SteamGameServer008
void SteamGameServer008::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer008::LogOff()
{
    ProxiedGameServer::LogOff();
}

bool SteamGameServer008::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}
bool SteamGameServer008::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer008::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer008::SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser )
{
    ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
	return true;
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer008::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer008::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}

bool SteamGameServer008::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool SteamGameServer008::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

void SteamGameServer008::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

void SteamGameServer008::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}
void SteamGameServer008::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}
bool SteamGameServer008::BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}
void SteamGameServer008::GetGameplayStats( )
{
    ProxiedGameServer::GetGameplayStats();
}
bool SteamGameServer008::RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup )
{
    return ProxiedGameServer::RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

uint32 SteamGameServer008::GetPublicIP()
{
    return ProxiedGameServer::GetPublicIP();
}

#pragma endregion

#pragma region SteamGameServer009
void SteamGameServer009::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer009::LogOff()
{
    ProxiedGameServer::LogOff();
}
bool SteamGameServer009::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}
bool SteamGameServer009::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer009::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer009::SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser )
{
    ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
	return true;
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer009::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer009::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}
bool SteamGameServer009::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}
bool SteamGameServer009::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

void SteamGameServer009::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName )
{
    ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}
void SteamGameServer009::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}
void SteamGameServer009::SetGameType( const char *pchGameType )
{
    ProxiedGameServer::SetGameType(pchGameType);
}
bool SteamGameServer009::BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName )
{
    return ProxiedGameServer::GetUserAchievementStatus(steamID, pchAchievementName);
}

void SteamGameServer009::GetGameplayStats( )
{
    ProxiedGameServer::GetGameplayStats();
}
bool SteamGameServer009::RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup )
{
    return ProxiedGameServer::RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

uint32 SteamGameServer009::GetPublicIP()
{
    return ProxiedGameServer::GetPublicIP();
}

void SteamGameServer009::SetGameData( const char *pchGameData)
{
    ProxiedGameServer::SetGameData(pchGameData);
}
EUserHasLicenseForAppResult SteamGameServer009::UserHasLicenseForApp( CSteamID steamID, AppId_t appID )
{
    return ProxiedGameServer::UserHasLicenseForApp(steamID, appID);
}

#pragma endregion

#pragma region SteamGameServer010
void SteamGameServer010::LogOn()
{
    ProxiedGameServer::LogOn();
}
void SteamGameServer010::LogOff()
{
    ProxiedGameServer::LogOff();
}

bool SteamGameServer010::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}
bool SteamGameServer010::BSecure()
{
    return ProxiedGameServer::BSecure();
}
//STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
CSteamID SteamGameServer010::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}

bool SteamGameServer010::SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser )
{
    ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
	return true;
}

//STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
CSteamID SteamGameServer010::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}

void SteamGameServer010::SendUserDisconnect( CSteamID steamIDUser )
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}

bool SteamGameServer010::BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore )
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

bool SteamGameServer010::BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort,
                                        uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode )
{
    return ProxiedGameServer::BSetServerType(unServerFlags, unGameIP, unGamePort, unSpectatorPort, usQueryPort, pchGameDir, pchVersion, bLANMode);
}

void SteamGameServer010::UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers,
                                            const char *pchServerName, const char *pSpectatorServerName,
                                            const char *pchMapName )
{
    ProxiedGameServer::UpdateServerStatus(cPlayers, cPlayersMax, cBotPlayers, pchServerName, pchMapName);
}

void SteamGameServer010::UpdateSpectatorPort( uint16 unSpectatorPort )
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}
void SteamGameServer010::SetGameTags( const char *pchGameTags )
{
    ProxiedGameServer::SetGameTags(pchGameTags);
}
void SteamGameServer010::GetGameplayStats( )
{
    ProxiedGameServer::GetGameplayStats();
}

SteamAPICall_t SteamGameServer010::GetServerReputation( )
{
    return ProxiedGameServer::GetServerReputation();
}
bool SteamGameServer010::RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup )
{
    return ProxiedGameServer::RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

uint32 SteamGameServer010::GetPublicIP()
{
    return ProxiedGameServer::GetPublicIP();
}

void SteamGameServer010::SetGameData( const char *pchGameData)
{
    ProxiedGameServer::SetGameData(pchGameData);
}

EUserHasLicenseForAppResult SteamGameServer010::UserHasLicenseForApp( CSteamID steamID, AppId_t appID )
{
    return ProxiedGameServer::UserHasLicenseForApp(steamID, appID);
}

HAuthTicket SteamGameServer010::GetAuthSessionTicket( void *pTicket, int cbMaxTicket, uint32 *pcbTicket )
{
    return ProxiedGameServer::GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}
EBeginAuthSessionResult SteamGameServer010::BeginAuthSession( const void *pAuthTicket, int cbAuthTicket, CSteamID steamID )
{
    return ProxiedGameServer::BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

void SteamGameServer010::EndAuthSession( CSteamID steamID )
{
    ProxiedGameServer::EndAuthSession(steamID);
}
void SteamGameServer010::CancelAuthTicket( HAuthTicket hAuthTicket )
{
    ProxiedGameServer::CancelAuthTicket(hAuthTicket);
}

#pragma endregion

#pragma region SteamGameServer011
bool SteamGameServer011::InitGameServer(uint32 unGameIP, uint16 unGamePort, uint16 usQueryPort, uint32 unServerFlags, AppId_t nAppID, const char *pchVersion)
{
    return ProxiedGameServer::InitGameServer(unGameIP, unGamePort, usQueryPort, unServerFlags, nAppID, pchVersion);
}
void SteamGameServer011::SetProduct(const char *pchProductName)
{
    ProxiedGameServer::SetProduct(pchProductName);
}
void SteamGameServer011::SetGameDescription(const char *pchGameDescription)
{
    ProxiedGameServer::SetGameDescription(pchGameDescription);
}
void SteamGameServer011::SetModDir(const char *pchModDir)
{
    ProxiedGameServer::SetModDir(pchModDir);
}
void SteamGameServer011::SetDedicatedServer(bool bDedicatedServer)
{
    ProxiedGameServer::SetDedicatedServer(bDedicatedServer);
}

void SteamGameServer011::LogOn(const char *pszAccountName, const char *pszPassword)
{
    ProxiedGameServer::LogOn(pszAccountName, pszPassword);
}
void SteamGameServer011::LogOnAnonymous()
{
    ProxiedGameServer::LogOnAnonymous();
}
void SteamGameServer011::LogOff()
{
    ProxiedGameServer::LogOff();
}
bool SteamGameServer011::BLoggedOn()
{
    return ProxiedGameServer::BLoggedOn();
}
bool SteamGameServer011::BSecure()
{
    return ProxiedGameServer::BSecure();
}
CSteamID SteamGameServer011::GetSteamID()
{
    return ProxiedGameServer::GetSteamID();
}
bool SteamGameServer011::WasRestartRequested()
{
    return ProxiedGameServer::WasRestartRequested();
}

void SteamGameServer011::SetMaxPlayerCount(int cPlayersMax)
{
    ProxiedGameServer::SetMaxPlayerCount(cPlayersMax);
}
void SteamGameServer011::SetBotPlayerCount(int cBotPlayers)
{
    ProxiedGameServer::SetBotPlayerCount(cBotPlayers);
}
void SteamGameServer011::SetServerName(const char *pszServerName)
{
    ProxiedGameServer::SetServerName(pszServerName);
}
void SteamGameServer011::SetMapName(const char *pszMapName)
{
    ProxiedGameServer::SetMapName(pszMapName);
}
void SteamGameServer011::SetPasswordProtected(bool bPasswordProtected)
{
    ProxiedGameServer::SetPasswordProtected(bPasswordProtected);
}
void SteamGameServer011::SetSpectatorPort(uint16 unSpectatorPort)
{
    ProxiedGameServer::SetSpectatorPort(unSpectatorPort);
}
void SteamGameServer011::SetSpectatorServerName(const char *pszSpectatorServerName)
{
    ProxiedGameServer::SetSpectatorServerName(pszSpectatorServerName);
}
void SteamGameServer011::ClearAllKeyValues()
{
    ProxiedGameServer::ClearAllKeyValues();
}
void SteamGameServer011::SetKeyValue(const char *pKey, const char *pValue)
{
    ProxiedGameServer::SetKeyValue(pKey, pValue);
}
void SteamGameServer011::SetGameTags(const char *pchGameTags)
{
    ProxiedGameServer::SetGameTags(pchGameTags);
}
void SteamGameServer011::SetGameData(const char *pchGameData)
{
    ProxiedGameServer::SetGameData(pchGameData);
}
void SteamGameServer011::SetRegion(const char *pchRegionName)
{
    ProxiedGameServer::SetRegion(pchRegionName);
}

int SteamGameServer011::SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser)
{
    return ProxiedGameServer::SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}
CSteamID SteamGameServer011::CreateUnauthenticatedUserConnection()
{
    return ProxiedGameServer::CreateUnauthenticatedUserConnection();
}
void SteamGameServer011::SendUserDisconnect(CSteamID steamIDUser)
{
    ProxiedGameServer::SendUserDisconnect(steamIDUser);
}
bool SteamGameServer011::BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore)
{
    return ProxiedGameServer::BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

HAuthTicket SteamGameServer011::GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    return ProxiedGameServer::GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}
EBeginAuthSessionResult SteamGameServer011::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    return ProxiedGameServer::BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}
void SteamGameServer011::EndAuthSession(CSteamID steamID)
{
    ProxiedGameServer::EndAuthSession(steamID);
}
void SteamGameServer011::CancelAuthTicket(HAuthTicket hAuthTicket)
{
    ProxiedGameServer::CancelAuthTicket(hAuthTicket);
}
EUserHasLicenseForAppResult SteamGameServer011::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
    return ProxiedGameServer::UserHasLicenseForApp(steamID, appID);
}
bool SteamGameServer011::RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)
{
    return ProxiedGameServer::RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

void SteamGameServer011::GetGameplayStats()
{
    ProxiedGameServer::GetGameplayStats();
}
SteamAPICall_t SteamGameServer011::GetServerReputation()
{
    return ProxiedGameServer::GetServerReputation();
}
uint32 SteamGameServer011::GetPublicIP()
{
    return ProxiedGameServer::GetPublicIP();
}
bool SteamGameServer011::HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort)
{
    return ProxiedGameServer::HandleIncomingPacket(pData, cbData, srcIP, srcPort);
}
int SteamGameServer011::GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort)
{
    return ProxiedGameServer::GetNextOutgoingPacket(pOut, cbMaxOut, pNetAdr, pPort);
}
void SteamGameServer011::EnableHeartbeats(bool bActive)
{
    ProxiedGameServer::EnableHeartbeats(bActive);
}
void SteamGameServer011::SetHeartbeatInterval(int iHeartbeatInterval)
{
    ProxiedGameServer::SetHeartbeatInterval(iHeartbeatInterval);
}
void SteamGameServer011::ForceHeartbeat()
{
    ProxiedGameServer::ForceHeartbeat();
}
SteamAPICall_t SteamGameServer011::AssociateWithClan(CSteamID clanID)
{
    return ProxiedGameServer::AssociateWithClan(clanID);
}
SteamAPICall_t SteamGameServer011::ComputeNewPlayerCompatibility(CSteamID steamID)
{
    return ProxiedGameServer::ComputeNewPlayerCompatibility(steamID);
}

#pragma endregion