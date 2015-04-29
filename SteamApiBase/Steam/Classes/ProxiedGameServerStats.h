/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedGameServerStats
{
public:
    static SteamAPICall_t RequestUserStats( CSteamID steamIDUser );
    
    // requests stat information for a user, usable after a successful call to RequestUserStats()
    
    static bool GetUserStat( CSteamID steamIDUser, const char *pchName, float *pData );
    static bool GetUserStat( CSteamID steamIDUser, const char *pchName, int32 *pData );
    static bool GetUserAchievement( CSteamID steamIDUser, const char *pchName, bool *pbAchieved );
    
    // Set / update stats and achievements.
    // Note: These updates will work only on stats game servers are allowed to edit and only for
    // game servers that have been declared as officially controlled by the game creators.
    // Set the IP range of your official servers on the Steamworks page
    
    static bool SetUserStat( CSteamID steamIDUser, const char *pchName, float fData );
    static bool SetUserStat( CSteamID steamIDUser, const char *pchName, int32 nData );
    
    static bool UpdateUserAvgRateStat( CSteamID steamIDUser, const char *pchName, float flCountThisSession, double dSessionLength );
    
    static bool SetUserAchievement( CSteamID steamIDUser, const char *pchName );
    static bool ClearUserAchievement( CSteamID steamIDUser, const char *pchName );
    
    // Store the current data on the server, will get a GSStatsStored_t callback when set.
    //
    // If the callback has a result of k_EResultInvalidParam, one or more stats
    // uploaded has been rejected, either because they broke constraints
    // or were out of date. In this case the server sends back updated values.
    // The stats should be re-iterated to keep in sync.
    static SteamAPICall_t StoreUserStats( CSteamID steamIDUser );
};
