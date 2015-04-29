/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
	Information about the game.
	*/
#include "..\..\StdInc.h"

#pragma region SteamGameServerStats001
SteamAPICall_t SteamGameServerStats001::RequestUserStats( CSteamID steamIDUser )
{
    return ProxiedGameServerStats::RequestUserStats(steamIDUser);
}

bool SteamGameServerStats001::GetUserStat( CSteamID steamIDUser, const char *pchName, float *pData )
{
    return ProxiedGameServerStats::GetUserStat(steamIDUser, pchName, pData);
}
bool SteamGameServerStats001::GetUserStat( CSteamID steamIDUser, const char *pchName, int32 *pData )
{
    return ProxiedGameServerStats::GetUserStat(steamIDUser, pchName, pData);
}
bool SteamGameServerStats001::GetUserAchievement( CSteamID steamIDUser, const char *pchName, bool *pbAchieved )
{
    return ProxiedGameServerStats::GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

bool SteamGameServerStats001::SetUserStat( CSteamID steamIDUser, const char *pchName, float fData )
{
    return ProxiedGameServerStats::SetUserStat(steamIDUser, pchName, fData);
}
bool SteamGameServerStats001::SetUserStat( CSteamID steamIDUser, const char *pchName, int32 nData )
{
    return ProxiedGameServerStats::SetUserStat(steamIDUser, pchName, nData);
}

bool SteamGameServerStats001::UpdateUserAvgRateStat( CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength )
{
    return ProxiedGameServerStats::UpdateUserAvgRateStat(steamIDUser, pchName, flCountThisSession, dSessionLength);
}

bool SteamGameServerStats001::SetUserAchievement( CSteamID steamIDUser, const char *pchName )
{
    return ProxiedGameServerStats::SetUserAchievement(steamIDUser, pchName);
}
bool SteamGameServerStats001::ClearUserAchievement( CSteamID steamIDUser, const char *pchName )
{
    return ProxiedGameServerStats::ClearUserAchievement(steamIDUser, pchName);
}

SteamAPICall_t SteamGameServerStats001::StoreUserStats( CSteamID steamIDUser )
{
    return ProxiedGameServerStats::StoreUserStats(steamIDUser);
}
#pragma endregion