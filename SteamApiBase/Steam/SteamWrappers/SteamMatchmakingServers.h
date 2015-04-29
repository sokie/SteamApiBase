/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
    Purpose: Functions for match making services for clients to get to game lists and details
*/

#pragma once

#pragma region SteamMatchmakingServers001
class SteamMatchmakingServers001 : public ISteamMatchmakingServers001
{
public:
    // Request a new list of servers of a particular type.  These calls each correspond to one of the EMatchMakingType values.
     void RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse );
     void RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse001 *pRequestServersResponse );
     void RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse );
     void RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse );
     void RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse );
     void RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse001 *pRequestServersResponse );
    
    /* the filters that are available in the ppchFilters params are:
     "map"		- map the server is running, as set in the dedicated server api
     "dedicated" - reports bDedicated from the API
     "secure"	- VAC-enabled
     "full"		- not full
     "empty"		- not empty
     "noplayers" - is empty
     "proxy"		- a relay server
     */
    
    // Get details on a given server in the list, you can get the valid range of index
    // values by calling GetServerCount().  You will also receive index values in
    // ISteamMatchmakingServerListResponse::ServerResponded() callbacks
     gameserveritem_t *GetServerDetails( EMatchMakingType eType, int iServer );
    
    // Cancel an request which is operation on the given list type.  You should call this to cancel
    // any in-progress requests before destructing a callback object that may have been passed
    // to one of the above list request calls.  Not doing so may result in a crash when a callback
    // occurs on the destructed object.
     void CancelQuery( EMatchMakingType eType );
    
    // Ping every server in your list again but don't update the list of servers
     void RefreshQuery( EMatchMakingType eType );
    
    // Returns true if the list is currently refreshing its server list
     bool IsRefreshing( EMatchMakingType eType );
    
    // How many servers in the given list, GetServerDetails above takes 0... GetServerCount() - 1
     int GetServerCount( EMatchMakingType eType );
    
    // Refresh a single server inside of a query (rather than all the servers )
     void RefreshServer( EMatchMakingType eType, int iServer );
    
    
    //-----------------------------------------------------------------------------
    // Queries to individual servers directly via IP/Port
    //-----------------------------------------------------------------------------
    
    // Request updated ping time and other details from a single server
     HServerQuery PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse );
    
    // Request the list of players currently playing on a server
     HServerQuery PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse );
    
    // Request the list of rules that the server is running (See ISteamMasterServerUpdater->SetKeyValue() to set the rules server side)
     HServerQuery ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse );
    
    // Cancel an outstanding Ping/Players/Rules query from above.  You should call this to cancel
    // any in-progress requests before destructing a callback object that may have been passed
    // to one of the above calls to avoid crashing when callbacks occur.
     void CancelServerQuery( HServerQuery hServerQuery );
};
#pragma endregion

#pragma region SteamMatchmakingServers002
class SteamMatchmakingServers002 : public ISteamMatchmakingServers002
{
public:
    // Request a new list of servers of a particular type.  These calls each correspond to one of the EMatchMakingType values.
    // Each call allocates a new asynchronous request object.
    // Request object must be released by calling ReleaseRequest( hServerListRequest )
     HServerListRequest RequestInternetServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
     HServerListRequest RequestLANServerList( AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse );
     HServerListRequest RequestFriendsServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
     HServerListRequest RequestFavoritesServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
     HServerListRequest RequestHistoryServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
     HServerListRequest RequestSpectatorServerList( AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse );
    
    // Releases the asynchronous request object and cancels any pending query on it if there's a pending query in progress.
    // RefreshComplete callback is not posted when request is released.
     void ReleaseRequest( HServerListRequest hServerListRequest );
    
    /* the filters that are available in the ppchFilters params are:
     "map"		- map the server is running, as set in the dedicated server api
     "dedicated" - reports bDedicated from the API
     "secure"	- VAC-enabled
     "full"		- not full
     "empty"		- not empty
     "noplayers" - is empty
     "proxy"		- a relay server
     */
    
    // Get details on a given server in the list, you can get the valid range of index
    // values by calling GetServerCount().  You will also receive index values in
    // ISteamMatchmakingServerListResponse::ServerResponded() callbacks
     gameserveritem_t *GetServerDetails( HServerListRequest hRequest, int iServer );
    
    // Cancel an request which is operation on the given list type.  You should call this to cancel
    // any in-progress requests before destructing a callback object that may have been passed
    // to one of the above list request calls.  Not doing so may result in a crash when a callback
    // occurs on the destructed object.
    // Canceling a query does not release the allocated request handle.
    // The request handle must be released using ReleaseRequest( hRequest )
     void CancelQuery( HServerListRequest hRequest );
    
    // Ping every server in your list again but don't update the list of servers
    // Query callback installed when the server list was requested will be used
    // again to post notifications and RefreshComplete, so the callback must remain
    // valid until another RefreshComplete is called on it or the request
    // is released with ReleaseRequest( hRequest )
     void RefreshQuery( HServerListRequest hRequest );
    
    // Returns true if the list is currently refreshing its server list
     bool IsRefreshing( HServerListRequest hRequest );
    
    // How many servers in the given list, GetServerDetails above takes 0... GetServerCount() - 1
     int GetServerCount( HServerListRequest hRequest );
    
    // Refresh a single server inside of a query (rather than all the servers )
     void RefreshServer( HServerListRequest hRequest, int iServer );
    
    
    //-----------------------------------------------------------------------------
    // Queries to individual servers directly via IP/Port
    //-----------------------------------------------------------------------------
    
    // Request updated ping time and other details from a single server
     HServerQuery PingServer( uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse );
    
    // Request the list of players currently playing on a server
     HServerQuery PlayerDetails( uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse );
    
    // Request the list of rules that the server is running (See ISteamMasterServerUpdater->SetKeyValue() to set the rules server side)
     HServerQuery ServerRules( uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse );
    
    // Cancel an outstanding Ping/Players/Rules query from above.  You should call this to cancel
    // any in-progress requests before destructing a callback object that may have been passed
    // to one of the above calls to avoid crashing when callbacks occur.
     void CancelServerQuery( HServerQuery hServerQuery );
};
#pragma endregion