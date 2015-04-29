/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
	Information about the game.
	*/

#include "..\..\StdInc.h"

#pragma region SteamApps001
int SteamApps001::GetAppData(AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax)
{
	return FALSE;
}
#pragma endregion

#pragma region SteamApps002
bool SteamApps002::BIsSubscribed()
{
	return ProxiedApps::IsSubscribedToCurrentApp();
}
bool SteamApps002::BIsLowViolence()
{
	return ProxiedApps::IsMatureContentDisabled();
}
bool SteamApps002::BIsCybercafe()
{
	return ProxiedApps::IsACybercafeAccount();
}
bool SteamApps002::BIsVACBanned()
{
	return ProxiedApps::IsUserVACBanned();
}
const char *SteamApps002::GetCurrentGameLanguage()
{
	return ProxiedApps::GetCurrentGameLanguage();
}
const char *SteamApps002::GetAvailableGameLanguages()
{
	return ProxiedApps::GetAvailableGameLanguages();
}

// only use this member if you need to check ownership of another game related to yours, a demo for example
bool SteamApps002::BIsSubscribedApp(AppId_t nAppID)
{
	return ProxiedApps::IsSubscribedToApp(nAppID);
}
#pragma endregion

#pragma region SteamApps003
bool SteamApps003::BIsSubscribed()
{
	return ProxiedApps::IsSubscribedToCurrentApp();
}
bool SteamApps003::BIsLowViolence()
{
	return ProxiedApps::IsMatureContentDisabled();
}
bool SteamApps003::BIsCybercafe()
{
	return ProxiedApps::IsACybercafeAccount();
}
bool SteamApps003::BIsVACBanned()
{
	return ProxiedApps::IsUserVACBanned();
}
const char *SteamApps003::GetCurrentGameLanguage()
{
	return ProxiedApps::GetCurrentGameLanguage();
}
const char *SteamApps003::GetAvailableGameLanguages()
{
	return ProxiedApps::GetAvailableGameLanguages();
}

// only use this member if you need to check ownership of another game related to yours, a demo for example
bool SteamApps003::BIsSubscribedApp(AppId_t nAppID)
{
	return ProxiedApps::IsSubscribedToApp(nAppID);
}

// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
bool SteamApps003::BIsDlcInstalled(AppId_t nAppID)
{
	return ProxiedApps::IsDlcInstalled(nAppID);
}
#pragma endregion

#pragma region SteamApps004
bool SteamApps004::BIsSubscribed()
{
	return ProxiedApps::IsSubscribedToCurrentApp();
}
bool SteamApps004::BIsLowViolence()
{
	return ProxiedApps::IsMatureContentDisabled();
}
bool SteamApps004::BIsCybercafe()
{
	return ProxiedApps::IsACybercafeAccount();
}
bool SteamApps004::BIsVACBanned()
{
	return ProxiedApps::IsUserVACBanned();
}
const char *SteamApps004::GetCurrentGameLanguage()
{
	return ProxiedApps::GetCurrentGameLanguage();
}
const char *SteamApps004::GetAvailableGameLanguages()
{
	return ProxiedApps::GetAvailableGameLanguages();
}

// only use this member if you need to check ownership of another game related to yours, a demo for example
bool SteamApps004::BIsSubscribedApp(AppId_t nAppID)
{
	return ProxiedApps::IsSubscribedToApp(nAppID);
}

// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
bool SteamApps004::BIsDlcInstalled(AppId_t nAppID)
{
	return ProxiedApps::IsDlcInstalled(nAppID);
}

// returns the Unix time of the purchase of the app
uint32 SteamApps004::GetEarliestPurchaseUnixTime(AppId_t nAppID)
{
	return ProxiedApps::GetEarliestPurchaseUnixTime(nAppID);
}

// Checks if the user is subscribed to the current app through a free weekend
// This function will return false for users who have a retail or other type of license
// Before using, please ask your Valve technical contact how to package and secure your free weekened
bool SteamApps004::BIsSubscribedFromFreeWeekend()
{
	return ProxiedApps::IsSubscribedFromFreeWeekend();
}
// Returns the number of DLC pieces for the running app
int SteamApps004::GetDLCCount()
{
	return ProxiedApps::GetDLCCount();
}

// Returns metadata for DLC by index, of range [0, GetDLCCount()]
bool SteamApps004::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
	return ProxiedApps::GetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

// Install/Uninstall control for optional DLC
void SteamApps004::InstallDLC(AppId_t nAppID)
{
	return ProxiedApps::InstallDLC(nAppID);
}
void SteamApps004::UninstallDLC(AppId_t nAppID)
{
	return ProxiedApps::UninstallDLC(nAppID);
}
#pragma endregion

#pragma region SteamApps005
bool SteamApps005::BIsSubscribed()
{
	return ProxiedApps::IsSubscribedToCurrentApp();
}
bool SteamApps005::BIsLowViolence()
{
	return ProxiedApps::IsMatureContentDisabled();
}
bool SteamApps005::BIsCybercafe()
{
	return ProxiedApps::IsACybercafeAccount();
}
bool SteamApps005::BIsVACBanned()
{
	return ProxiedApps::IsUserVACBanned();
}
const char *SteamApps005::GetCurrentGameLanguage()
{
	return ProxiedApps::GetCurrentGameLanguage();
}
const char *SteamApps005::GetAvailableGameLanguages()
{
	return ProxiedApps::GetAvailableGameLanguages();
}

// only use this member if you need to check ownership of another game related to yours, a demo for example
bool SteamApps005::BIsSubscribedApp(AppId_t nAppID)
{
	return ProxiedApps::IsSubscribedToApp(nAppID);
}

// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
bool SteamApps005::BIsDlcInstalled(AppId_t nAppID)
{
	return ProxiedApps::IsDlcInstalled(nAppID);
}

// returns the Unix time of the purchase of the app
uint32 SteamApps005::GetEarliestPurchaseUnixTime(AppId_t nAppID)
{
	return ProxiedApps::GetEarliestPurchaseUnixTime(nAppID);
}

// Checks if the user is subscribed to the current app through a free weekend
// This function will return false for users who have a retail or other type of license
// Before using, please ask your Valve technical contact how to package and secure your free weekened
bool SteamApps005::BIsSubscribedFromFreeWeekend()
{
	return ProxiedApps::IsSubscribedFromFreeWeekend();
}
// Returns the number of DLC pieces for the running app
int SteamApps005::GetDLCCount()
{
	return ProxiedApps::GetDLCCount();
}

// Returns metadata for DLC by index, of range [0, GetDLCCount()]
bool SteamApps005::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
	return ProxiedApps::GetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

// Install/Uninstall control for optional DLC
void SteamApps005::InstallDLC(AppId_t nAppID)
{
	return ProxiedApps::InstallDLC(nAppID);
}
void SteamApps005::UninstallDLC(AppId_t nAppID)
{

	return ProxiedApps::UninstallDLC(nAppID);
}

// Request cd-key for yourself or owned DLC. If you are interested in this
// data then make sure you provide us with a list of valid keys to be distributed
// to users when they purchase the game, before the game ships.
// You'll receive an AppProofOfPurchaseKeyResponse_t callback when
// the key is available (which may be immediately).
void SteamApps005::RequestAppProofOfPurchaseKey(AppId_t nAppID)
{
	return ProxiedApps::RequestAppProofOfPurchaseKey(nAppID);
}

bool SteamApps005::GetCurrentBetaName(char *pchName, int cchNameBufferSize)
{
	return ProxiedApps::GetCurrentBetaName(pchName, cchNameBufferSize);
}
bool SteamApps005::MarkContentCorrupt(bool bMissingFilesOnly)
{
	return ProxiedApps::MarkContentCorrupt(bMissingFilesOnly);
}
uint32 SteamApps005::GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots)
{
	return ProxiedApps::GetInstalledDepots(pvecDepots, cMaxDepots);
}

// returns current app install folder for AppID, returns folder name length
uint32 SteamApps005::GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
	return ProxiedApps::GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
}
bool SteamApps005::BIsAppInstalled(AppId_t appID)
{
	return ProxiedApps::BIsAppInstalled(appID);
}
#pragma endregion

#pragma region SteamApps006
bool SteamApps006::BIsSubscribed()
{
	return ProxiedApps::IsSubscribedToCurrentApp();
}
bool SteamApps006::BIsLowViolence()
{
	return ProxiedApps::IsMatureContentDisabled();
}
bool SteamApps006::BIsCybercafe()
{
	return ProxiedApps::IsACybercafeAccount();
}
bool SteamApps006::BIsVACBanned()
{
	return ProxiedApps::IsUserVACBanned();
}
const char *SteamApps006::GetCurrentGameLanguage()
{
	return ProxiedApps::GetCurrentGameLanguage();
}
const char *SteamApps006::GetAvailableGameLanguages()
{
	return ProxiedApps::GetAvailableGameLanguages();
}

// only use this member if you need to check ownership of another game related to yours, a demo for example
bool SteamApps006::BIsSubscribedApp(AppId_t nAppID)
{
	return ProxiedApps::IsSubscribedToApp(nAppID);
}

// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
bool SteamApps006::BIsDlcInstalled(AppId_t nAppID)
{
	return ProxiedApps::IsDlcInstalled(nAppID);
}

// returns the Unix time of the purchase of the app
uint32 SteamApps006::GetEarliestPurchaseUnixTime(AppId_t nAppID)
{
	return ProxiedApps::GetEarliestPurchaseUnixTime(nAppID);
}

// Checks if the user is subscribed to the current app through a free weekend
// This function will return false for users who have a retail or other type of license
// Before using, please ask your Valve technical contact how to package and secure your free weekened
bool SteamApps006::BIsSubscribedFromFreeWeekend()
{
	return ProxiedApps::IsSubscribedFromFreeWeekend();
}
// Returns the number of DLC pieces for the running app
int SteamApps006::GetDLCCount()
{
	return ProxiedApps::GetDLCCount();
}

// Returns metadata for DLC by index, of range [0, GetDLCCount()]
bool SteamApps006::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
	return ProxiedApps::GetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

// Install/Uninstall control for optional DLC
void SteamApps006::InstallDLC(AppId_t nAppID)
{
	return ProxiedApps::InstallDLC(nAppID);
}
void SteamApps006::UninstallDLC(AppId_t nAppID)
{
	return ProxiedApps::UninstallDLC(nAppID);
}

// Request cd-key for yourself or owned DLC. If you are interested in this
// data then make sure you provide us with a list of valid keys to be distributed
// to users when they purchase the game, before the game ships.
// You'll receive an AppProofOfPurchaseKeyResponse_t callback when
// the key is available (which may be immediately).
void SteamApps006::RequestAppProofOfPurchaseKey(AppId_t nAppID)
{
	return ProxiedApps::RequestAppProofOfPurchaseKey(nAppID);
}

bool SteamApps006::GetCurrentBetaName(char *pchName, int cchNameBufferSize)
{
	return ProxiedApps::GetCurrentBetaName(pchName, cchNameBufferSize);
}
bool SteamApps006::MarkContentCorrupt(bool bMissingFilesOnly)
{
	return ProxiedApps::MarkContentCorrupt(bMissingFilesOnly);
}
uint32 SteamApps006::GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)
{
	return ProxiedApps::GetInstalledDepots(pvecDepots, cMaxDepots);
}

// returns current app install folder for AppID, returns folder name length
uint32 SteamApps006::GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
	return ProxiedApps::GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
}
bool SteamApps006::BIsAppInstalled(AppId_t appID)
{
	return ProxiedApps::BIsAppInstalled(appID);
}

CSteamID SteamApps006::GetAppOwner()
{
	return ProxiedApps::GetAppOwner();
}
const char *SteamApps006::GetLaunchQueryParam(const char *pchKey)
{
	return ProxiedApps::GetLaunchQueryParam(pchKey);
}
#pragma endregion