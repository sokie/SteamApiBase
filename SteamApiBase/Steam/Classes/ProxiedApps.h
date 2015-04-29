/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedApps
{
public:
	static bool IsSubscribedToCurrentApp();
	static bool IsMatureContentDisabled();
	static bool IsACybercafeAccount();
	static bool IsUserVACBanned();

	static const char *GetCurrentGameLanguage();
	static const char *GetAvailableGameLanguages();

	static bool IsSubscribedToApp(uint32_t AppID);
	static bool IsDlcInstalled(uint32_t DLCID);
	static uint32_t GetEarliestPurchaseUnixTime(uint32_t AppID);

	static uint32_t GetDLCCount();
	static bool IsSubscribedFromFreeWeekend();
	static bool GetDLCDataByIndex(uint32_t iDLC, uint32_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize);

	static void InstallDLC(uint32_t DLCID);
	static void UninstallDLC(uint32_t DLCID);

	static void RequestAppProofOfPurchaseKey(uint32_t AppID);
	static bool GetCurrentBetaName(char *pchName, uint32_t cchNameBufferSize);

	static uint32_t GetInstalledDepots(uint32_t puDepots[], uint32_t cuDepotsMax);
	static uint32_t GetAppInstallDir(uint32_t nAppID, char *pchPath, uint32_t cchPath);

	static bool BIsAppInstalled(AppId_t appID);
	static bool MarkContentCorrupt(bool bMissingFilesOnly);

	static CSteamID GetAppOwner();
	static const char *GetLaunchQueryParam(const char *pchKey);
};
