/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "../../StdInc.h"

bool ProxiedContentServer::LogOn( uint32 uContentServerID )
{
    HHSDBG();
    return true;
}
bool ProxiedContentServer::LogOff()
{
    HHSDBG();
    return true;
}

bool ProxiedContentServer::BLoggedOn()
{
    HHSDBG();
    return true;
}

void ProxiedContentServer::SendClientContentAuthRequest( CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent )
{
    HHSDBG();
}

bool ProxiedContentServer::BCheckTicket( CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength )
{
    HHSDBG();
    return true;
}