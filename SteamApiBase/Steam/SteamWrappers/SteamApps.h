/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the game.
*/

#pragma once

#pragma region SteamApps001
class SteamApps001 : public ISteamApps001
{
public:
	// returns 0 if the key does not exist
	// this may be true on first call, since the app data may not be cached locally yet
	// If you expect it to exist wait for the AppDataChanged_t after the first failure and ask again
	int GetAppData(AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax);
};
#pragma endregion

#pragma region SteamApps002
class SteamApps002 : public ISteamApps002
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();

	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	bool BIsSubscribedApp(AppId_t nAppID);
};
#pragma endregion

#pragma region SteamApps003
class SteamApps003 : public ISteamApps003
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	bool BIsSubscribedApp(AppId_t nAppID);

	// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
	bool BIsDlcInstalled(AppId_t nAppID);
};
#pragma endregion

#pragma region SteamApps004

class SteamApps004 : public ISteamApps004
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	bool BIsSubscribedApp(AppId_t nAppID);

	// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
	bool BIsDlcInstalled(AppId_t nAppID);

	// returns the Unix time of the purchase of the app
	uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID);

	// Checks if the user is subscribed to the current app through a free weekend
	// This function will return false for users who have a retail or other type of license
	// Before using, please ask your Valve technical contact how to package and secure your free weekened
	bool BIsSubscribedFromFreeWeekend();
	// Returns the number of DLC pieces for the running app
	int GetDLCCount();

	// Returns metadata for DLC by index, of range [0, GetDLCCount()]
	bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize);

	// Install/Uninstall control for optional DLC
	void InstallDLC(AppId_t nAppID);
	void UninstallDLC(AppId_t nAppID);
};

#pragma endregion

#pragma region SteamApps005

class SteamApps005 : public ISteamApps005
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	bool BIsSubscribedApp(AppId_t nAppID);

	// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
	bool BIsDlcInstalled(AppId_t nAppID);

	// returns the Unix time of the purchase of the app
	uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID);

	// Checks if the user is subscribed to the current app through a free weekend
	// This function will return false for users who have a retail or other type of license
	// Before using, please ask your Valve technical contact how to package and secure your free weekened
	bool BIsSubscribedFromFreeWeekend();
	// Returns the number of DLC pieces for the running app
	int GetDLCCount();

	// Returns metadata for DLC by index, of range [0, GetDLCCount()]
	bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize);

	// Install/Uninstall control for optional DLC
	void InstallDLC(AppId_t nAppID);
	void UninstallDLC(AppId_t nAppID);

	// Request cd-key for yourself or owned DLC. If you are interested in this
	// data then make sure you provide us with a list of valid keys to be distributed
	// to users when they purchase the game, before the game ships.
	// You'll receive an AppProofOfPurchaseKeyResponse_t callback when
	// the key is available (which may be immediately).
	void RequestAppProofOfPurchaseKey(AppId_t nAppID);

	bool GetCurrentBetaName(char *pchName, int cchNameBufferSize); // returns current beta branch name, 'public' is the default branch
	bool MarkContentCorrupt(bool bMissingFilesOnly); // signal Steam that game files seems corrupt or missing
	uint32 GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots); // return installed depots in mount order

	// returns current app install folder for AppID, returns folder name length
	uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize);
	bool BIsAppInstalled(AppId_t appID);;
};

#pragma endregion

#pragma region SteamApps006
class SteamApps006 : public ISteamApps006
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	bool BIsSubscribedApp(AppId_t nAppID);

	// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
	bool BIsDlcInstalled(AppId_t nAppID);

	// returns the Unix time of the purchase of the app
	uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID);

	// Checks if the user is subscribed to the current app through a free weekend
	// This function will return false for users who have a retail or other type of license
	// Before using, please ask your Valve technical contact how to package and secure your free weekened
	bool BIsSubscribedFromFreeWeekend();
	// Returns the number of DLC pieces for the running app
	int GetDLCCount();

	// Returns metadata for DLC by index, of range [0, GetDLCCount()]
	bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize);

	// Install/Uninstall control for optional DLC
	void InstallDLC(AppId_t nAppID);
	void UninstallDLC(AppId_t nAppID);

	// Request cd-key for yourself or owned DLC. If you are interested in this
	// data then make sure you provide us with a list of valid keys to be distributed
	// to users when they purchase the game, before the game ships.
	// You'll receive an AppProofOfPurchaseKeyResponse_t callback when
	// the key is available (which may be immediately).
	void RequestAppProofOfPurchaseKey(AppId_t nAppID);

	bool GetCurrentBetaName(char *pchName, int cchNameBufferSize); // returns current beta branch name, 'public' is the default branch
	bool MarkContentCorrupt(bool bMissingFilesOnly); // signal Steam that game files seems corrupt or missing
	uint32 GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots); // return installed depots in mount order

	// returns current app install folder for AppID, returns folder name length
	uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize);
	bool BIsAppInstalled(AppId_t appID);

	CSteamID GetAppOwner();

	const char *GetLaunchQueryParam(const char *pchKey);
};
#pragma endregion