/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedContentServer
{
public:
    static bool LogOn( uint32 uContentServerID );
    static bool LogOff();
    
    static bool BLoggedOn();
    
    static void SendClientContentAuthRequest( CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent );
    
    static bool BCheckTicket( CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength );
};
