/*
 This project is released under the GPL 2.0 license.
 Please do no evil.
 
 Initial author: (https://github.com/)Convery
 Started: 2015-04-08
 Notes:
 Information about the game.
 */

#pragma once

#pragma region SteamGameServer002
class SteamGameServer002 : public ISteamGameServer002
{
public:
    void LogOn();
    void LogOff();
    bool BLoggedOn();
    
    void SetSpawnCount( uint32 ucSpawn );
    
    bool GetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey );

    bool SendSteam2UserConnect(  uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie );
    
    bool SendSteam3UserConnect( CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie );
    
    bool RemoveUserConnect( uint32 unUserID );
    
    bool SendUserDisconnect( CSteamID steamID, uint32 unUserID );
    
    bool SendUserStatusResponse( CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast );
    
    bool Obsolete_GSSetStatus( int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion );
    
    bool UpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName );
    
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    bool SetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion );
    
    bool SetServerType2( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );

    bool UpdateStatus2( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    bool CreateUnauthenticatedUser( CSteamID *pSteamID );
    
    bool SetUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    void UpdateSpectatorPort( uint16 unSpectatorPort );

    void SetGameType( const char *pchGameType );
};
#pragma endregion

#pragma region SteamGameServer003
class SteamGameServer003 : public ISteamGameServer003
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    bool BLoggedOn();
    
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    bool GetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey );
    
    bool SendUserConnect( uint32, uint32, uint16, const void *, uint32 );
    
    bool RemoveUserConnect( uint32 unUserID );
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    bool SendUserDisconnect( CSteamID steamID, uint32 unUserID );
    
    // user authentication functions
    void SetSpawnCount( uint32 ucSpawn );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool SetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    bool UpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    bool CreateUnauthenticatedUser( CSteamID *pSteamID );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool SetUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool GetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
};
#pragma endregion

#pragma region SteamGameServer004
class SteamGameServer004 : public ISteamGameServer004
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    bool BLoggedOn();
    
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    bool SendUserConnectAndAuthenticate( CSteamID steamIDUser, uint32, void *, uint32 );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 usSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    bool UpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
};
#pragma endregion

#pragma region SteamGameServer005
class SteamGameServer005 : public ISteamGameServer005
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    bool BLoggedOn();
    
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    // Handles receiving a new connection from a Steam user.  This call will ask the Steam
    // servers to validate the users identity, app ownership, and VAC status.  If the Steam servers
    // are off-line, then it will validate the cached ticket itself which will validate app ownership
    // and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
    // and must then be sent up to the game server for authentication.
    //
    // Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
    // If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
    // for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
    bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    // Updates server status values which shows up in the server browser and matchmaking APIs
    void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
    // Ask for the gameplay stats for the server. Results returned in a callback
    void GetGameplayStats( );
    
};
#pragma endregion

#pragma region SteamGameServer006
class SteamGameServer006 : public ISteamGameServer006
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    
    // status functions
    bool BLoggedOn();
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    // Handles receiving a new connection from a Steam user.  This call will ask the Steam
    // servers to validate the users identity, app ownership, and VAC status.  If the Steam servers
    // are off-line, then it will validate the cached ticket itself which will validate app ownership
    // and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
    // and must then be sent up to the game server for authentication.
    //
    // Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
    // If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
    // for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
    bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    // Updates server status values which shows up in the server browser and matchmaking APIs
    void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
    // Ask for the gameplay stats for the server. Results returned in a callback
    void GetGameplayStats( );
    
};
#pragma endregion

#pragma region SteamGameServer007
class SteamGameServer007 : public ISteamGameServer007
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    
    // status functions
    bool BLoggedOn();
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    // Handles receiving a new connection from a Steam user.  This call will ask the Steam
    // servers to validate the users identity, app ownership, and VAC status.  If the Steam servers
    // are off-line, then it will validate the cached ticket itself which will validate app ownership
    // and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
    // and must then be sent up to the game server for authentication.
    //
    // Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
    // If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
    // for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
    bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    // Updates server status values which shows up in the server browser and matchmaking APIs
    void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
    // Ask for the gameplay stats for the server. Results returned in a callback
    void GetGameplayStats( );
    
    // Ask if a user in in the specified group, results returns async by GSUserGroupStatus_t
    // returns false if we're not connected to the steam servers and thus cannot ask
    bool RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup );
    
};
#pragma endregion

#pragma region SteamGameServer008
class SteamGameServer008 : public ISteamGameServer008
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    
    // status functions
    bool BLoggedOn();
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    // Handles receiving a new connection from a Steam user.  This call will ask the Steam
    // servers to validate the users identity, app ownership, and VAC status.  If the Steam servers
    // are off-line, then it will validate the cached ticket itself which will validate app ownership
    // and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
    // and must then be sent up to the game server for authentication.
    //
    // Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
    // If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
    // for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
    bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    // Updates server status values which shows up in the server browser and matchmaking APIs
    void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
    // Ask for the gameplay stats for the server. Results returned in a callback
    void GetGameplayStats( );
    
    // Ask if a user in in the specified group, results returns async by GSUserGroupStatus_t
    // returns false if we're not connected to the steam servers and thus cannot ask
    bool RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup );
    
    // Returns the public IP of the server according to Steam, useful when the server is
    // behind NAT and you want to advertise its IP in a lobby for other clients to directly
    // connect to
    uint32 GetPublicIP();
    
};
#pragma endregion

#pragma region SteamGameServer009
class SteamGameServer009 : public ISteamGameServer009
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    
    // status functions
    bool BLoggedOn();
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    // Handles receiving a new connection from a Steam user.  This call will ask the Steam
    // servers to validate the users identity, app ownership, and VAC status.  If the Steam servers
    // are off-line, then it will validate the cached ticket itself which will validate app ownership
    // and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
    // and must then be sent up to the game server for authentication.
    //
    // Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
    // If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
    // for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
    bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    // Updates server status values which shows up in the server browser and matchmaking APIs
    void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametype" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameType( const char *pchGameType );
    
    // Ask if a user has a specific achievement for this game, will get a callback on reply
    bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName );
    
    // Ask for the gameplay stats for the server. Results returned in a callback
    void GetGameplayStats( );
    
    // Ask if a user in in the specified group, results returns async by GSUserGroupStatus_t
    // returns false if we're not connected to the steam servers and thus cannot ask
    bool RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup );
    
    // Returns the public IP of the server according to Steam, useful when the server is
    // behind NAT and you want to advertise its IP in a lobby for other clients to directly
    // connect to
    uint32 GetPublicIP();
    
    // Sets a string defining the "gamedata" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    // don't set this unless it actually changes, its only uploaded to the master once (when
    // acknowledged)
    void SetGameData( const char *pchGameData);
    
    // After receiving a user's authentication data, and passing it to SendUserConnectAndAuthenticate, use this function
    // to determine if the user owns downloadable content specified by the provided AppID.
    EUserHasLicenseForAppResult UserHasLicenseForApp( CSteamID steamID, AppId_t appID );
    
};
#pragma endregion

#pragma region SteamGameServer010
class SteamGameServer010 : public ISteamGameServer010
{
public:
    // connection functions
    void LogOn();
    void LogOff();
    
    // status functions
    bool BLoggedOn();
    bool BSecure();
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, GetSteamID)
    CSteamID GetSteamID();
    
    // Handles receiving a new connection from a Steam user.  This call will ask the Steam
    // servers to validate the users identity, app ownership, and VAC status.  If the Steam servers
    // are off-line, then it will validate the cached ticket itself which will validate app ownership
    // and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
    // and must then be sent up to the game server for authentication.
    //
    // Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
    // If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
    // for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
    bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser );
    
    // Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
    //
    // Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
    // when this user leaves the server just like you would for a real user.
    //STEAMWORKS_STRUCT_RETURN_0(CSteamID, CreateUnauthenticatedUserConnection)
    CSteamID CreateUnauthenticatedUserConnection();
    
    // Should be called whenever a user leaves our game server, this lets Steam internally
    // track which users are currently on which servers for the purposes of preventing a single
    // account being logged into multiple servers, showing who is currently on a server, etc.
    void SendUserDisconnect( CSteamID steamIDUser );
    
    // Update the data to be displayed in the server browser and matchmaking interfaces for a user
    // currently connected to the server.  For regular users you must call this after you receive a
    // GSUserValidationSuccess callback.
    //
    // Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
    bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore );
    
    // You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
    //
    // To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
    //
    // Input:   nGameAppID - The Steam assigned AppID for the game
    //          unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
    //          unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
    //          unGamePort - The port which the server is listening for client connections on
    //          unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
    //          usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
    //          pchGameDir - A unique string identifier for your game
    //          pchVersion - The current version of the server as a string like 1.0.0.0
    //          bLanMode - Is this a LAN only server?
    //
    // bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
    // and stop calling it in SteamGameServer_Init()?
    bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort,
                        uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode );
    
    // Updates server status values which shows up in the server browser and matchmaking APIs
    void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers,
                            const char *pchServerName, const char *pSpectatorServerName,
                            const char *pchMapName );
    
    // This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
    void UpdateSpectatorPort( uint16 unSpectatorPort );
    
    // Sets a string defining the "gametags" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    void SetGameTags( const char *pchGameTags );
    
    // Ask for the gameplay stats for the server. Results returned in a callback
    void GetGameplayStats( );
    
    // Gets the reputation score for the game server. This API also checks if the server or some
    // other server on the same IP is banned from the Steam master servers.
    SteamAPICall_t GetServerReputation( );
    
    // Ask if a user in in the specified group, results returns async by GSUserGroupStatus_t
    // returns false if we're not connected to the steam servers and thus cannot ask
    bool RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup );
    
    // Returns the public IP of the server according to Steam, useful when the server is
    // behind NAT and you want to advertise its IP in a lobby for other clients to directly
    // connect to
    uint32 GetPublicIP();
    
    // Sets a string defining the "gamedata" for this server, this is optional, but if it is set
    // it allows users to filter in the matchmaking/server-browser interfaces based on the value
    // don't set this unless it actually changes, its only uploaded to the master once (when
    // acknowledged)
    void SetGameData( const char *pchGameData);
    
    // After receiving a user's authentication data, and passing it to SendUserConnectAndAuthenticate, use this function
    // to determine if the user owns downloadable content specified by the provided AppID.
    EUserHasLicenseForAppResult UserHasLicenseForApp( CSteamID steamID, AppId_t appID );
    
    // New auth system APIs - do not mix with the old auth system APIs.
    // ----------------------------------------------------------------
    
    // Retrieve ticket to be sent to the entity who wishes to authenticate you ( using BeginAuthSession API ).
    // pcbTicket retrieves the length of the actual ticket.
    HAuthTicket GetAuthSessionTicket( void *pTicket, int cbMaxTicket, uint32 *pcbTicket );
    
    // Authenticate ticket ( from GetAuthSessionTicket ) from entity steamID to be sure it is valid and isnt reused
    // Registers for callbacks if the entity goes offline or cancels the ticket ( see ValidateAuthTicketResponse_t callback and EAuthSessionResponse )
    EBeginAuthSessionResult BeginAuthSession( const void *pAuthTicket, int cbAuthTicket, CSteamID steamID );
    
    // Stop tracking started by BeginAuthSession - called when no longer playing game with this entity
    void EndAuthSession( CSteamID steamID );
    
    // Cancel auth ticket from GetAuthSessionTicket, called when no longer playing game with the entity you gave the ticket to
    void CancelAuthTicket( HAuthTicket hAuthTicket );
    
};
#pragma endregion

#pragma region SteamGameServer011

class SteamGameServer011 : public ISteamGameServer011
{
public:
    bool InitGameServer(uint32 unGameIP, uint16 unGamePort, uint16 usQueryPort, uint32 unServerFlags, AppId_t nAppID, const char *pchVersion);
    void SetProduct(const char *pchProductName);
    void SetGameDescription(const char *pchGameDescription);
    void SetModDir(const char *pchModDir);
    void SetDedicatedServer(bool bDedicatedServer);
    
    void LogOn(const char *pszAccountName, const char *pszPassword);
    void LogOnAnonymous();
    void LogOff();
    bool BLoggedOn();
    bool BSecure();
    CSteamID GetSteamID();
    bool WasRestartRequested();
    
    void SetMaxPlayerCount(int cPlayersMax);
    void SetBotPlayerCount(int cBotPlayers);
    void SetServerName(const char *pszServerName);
    void SetMapName(const char *pszMapName);
    void SetPasswordProtected(bool bPasswordProtected);
    void SetSpectatorPort(uint16 unSpectatorPort);
    void SetSpectatorServerName(const char *pszSpectatorServerName);
    void ClearAllKeyValues();
    void SetKeyValue(const char *pKey, const char *pValue);
    void SetGameTags(const char *pchGameTags);
    void SetGameData(const char *pchGameData);
    void SetRegion(const char *pchRegionName);
    
    int SendUserConnectAndAuthenticate(uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser);
    CSteamID CreateUnauthenticatedUserConnection();
    void SendUserDisconnect(CSteamID steamIDUser);
    bool BUpdateUserData(CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore);
    
    HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);
    EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID);
    void EndAuthSession(CSteamID steamID);
    void CancelAuthTicket(HAuthTicket hAuthTicket);
    EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);
    bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup);
    
    void GetGameplayStats();
    SteamAPICall_t GetServerReputation();
    uint32 GetPublicIP();
    bool HandleIncomingPacket(const void *pData, int cbData, uint32 srcIP, uint16 srcPort);
    int GetNextOutgoingPacket(void *pOut, int cbMaxOut, uint32 *pNetAdr, uint16 *pPort);
    void EnableHeartbeats(bool bActive);
    void SetHeartbeatInterval(int iHeartbeatInterval);
    void ForceHeartbeat();
    SteamAPICall_t AssociateWithClan(CSteamID clanID);
    SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamID);
};

#pragma endregion