/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Purpose: Game engines use this to tell the Steam master servers
    about their games so their games can show up in the server browser.
	*/
#include "..\..\StdInc.h"

#pragma region SteamMasterServerUpdater001
void SteamMasterServerUpdater001::SetActive( bool bActive )
{
    ProxiedMasterServerUpdater::SetActive(bActive);
}

void SteamMasterServerUpdater001::SetHeartbeatInterval( int iHeartbeatInterval )
{
    ProxiedMasterServerUpdater::SetHeartbeatInterval(iHeartbeatInterval);
}

bool SteamMasterServerUpdater001::HandleIncomingPacket( const void *pData, int cbData, uint32 srcIP, uint16 srcPort )
{
    return ProxiedMasterServerUpdater::HandleIncomingPacket(pData, cbData, srcIP, srcPort);
}

int SteamMasterServerUpdater001::GetNextOutgoingPacket( void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort )
{
    return ProxiedMasterServerUpdater::GetNextOutgoingPacket(pOut, cbMaxOut, pNetAdr, pPort);
}

void SteamMasterServerUpdater001::SetBasicServerData( unsigned short nProtocolVersion, bool bDedicatedServer, const char *pRegionName, const char *pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char *pGameDescription )
{
    ProxiedMasterServerUpdater::SetBasicServerData(nProtocolVersion, bDedicatedServer, pRegionName, pProductName, nMaxReportedClients, bPasswordProtected, pGameDescription);
}

void SteamMasterServerUpdater001::ClearAllKeyValues()
{
    ProxiedMasterServerUpdater::ClearAllKeyValues();
}

void SteamMasterServerUpdater001::SetKeyValue( const char *pKey, const char *pValue )
{
    ProxiedMasterServerUpdater::SetKeyValue(pKey, pValue);
}

void SteamMasterServerUpdater001::NotifyShutdown()
{
    ProxiedMasterServerUpdater::NotifyShutdown();
}

bool SteamMasterServerUpdater001::WasRestartRequested()
{
    return ProxiedMasterServerUpdater::WasRestartRequested();
}

void SteamMasterServerUpdater001::ForceHeartbeat()
{
    ProxiedMasterServerUpdater::ForceHeartbeat();
}

bool SteamMasterServerUpdater001::AddMasterServer( const char *pServerAddress )
{
    return ProxiedMasterServerUpdater::AddMasterServer(pServerAddress);
}
bool SteamMasterServerUpdater001::RemoveMasterServer( const char *pServerAddress )
{
    return ProxiedMasterServerUpdater::RemoveMasterServer(pServerAddress);
}

int SteamMasterServerUpdater001::GetNumMasterServers()
{
    return ProxiedMasterServerUpdater::GetNumMasterServers();
}

int SteamMasterServerUpdater001::GetMasterServerAddress( int iServer, char *pOut, int outBufferSize )
{
    return ProxiedMasterServerUpdater::GetMasterServerAddress(iServer, pOut, outBufferSize);
}
#pragma endregion