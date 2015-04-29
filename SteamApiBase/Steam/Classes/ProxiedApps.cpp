/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "..\..\StdInc.h"

bool ProxiedApps::IsSubscribedToCurrentApp()
{
	HHSDBG();
	return true;
}
bool ProxiedApps::IsMatureContentDisabled()
{
	HHSDBG();
	return false;
}
bool ProxiedApps::IsACybercafeAccount()
{
	HHSDBG();
	return false;
}
bool ProxiedApps::IsUserVACBanned()
{
	HHSDBG();
	return false;
}

const char *ProxiedApps::GetCurrentGameLanguage()
{
	HHSDBG();
	return Global::Steam_Language;
}
const char *ProxiedApps::GetAvailableGameLanguages()
{
	HHSDBG();
	return Global::Steam_Language;
}

bool ProxiedApps::IsSubscribedToApp(uint32_t AppID)
{
	HHSDBG();
	return true;
}
bool ProxiedApps::IsDlcInstalled(uint32_t DLCID)
{
	HHSDBG();
	return true;
}
uint32_t ProxiedApps::GetEarliestPurchaseUnixTime(uint32_t AppID)
{
	HHSDBG();
	return 0;
}

uint32_t ProxiedApps::GetDLCCount()
{
	HHSDBG();
	return 0;
	//return GetPrivateProfileIntA("DLC", "DLCCount", 0, hString::va("%s.ini", Global::Game_BinaryName));
}
bool ProxiedApps::IsSubscribedFromFreeWeekend()
{
	HHSDBG();
	return false;
}
bool ProxiedApps::GetDLCDataByIndex(uint32_t iDLC, uint32_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
	HHSDBG();
	return false;
}

void ProxiedApps::InstallDLC(uint32_t DLCID)
{
	HHSDBG();
}
void ProxiedApps::UninstallDLC(uint32_t DLCID)
{
	HHSDBG();
}

void ProxiedApps::RequestAppProofOfPurchaseKey(AppId_t nAppID)
{
	HHSDBG();
}
bool ProxiedApps::GetCurrentBetaName(char *pchName, uint32_t cchNameBufferSize)
{
	HHSDBG();

	pchName = "public";
	cchNameBufferSize = 7;
	return true;
}

uint32_t ProxiedApps::GetInstalledDepots(uint32_t puDepots[], uint32_t cuDepotsMax)
{
	HHSDBG();
	return FALSE;
}
uint32_t ProxiedApps::GetAppInstallDir(uint32_t nAppID, char *pchPath, uint32_t cchPath)
{
	HHSDBG();
	//if (nAppID == Global::Steam_AppID)
	//{
		//strncpy(pchPath, Global::Game_Argv[0].c_str(), cchPath);
		return TRUE;
	//}
}
bool ProxiedApps::BIsAppInstalled(AppId_t appID)
{
	HHSDBG();
	return true;
}
bool ProxiedApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	HHSDBG();
	return false;
}

CSteamID ProxiedApps::GetAppOwner()
{
	HHSDBG();
	return CSteamID(Global::Steam_UserID);
}
const char *ProxiedApps::GetLaunchQueryParam(const char *pchKey)
{
	HHSDBG();
	return "";
}