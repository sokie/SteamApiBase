/*
	This project is released under the GPL 2.0 license.
	Some parts are based on research by Bas Timmer and the OpenSteamworks project.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-11-04
	Notes:
*/

#pragma once

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

class SteamUserStats011 : public ISteamUserStats011
{
public:
	bool RequestCurrentStats();

	bool GetStat(const char *pchName, int32 *pData);
	bool GetStat(const char *pchName, float *pData);
	bool SetStat(const char *pchName, int32 nData);
	bool SetStat(const char *pchName, float fData);

	bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength);

	bool GetAchievement(const char *pchName, bool *pbAchieved);
	bool SetAchievement(const char *pchName);
	bool ClearAchievement(const char *pchName);
	bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32 *punUnlockTime);
	bool StoreStats();

	int GetAchievementIcon(const char *pchName);
	const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey);
	bool IndicateAchievementProgress(const char *pchName, uint32 nCurProgress, uint32 nMaxProgress);
	uint32 GetNumAchievements(CGameID nGameID);
	const char *GetAchievementName(uint32 iAchievement);
	SteamAPICall_t RequestUserStats(CSteamID steamIDUser);

	bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32 *pData);
	bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData);
	bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved);
	bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime);

	bool ResetAllStats(bool bAchievementsToo);

	SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType);
	SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName);
	const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard);
	int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard);
	ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard);
	ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard);
	SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd);
	SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers);
	bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 pDetails[], int cDetailsMax);
	SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount);
	SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC);
	SteamAPICall_t GetNumberOfCurrentPlayers();

	SteamAPICall_t RequestGlobalAchievementPercentages();
	int GetMostAchievedAchievementInfo(char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved);
	int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved);
	bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent);

	SteamAPICall_t RequestGlobalStats(int nHistoryDays);
	bool GetGlobalStat(const char *pchStatName, int64 *pData);
	bool GetGlobalStat(const char *pchStatName, double *pData);
	int32 GetGlobalStatHistory(const char *pchStatName, int64 *pData, uint32 cubData);
	int32 GetGlobalStatHistory(const char *pchStatName, double *pData, uint32 cubData);
};

#pragma endregion