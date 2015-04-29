/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the game.
*/

#pragma once

#pragma region SteamContentServer001
class SteamContentServer001 : public ISteamContentServer001
{
public:
    bool LogOn( uint32 uContentServerID );
    bool LogOff();
    
    bool BLoggedOn();
    
    void SendClientContentAuthRequest( CSteamID steamID, uint32 unContentID );
};
#pragma endregion

#pragma region SteamContentServer002
class SteamContentServer002 : public ISteamContentServer002
{
public:
    bool LogOn( uint32 uContentServerID );
    bool LogOff();
    
    bool BLoggedOn();
    
    void SendClientContentAuthRequest( CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent );
    
    bool BCheckTicket( CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength );
};
#pragma endregion