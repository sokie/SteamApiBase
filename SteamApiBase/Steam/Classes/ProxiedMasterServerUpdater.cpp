/*
	This project is released under the GPL 2.0 license.
	Please do no evil.
 
	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Purpose: Game engines use this to tell the Steam master servers
 about their games so their games can show up in the server browser.
	*/

#include "../../StdInc.h"

void ProxiedMasterServerUpdater::SetActive( bool bActive )
{
    HHSDBG();
}

void ProxiedMasterServerUpdater::SetHeartbeatInterval( int iHeartbeatInterval )
{
    HHSDBG();
}

bool ProxiedMasterServerUpdater::HandleIncomingPacket( const void *pData, int cbData, uint32 srcIP, uint16 srcPort )
{
    HHSDBG();
    return true;
}

int ProxiedMasterServerUpdater::GetNextOutgoingPacket( void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort )
{
    HHSDBG();
    return 0;
}

void ProxiedMasterServerUpdater::SetBasicServerData( unsigned short nProtocolVersion, bool bDedicatedServer, const char *pRegionName, const char *pProductName, unsigned short nMaxReportedClients, bool bPasswordProtected, const char *pGameDescription )
{
    HHSDBG();
}

void ProxiedMasterServerUpdater::ClearAllKeyValues()
{
    HHSDBG();
}
void ProxiedMasterServerUpdater::SetKeyValue( const char *pKey, const char *pValue )
{
    HHSDBG();
}

void ProxiedMasterServerUpdater::NotifyShutdown()
{
    HHSDBG();
}

bool ProxiedMasterServerUpdater::WasRestartRequested()
{
    HHSDBG();
    return false;
}

void ProxiedMasterServerUpdater::ForceHeartbeat()
{
    HHSDBG();
}

bool ProxiedMasterServerUpdater::AddMasterServer( const char *pServerAddress )
{
    HHSDBG();
    return true;
}
bool ProxiedMasterServerUpdater::RemoveMasterServer( const char *pServerAddress )
{
    HHSDBG();
    return true;
}

int ProxiedMasterServerUpdater::GetNumMasterServers()
{
    HHSDBG();
    return 0;// does this break anything for now?
}

int ProxiedMasterServerUpdater::GetMasterServerAddress( int iServer, char *pOut, int outBufferSize )
{
    HHSDBG();
    return 0;
}