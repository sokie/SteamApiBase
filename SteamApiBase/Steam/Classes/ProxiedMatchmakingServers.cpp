/*
	This project is released under the GPL 2.0 license.
	Please do no evil.
 
	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
 Purpose: Functions for match making services for clients to get to game lists and details
 */

#include "../../StdInc.h"

HServerListRequest ProxiedMatchmakingServers::RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}
HServerListRequest ProxiedMatchmakingServers::RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}
HServerListRequest ProxiedMatchmakingServers::RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}
HServerListRequest ProxiedMatchmakingServers::RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}
HServerListRequest ProxiedMatchmakingServers::RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}
HServerListRequest ProxiedMatchmakingServers::RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}

#pragma region v1_queries
gameserveritem_t *ProxiedMatchmakingServers::GetServerDetails( EMatchMakingType eType, int iServer )
{
	HHSDBG();
	return NULL;
}

void ProxiedMatchmakingServers::CancelQuery( EMatchMakingType eType )
{
	HHSDBG();
}
void ProxiedMatchmakingServers::RefreshQuery( EMatchMakingType eType )
{
	HHSDBG();
}
bool ProxiedMatchmakingServers::IsRefreshing( EMatchMakingType eType )
{
	HHSDBG();
	return false;
}
int ProxiedMatchmakingServers::GetServerCount( EMatchMakingType eType )
{
	HHSDBG();
	return 1;
}
void ProxiedMatchmakingServers::RefreshServer( EMatchMakingType eType, int iServer )
{
	HHSDBG();
}
#pragma endregion

#pragma region v2_queries
void ProxiedMatchmakingServers::ReleaseRequest( HServerListRequest hServerListRequest )
{
	HHSDBG();
}

gameserveritem_t *ProxiedMatchmakingServers::GetServerDetails( HServerListRequest hRequest, int iServer )
{
	HHSDBG();
	return NULL;
}

void ProxiedMatchmakingServers::CancelQuery( HServerListRequest hRequest )
{
	HHSDBG();
}

void ProxiedMatchmakingServers::RefreshQuery( HServerListRequest hRequest )
{
	HHSDBG();
}

bool ProxiedMatchmakingServers::IsRefreshing( HServerListRequest hRequest )
{
	HHSDBG();
	return false;
}

int ProxiedMatchmakingServers::GetServerCount( HServerListRequest hRequest )
{
	HHSDBG();
	return 1;
}

void ProxiedMatchmakingServers::RefreshServer( HServerListRequest hRequest, int iServer )
{
	HHSDBG();
}
#pragma endregion

HServerQuery ProxiedMatchmakingServers::PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}

HServerQuery ProxiedMatchmakingServers::PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}

HServerQuery ProxiedMatchmakingServers::ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse )
{
	HHSDBG();
	return NULL;
}

void ProxiedMatchmakingServers::CancelServerQuery( HServerQuery hServerQuery )
{
	HHSDBG();
}