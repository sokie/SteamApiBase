/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
*/

#include "..\..\StdInc.h"

#pragma region SteamUserStats001

#pragma endregion

#pragma region SteamUserStats002

#pragma endregion

#pragma region SteamUserStats003

#pragma endregion

#pragma region SteamUserStats004

#pragma endregion

#pragma region SteamUserStats005

#pragma endregion

#pragma region SteamUserStats006

#pragma endregion

#pragma region SteamUserStats007

#pragma endregion

#pragma region SteamUserStats008

#pragma endregion

#pragma region SteamUserStats009

#pragma endregion

#pragma region SteamUserStats010

#pragma endregion

#pragma region SteamUserStats011


// Ask the server to send down this user's data and achievements for this game.
bool SteamUserStats011::RequestCurrentStats()
{
	return ProxiedUserStats::RequestCurrentStats();
}

// Data accessors.
bool SteamUserStats011::GetStat(const char *pchName, int32_t *pData)
{
	return ProxiedUserStats::GetStat(pchName, pData);
}
bool SteamUserStats011::GetStat(const char *pchName, float *pData)
{
	return ProxiedUserStats::GetStat(pchName, pData);
}

// Set / update data.
bool SteamUserStats011::SetStat(const char *pchName, int32_t nData)
{
	return ProxiedUserStats::SetStat(pchName, nData);
}
bool SteamUserStats011::SetStat(const char *pchName, float fData)
{
	return ProxiedUserStats::SetStat(pchName, fData);
}
bool SteamUserStats011::UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength)
{
	return ProxiedUserStats::UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

// Achievement flag accessors.
bool SteamUserStats011::GetAchievement(const char *pchName, bool *pbAchieved)
{
	return ProxiedUserStats::GetAchievement(pchName, pbAchieved);
}
bool SteamUserStats011::SetAchievement(const char *pchName)
{
	return ProxiedUserStats::SetAchievement(pchName);
}
bool SteamUserStats011::ClearAchievement(const char *pchName)
{
	return ProxiedUserStats::ClearAchievement(pchName);
}

// Most likely a bool return here.
bool SteamUserStats011::GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32_t *prtTime)
{
	return ProxiedUserStats::GetAchievementAndUnlockTime(pchName, pbAchieved, prtTime);
}

// Store the current data on the server.
bool SteamUserStats011::StoreStats()
{
	return ProxiedUserStats::StoreStats();
}

// Gets the icon of the achievement, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set.
int32_t SteamUserStats011::GetAchievementIcon(const char *pchName)
{
	return ProxiedUserStats::GetAchievementIcon(pchName);
}

// Get general attributes (display name / text, etc) for an Achievement.
const char *SteamUserStats011::GetAchievementDisplayAttribute(const char *pchName, const char *pchKey)
{
	return ProxiedUserStats::GetAchievementDisplayAttribute(pchName, pchKey);
}

// Achievement progress - triggers an AchievementProgress callback, that is all.
// Calling this w/ N out of N progress will NOT set the achievement, the game must still do that.
bool SteamUserStats011::IndicateAchievementProgress(const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress)
{
	return ProxiedUserStats::IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

// Download stats for user X.
SteamAPICall_t SteamUserStats011::RequestUserStats(CSteamID steamIDUser)
{
	return ProxiedUserStats::RequestUserStats(steamIDUser);
}

// Requests stat information for a user, usable after a successful call to RequestUserStats().
bool SteamUserStats011::GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData)
{
	return ProxiedUserStats::GetUserStat(steamIDUser, pchName, pData);
}
bool SteamUserStats011::GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData)
{
	return ProxiedUserStats::GetUserStat(steamIDUser, pchName, pData);
}
bool SteamUserStats011::GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
	return ProxiedUserStats::GetUserAchievement(steamIDUser, pchName, pbAchieved);
}
bool SteamUserStats011::GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
	return ProxiedUserStats::GetUserAchievementAndUnlockTime(steamIDUser, pchName, pbAchieved, punUnlockTime);
}

// Reset stats 
bool SteamUserStats011::ResetAllStats(bool bAchievementsToo)
{
	return ProxiedUserStats::ResetAllStats(bAchievementsToo);
}

// Asks the Steam back-end for a leaderboard by name, and will create it if it's not yet.
SteamAPICall_t SteamUserStats011::FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
	return ProxiedUserStats::FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

// Will create it if not found.
SteamAPICall_t SteamUserStats011::FindLeaderboard(const char *pchLeaderboardName)
{
	return ProxiedUserStats::FindLeaderboard(pchLeaderboardName);
}

// Returns the name of a leaderboard.
const char *SteamUserStats011::GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)
{
	return ProxiedUserStats::GetLeaderboardName(hSteamLeaderboard);
}

// Returns the total number of entries in a leaderboard, as of the last request.
int32_t SteamUserStats011::GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)
{
	return ProxiedUserStats::GetLeaderboardEntryCount(hSteamLeaderboard);
}

// Returns the sort method of the leaderboard.
ELeaderboardSortMethod SteamUserStats011::GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)
{
	return ProxiedUserStats::GetLeaderboardSortMethod(hSteamLeaderboard);
}

// Returns the display type of the leaderboard.
ELeaderboardDisplayType SteamUserStats011::GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)
{
	return ProxiedUserStats::GetLeaderboardDisplayType(hSteamLeaderboard);
}

// Asks the Steam back-end for a set of rows in the leaderboard.
SteamAPICall_t SteamUserStats011::DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
	return ProxiedUserStats::DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

// Capped at 100 users per call.
SteamAPICall_t SteamUserStats011::DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
	return ProxiedUserStats::DownloadLeaderboardEntriesForUsers(hSteamLeaderboard, prgUsers, cUsers);
}

// Returns data about a single leaderboard entry, should be called ina loop.
bool SteamUserStats011::GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 pDetails[], int cDetailsMax)
{
	return ProxiedUserStats::GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

// Uploads a user score to the Steam back-end.
SteamAPICall_t SteamUserStats011::UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
	return ProxiedUserStats::UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

// Attaches a piece of user generated content the user's entry on a leaderboard.
SteamAPICall_t SteamUserStats011::AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
	return ProxiedUserStats::AttachLeaderboardUGC(hSteamLeaderboard, hUGC);
}

// Retrieves the number of players currently playing the game (online + offline).
SteamAPICall_t SteamUserStats011::GetNumberOfCurrentPlayers()
{
	return ProxiedUserStats::GetNumberOfCurrentPlayers();
}

// Requests that Steam fetch data on the percentage of players who have received each achievement globally.
SteamAPICall_t SteamUserStats011::RequestGlobalAchievementPercentages()
{
	return ProxiedUserStats::RequestGlobalAchievementPercentages();
}

// Get the info on the most achieved achievement for the game.
int32_t SteamUserStats011::GetMostAchievedAchievementInfo(char *pchName, uint32_t unNameBufLen, float *pflPercent, bool *pbAchieved)
{
	return ProxiedUserStats::GetMostAchievedAchievementInfo(pchName, unNameBufLen, pflPercent, pbAchieved);
}
int32_t SteamUserStats011::GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
	return ProxiedUserStats::GetNextMostAchievedAchievementInfo(iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}

// Returns the percentage of users who have achieved the specified achievement.
bool SteamUserStats011::GetAchievementAchievedPercent(const char *pchName, float *pflPercent)
{
	return ProxiedUserStats::GetAchievementAchievedPercent(pchName, pflPercent);
}

// Requests global stats data, which is available for stats marked as "aggregated".
SteamAPICall_t SteamUserStats011::RequestGlobalStats(int32 nHistoryDays)
{
	return ProxiedUserStats::RequestGlobalStats(nHistoryDays);
}

// Gets the lifetime totals for an aggregated stat.
bool SteamUserStats011::GetGlobalStat(const char *pchStatName, int64 *pData)
{
	return ProxiedUserStats::GetGlobalStat(pchStatName, pData);
}
bool SteamUserStats011::GetGlobalStat(const char *pchStatName, double *pData)
{
	return ProxiedUserStats::GetGlobalStat(pchStatName, pData);
}

// Gets history for an aggregated stat. pData will be filled with daily values, starting with today.
int32_t SteamUserStats011::GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData)
{
	return ProxiedUserStats::GetGlobalStatHistory(pchStatName, pData, cubData);
}
int32_t SteamUserStats011::GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData)
{
	return ProxiedUserStats::GetGlobalStatHistory(pchStatName, pData, cubData);
}

uint32_t SteamUserStats011::GetNumAchievements(CGameID nGameID)
{
	return ProxiedUserStats::GetNumAchievements(nGameID);
}
const char* SteamUserStats011::GetAchievementName(uint32_t iAchievement)
{
	return ProxiedUserStats::GetAchievementName(iAchievement);
}

#pragma endregion