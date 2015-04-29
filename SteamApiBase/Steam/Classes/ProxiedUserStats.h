/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
		UserStats
*/

#pragma once

class ProxiedUserStats
{
public:
	static bool RequestCurrentStats();

	static bool GetStat(const char *pchName, int32 *pData);
	static bool GetStat(const char *pchName, float *pData);
	static bool SetStat(const char *pchName, int32 nData);
	static bool SetStat(const char *pchName, float fData);

	static bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength);

	static bool GetAchievement(const char *pchName, bool *pbAchieved);
	static bool SetAchievement(const char *pchName);
	static bool ClearAchievement(const char *pchName);
	static bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime);
	static bool StoreStats();

	static int GetAchievementIcon(const char *pchName);
	static const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey);
	static bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress);
	static uint32 GetNumAchievements(CGameID nGameID);
	static const char *GetAchievementName(uint32 iAchievement);
	static SteamAPICall_t RequestUserStats(CSteamID steamIDUser);

	static bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData);
	static bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData);
	static bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved);
	static bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime);

	static bool ResetAllStats(bool bAchievementsToo);

	static SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType);
	static SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName);
	static const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard);
	static int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard);
	static ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard);
	static ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard);
	static SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd);
	static SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers);
	static bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 pDetails[], int cDetailsMax);
	static SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount);
	static SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC);
	static SteamAPICall_t GetNumberOfCurrentPlayers();

	static SteamAPICall_t RequestGlobalAchievementPercentages();
	static int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved);
	static int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved);
	static bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent);

	static SteamAPICall_t RequestGlobalStats(int nHistoryDays);
	static bool GetGlobalStat(const char *pchStatName, int64 *pData);
	static bool GetGlobalStat(const char *pchStatName, double *pData);
	static int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData);
	static int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData);
};
