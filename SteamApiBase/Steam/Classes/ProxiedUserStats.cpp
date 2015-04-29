/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
		UserStats
*/

#include "..\..\StdInc.h"

// Ask the server to send down this user's data and achievements for this game.
bool ProxiedUserStats::RequestCurrentStats()
{
	HHSDBG();
	return true;
}

// Data accessors.
bool ProxiedUserStats::GetStat(const char *pchName, int32 *pData)
{
	HHSDBG();
	return false;
}
bool ProxiedUserStats::GetStat(const char *pchName, float *pData)
{
	HHSDBG();
	return false;
}

// Set / update data.
bool ProxiedUserStats::SetStat(const char *pchName, int32_t nData)
{
	HHSDBG();
	return false;
}
bool ProxiedUserStats::SetStat(const char *pchName, float fData)
{
	HHSDBG();
	return false;
}
bool ProxiedUserStats::UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)
{
	HHSDBG();
	return false;
}

// Achievement flag accessors.
bool ProxiedUserStats::GetAchievement(const char *pchName, bool *pbAchieved)
{
	HHSDBG();
	return true;
}
bool ProxiedUserStats::SetAchievement(const char *pchName)
{
	HHSDBG();
	return true;
}
bool ProxiedUserStats::ClearAchievement(const char *pchName)
{
	HHSDBG();
	return true;
}

// Most likely a bool return here.
bool ProxiedUserStats::GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32_t *prtTime)
{
	HHSDBG();
	return true;
}

// Store the current data on the server.
bool ProxiedUserStats::StoreStats()
{
	HHSDBG();
	return true;
}

// Gets the icon of the achievement, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set.
int32_t ProxiedUserStats::GetAchievementIcon(const char *pchName)
{
	HHSDBG();
	return 0;
}

// Get general attributes (display name / text, etc) for an Achievement.
const char *ProxiedUserStats::GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)
{
	HHSDBG();
	return "";//this will probably crash
}

// Achievement progress - triggers an AchievementProgress callback, that is all.
// Calling this w/ N out of N progress will NOT set the achievement, the game must still do that.
bool ProxiedUserStats::IndicateAchievementProgress(const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
	HHSDBG();
	return true;
}

// Download stats for user X.
SteamAPICall_t ProxiedUserStats::RequestUserStats(CSteamID steamIDUser)
{
	HHSDBG();
	return 0;
}

// Requests stat information for a user, usable after a successful call to RequestUserStats().
bool ProxiedUserStats::GetUserStat(CSteamID steamIDUser, const char *pchName, int32_t *pData)
{
	HHSDBG();
	return false;
}
bool ProxiedUserStats::GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)
{
	HHSDBG();
	return false;
}
bool ProxiedUserStats::GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
	HHSDBG();
	return true;
}
bool ProxiedUserStats::GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
	HHSDBG();
	return true;
}

// Reset stats 
bool ProxiedUserStats::ResetAllStats(bool bAchievementsToo)
{
	HHSDBG();
	return false;
}

// Asks the Steam back-end for a leaderboard by name, and will create it if it's not yet.
SteamAPICall_t ProxiedUserStats::FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
	HHSDBG();
	return 0;
}

// Will create it if not found.
SteamAPICall_t ProxiedUserStats::FindLeaderboard(const char *pchLeaderboardName)
{
	HHSDBG();
	return 0;
}

// Returns the name of a leaderboard.
const char *ProxiedUserStats::GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)
{
	HHSDBG();
	return "";
}

// Returns the total number of entries in a leaderboard, as of the last request.
int32_t ProxiedUserStats::GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)
{
	HHSDBG();
	return 0;
}

// Returns the sort method of the leaderboard.
ELeaderboardSortMethod ProxiedUserStats::GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)
{
	HHSDBG();
	return k_ELeaderboardSortMethodNone;
}

// Returns the display type of the leaderboard.
ELeaderboardDisplayType ProxiedUserStats::GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)
{
	HHSDBG();
	return k_ELeaderboardDisplayTypeNone;
}

// Asks the Steam back-end for a set of rows in the leaderboard.
SteamAPICall_t ProxiedUserStats::DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
	HHSDBG();
	return 0;
}

// Capped at 100 users per call.
SteamAPICall_t ProxiedUserStats::DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
	HHSDBG();
	return 0;
}

// Returns data about a single leaderboard entry, should be called ina loop.
bool ProxiedUserStats::GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 pDetails[], int cDetailsMax)
{
	HHSDBG();
	return 0;
}

// Uploads a user score to the Steam back-end.
SteamAPICall_t ProxiedUserStats::UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
	HHSDBG();
	return 0;
}

// Attaches a piece of user generated content the user's entry on a leaderboard.
SteamAPICall_t ProxiedUserStats::AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
	HHSDBG();
	return 0;
}

// Retrieves the number of players currently playing the game (online + offline).
SteamAPICall_t ProxiedUserStats::GetNumberOfCurrentPlayers()
{
	HHSDBG();
	return 0;
}

// Requests that Steam fetch data on the percentage of players who have received each achievement globally.
SteamAPICall_t ProxiedUserStats::RequestGlobalAchievementPercentages()
{
	HHSDBG();
	SteamAPICall_t result = SteamCallback::RegisterCall();
	return result;
}

// Get the info on the most achieved achievement for the game.
int32_t ProxiedUserStats::GetMostAchievedAchievementInfo(char *pchName, uint32_t unNameBufLen, float *pflPercent, bool *pbAchieved)
{
	HHSDBG();
	return 0;
}
int32_t ProxiedUserStats::GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
	HHSDBG();
	return 0;
}

// Returns the percentage of users who have achieved the specified achievement.
bool ProxiedUserStats::GetAchievementAchievedPercent(const char *pchName, float *pflPercent)
{
	HHSDBG();
	return true;
}

// Requests global stats data, which is available for stats marked as "aggregated".
SteamAPICall_t ProxiedUserStats::RequestGlobalStats(int32_t nHistoryDays)
{
	HHSDBG();
	return 0;
}

// Gets the lifetime totals for an aggregated stat.
bool ProxiedUserStats::GetGlobalStat(const char *pchStatName, int64_t *pData)
{
	HHSDBG();
	return false;
}
bool ProxiedUserStats::GetGlobalStat(const char *pchStatName, double *pData)
{
	HHSDBG();
	return false;
}

// Gets history for an aggregated stat. pData will be filled with daily values, starting with today.
int32_t ProxiedUserStats::GetGlobalStatHistory(const char *pchStatName, int64_t *pData, uint32_t cubData)
{
	HHSDBG();
	return 0;
}
int32_t ProxiedUserStats::GetGlobalStatHistory(const char *pchStatName, double *pData, uint32_t cubData)
{
	HHSDBG();
	return 0;
}

uint32_t ProxiedUserStats::GetNumAchievements(CGameID nGameID)
{
	HHSDBG();
	return 0;
}
const char* ProxiedUserStats::GetAchievementName(uint32_t iAchievement)
{
	HHSDBG();
	return "";
}