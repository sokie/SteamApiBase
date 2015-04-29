/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "../../StdInc.h"

SteamAPICall_t ProxiedGameServerStats::RequestUserStats( CSteamID steamIDUser )
{
	HHSDBG();
	return NULL;
}

bool ProxiedGameServerStats::GetUserStat( CSteamID steamIDUser, const char *pchName, float *pData )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServerStats::GetUserStat( CSteamID steamIDUser, const char *pchName, int32 *pData )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServerStats::GetUserAchievement( CSteamID steamIDUser, const char *pchName, bool *pbAchieved )
{
    HHSDBG();
    return true;
}

bool ProxiedGameServerStats::SetUserStat( CSteamID steamIDUser, const char *pchName, float fData )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServerStats::SetUserStat( CSteamID steamIDUser, const char *pchName, int32 nData )
{
    HHSDBG();
    return true;
}

bool ProxiedGameServerStats::UpdateUserAvgRateStat( CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength )
{
    HHSDBG();
    return true;
}

bool ProxiedGameServerStats::SetUserAchievement( CSteamID steamIDUser, const char *pchName )
{
    HHSDBG();
    return true;
}
bool ProxiedGameServerStats::ClearUserAchievement( CSteamID steamIDUser, const char *pchName )
{
    HHSDBG();
    return true;
}

SteamAPICall_t ProxiedGameServerStats::StoreUserStats( CSteamID steamIDUser )
{
    HHSDBG();
    return NULL;
}