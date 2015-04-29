/*
	This project is released under the GPL 2.0 license.
	Please do no evil.
 
	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
 Purpose: Functions for match making services for clients to get to game lists and details
 */
#include "..\..\StdInc.h"

#pragma region SteamMatchmakingServers001
void SteamMatchmakingServers001::RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse )
{
	//ProxiedMatchmakingServers::RequestInternetServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
void SteamMatchmakingServers001::RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse001 *pRequestServersResponse )
{
   // ProxiedMatchmakingServers::RequestLANServerList(iApp, pRequestServersResponse);
}
void SteamMatchmakingServers001::RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse )
{
    //ProxiedMatchmakingServers::RequestFriendsServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
void SteamMatchmakingServers001::RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse )
{
   // ProxiedMatchmakingServers::RequestFavoritesServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
void SteamMatchmakingServers001::RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse )
{
    //ProxiedMatchmakingServers::RequestHistoryServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
void SteamMatchmakingServers001::RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse )
{
    //ProxiedMatchmakingServers::RequestSpectatorServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

gameserveritem_t *SteamMatchmakingServers001::GetServerDetails( EMatchMakingType eType, int iServer )
{
    return ProxiedMatchmakingServers::GetServerDetails(eType, iServer);
}

void SteamMatchmakingServers001::CancelQuery( EMatchMakingType eType )
{
    ProxiedMatchmakingServers::CancelQuery(eType);
}
void SteamMatchmakingServers001::RefreshQuery( EMatchMakingType eType )
{
    ProxiedMatchmakingServers::RefreshQuery(eType);
}
bool SteamMatchmakingServers001::IsRefreshing( EMatchMakingType eType )
{
    return ProxiedMatchmakingServers::IsRefreshing(eType);
}

int SteamMatchmakingServers001::GetServerCount( EMatchMakingType eType )
{
    return ProxiedMatchmakingServers::GetServerCount(eType);
}
void SteamMatchmakingServers001::RefreshServer( EMatchMakingType eType, int iServer )
{
    ProxiedMatchmakingServers::RefreshServer(eType, iServer);
}

HServerQuery SteamMatchmakingServers001::PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::PingServer(unIP, usPort, pRequestServersResponse);
}

HServerQuery SteamMatchmakingServers001::PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::PlayerDetails(unIP, usPort, pRequestServersResponse);
}

HServerQuery SteamMatchmakingServers001::ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::ServerRules(unIP, usPort, pRequestServersResponse);
}

void SteamMatchmakingServers001::CancelServerQuery( HServerQuery hServerQuery )
{
    ProxiedMatchmakingServers::CancelServerQuery(hServerQuery);
}
#pragma endregion

#pragma region SteamMatchmakingServers002

HServerListRequest SteamMatchmakingServers002::RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::RequestInternetServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
HServerListRequest SteamMatchmakingServers002::RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::RequestLANServerList(iApp, pRequestServersResponse);
}
HServerListRequest SteamMatchmakingServers002::RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::RequestFriendsServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
HServerListRequest SteamMatchmakingServers002::RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::RequestFavoritesServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
HServerListRequest SteamMatchmakingServers002::RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::RequestHistoryServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}
HServerListRequest SteamMatchmakingServers002::RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::RequestSpectatorServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

void SteamMatchmakingServers002::ReleaseRequest( HServerListRequest hServerListRequest )
{
    ProxiedMatchmakingServers::ReleaseRequest(hServerListRequest);
}

gameserveritem_t *SteamMatchmakingServers002::GetServerDetails( HServerListRequest hRequest, int iServer )
{
    return ProxiedMatchmakingServers::GetServerDetails(hRequest, iServer);
}

void SteamMatchmakingServers002::CancelQuery( HServerListRequest hRequest )
{
    ProxiedMatchmakingServers::CancelQuery(hRequest);
}

void SteamMatchmakingServers002::RefreshQuery( HServerListRequest hRequest )
{
    ProxiedMatchmakingServers::RefreshQuery(hRequest);
}

bool SteamMatchmakingServers002::IsRefreshing( HServerListRequest hRequest )
{
    return ProxiedMatchmakingServers::IsRefreshing(hRequest);
}

int SteamMatchmakingServers002::GetServerCount( HServerListRequest hRequest )
{
    return ProxiedMatchmakingServers::GetServerCount(hRequest);
}

void SteamMatchmakingServers002::RefreshServer( HServerListRequest hRequest, int iServer )
{
    ProxiedMatchmakingServers::RefreshServer(hRequest, iServer);
}

HServerQuery SteamMatchmakingServers002::PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::PingServer(unIP, usPort, pRequestServersResponse);
}

HServerQuery SteamMatchmakingServers002::PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::PlayerDetails(unIP, usPort, pRequestServersResponse);
}

HServerQuery SteamMatchmakingServers002::ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse )
{
    return ProxiedMatchmakingServers::ServerRules(unIP, usPort, pRequestServersResponse);
}

void SteamMatchmakingServers002::CancelServerQuery( HServerQuery hServerQuery )
{
    ProxiedMatchmakingServers::CancelServerQuery(hServerQuery);
}
#pragma endregion