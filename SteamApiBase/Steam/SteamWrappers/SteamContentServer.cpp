/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
	Information about the game.
	*/
#include "..\..\StdInc.h"

#pragma region SteamContentServer001
bool SteamContentServer001::LogOn( uint32 uContentServerID )
{
    return ProxiedContentServer::LogOn(uContentServerID);
}
bool SteamContentServer001::LogOff()
{
    return ProxiedContentServer::LogOff();
}
    
bool SteamContentServer001::BLoggedOn()
{
    return ProxiedContentServer::BLoggedOn();
}
    
void SteamContentServer001::SendClientContentAuthRequest( CSteamID steamID, uint32 unContentID )
{
    ProxiedContentServer::SendClientContentAuthRequest(steamID, unContentID, 0, false);
}
#pragma endregion

#pragma region SteamContentServer002
bool SteamContentServer002::LogOn( uint32 uContentServerID )
{
     return ProxiedContentServer::LogOn(uContentServerID);
}
bool SteamContentServer002::LogOff()
{
     return ProxiedContentServer::LogOff();
}
    
bool SteamContentServer002::BLoggedOn()
{
    return ProxiedContentServer::BLoggedOn();
}
    
void SteamContentServer002::SendClientContentAuthRequest( CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent )
{
	ProxiedContentServer::SendClientContentAuthRequest(steamID, uContentID, ulSessionToken, bTokenPresent);
}
    
bool SteamContentServer002::BCheckTicket( CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength )
{
    return ProxiedContentServer::BCheckTicket(steamID, uContentID, pvTicketData, cubTicketLength);
}
#pragma endregion