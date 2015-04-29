/*
This project is released under the GPL 2.0 license.
Please do no evil.

Initial author: (https://github.com/)Convery
Started: 2015-04-08
Notes:
Information about the game.
*/

#include "..\..\StdInc.h"

#pragma region SteamMatchmaking001
int SteamMatchmaking001::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking001::GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking001::AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking001::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

bool SteamMatchmaking001::GetFavoriteGame2(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking001::AddFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking001::RemoveFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

void SteamMatchmaking001::RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters)
{
	ProxiedMatchmaking::RequestLobbyList(ulGameID, pFilters, nFilters);
}

CSteamID SteamMatchmaking001::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}

void SteamMatchmaking001::CreateLobby(uint64 ulGameID, bool bPrivate)
{
	ProxiedMatchmaking::CreateLobby(bPrivate ? ELobbyType::k_ELobbyTypePrivate : ELobbyType::k_ELobbyTypePublic, 4/* is hardcoding this a good idea?*/);
}

void SteamMatchmaking001::JoinLobby(CSteamID steamIDLobby)
{
	ProxiedMatchmaking::JoinLobby(steamIDLobby);
}

void SteamMatchmaking001::LeaveLobby(CSteamID steamIDLobby)
{
	ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}

bool SteamMatchmaking001::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking001::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}

CSteamID SteamMatchmaking001::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}

const char* SteamMatchmaking001::GetLobbyData(CSteamID SteamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(SteamIDLobby, pchKey);
}

void SteamMatchmaking001::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

const char* SteamMatchmaking001::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

void SteamMatchmaking001::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

void SteamMatchmaking001::ChangeLobbyAdmin(CSteamID steamIDLobby, CSteamID steamIDNewAdmin)
{
	ProxiedMatchmaking::SetLobbyOwner(steamIDLobby, steamIDNewAdmin);
}

bool SteamMatchmaking001::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

int SteamMatchmaking001::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

bool SteamMatchmaking001::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}
#pragma endregion

#pragma region SteamMatchmaking002

int SteamMatchmaking002::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking002::GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking002::AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking002::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

void SteamMatchmaking002::RequestLobbyList()
{
	ProxiedMatchmaking::RequestLobbyList();
}

CSteamID SteamMatchmaking002::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}

void SteamMatchmaking002::CreateLobby(bool bPrivate)
{
	ProxiedMatchmaking::CreateLobby(bPrivate ? ELobbyType::k_ELobbyTypePrivate : ELobbyType::k_ELobbyTypePublic, 4);//assume something high enough? there is no SetLobbyMemberLimit
}

void SteamMatchmaking002::JoinLobby(CSteamID steamIDLobby)
{
	ProxiedMatchmaking::JoinLobby(steamIDLobby);
}

void SteamMatchmaking002::LeaveLobby(CSteamID steamIDLobby)
{
	ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}

bool SteamMatchmaking002::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking002::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}

CSteamID SteamMatchmaking002::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}

const char* SteamMatchmaking002::GetLobbyData(CSteamID SteamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(SteamIDLobby, pchKey);
}

void SteamMatchmaking002::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

const char* SteamMatchmaking002::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

void SteamMatchmaking002::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

bool SteamMatchmaking002::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

int SteamMatchmaking002::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

bool SteamMatchmaking002::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}

void SteamMatchmaking002::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}
#pragma endregion

#pragma region SteamMatchmaking003

int SteamMatchmaking003::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking003::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking003::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking003::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking003::RequestLobbyList(){
	return ProxiedMatchmaking::RequestLobbyList();
}

void SteamMatchmaking003::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{
	ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}

void SteamMatchmaking003::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
	ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, static_cast<ELobbyComparison>(nComparisonType));
}
OBSOLETE_FUNCTION void SteamMatchmaking003::AddRequestLobbyListSlotsAvailableFilter()
{
	//
}

CSteamID SteamMatchmaking003::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}

void SteamMatchmaking003::CreateLobby(bool bPrivate)
{
	ProxiedMatchmaking::CreateLobby(bPrivate ? ELobbyType::k_ELobbyTypePrivate : ELobbyType::k_ELobbyTypePublic);
}

void SteamMatchmaking003::JoinLobby(CSteamID steamIDLobby)
{
	ProxiedMatchmaking::JoinLobby(steamIDLobby);
}

void SteamMatchmaking003::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}

bool SteamMatchmaking003::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking003::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}

CSteamID SteamMatchmaking003::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}

const char* SteamMatchmaking003::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}

bool SteamMatchmaking003::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

const char* SteamMatchmaking003::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

void SteamMatchmaking003::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

bool SteamMatchmaking003::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

int SteamMatchmaking003::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

bool SteamMatchmaking003::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}

void SteamMatchmaking003::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	return ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool SteamMatchmaking003::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool SteamMatchmaking003::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}
int SteamMatchmaking003::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}

OBSOLETE_FUNCTION void SteamMatchmaking003::SetLobbyVoiceEnabled(CSteamID steamIDLobby, bool bEnabled)
{
	//
}

bool SteamMatchmaking003::RequestFriendsLobbies()
{
	return ProxiedMatchmaking::RequestFriendsLobbies();
}
#pragma endregion

#pragma region SteamMatchmaking004

int SteamMatchmaking004::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking004::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking004::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking004::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking004::RequestLobbyList()
{
	return ProxiedMatchmaking::RequestLobbyList();
}

void SteamMatchmaking004::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{
	return ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}
void SteamMatchmaking004::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, static_cast<ELobbyComparison>(nComparisonType));
}
OBSOLETE_FUNCTION void SteamMatchmaking004::AddRequestLobbyListSlotsAvailableFilter()
{
	//obsolete
}

CSteamID SteamMatchmaking004::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}

void SteamMatchmaking004::CreateLobby(bool bPrivate)
{
	ProxiedMatchmaking::CreateLobby(bPrivate ? ELobbyType::k_ELobbyTypePrivate : ELobbyType::k_ELobbyTypePublic);
}

void SteamMatchmaking004::JoinLobby(CSteamID steamIDLobby)
{
	ProxiedMatchmaking::JoinLobby(steamIDLobby);
}
void SteamMatchmaking004::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}

bool SteamMatchmaking004::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking004::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}

CSteamID SteamMatchmaking004::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}

const char* SteamMatchmaking004::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}

bool SteamMatchmaking004::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

const char* SteamMatchmaking004::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

void SteamMatchmaking004::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

bool SteamMatchmaking004::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

int SteamMatchmaking004::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

bool SteamMatchmaking004::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}

void SteamMatchmaking004::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	return ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool SteamMatchmaking004::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool SteamMatchmaking004::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

int SteamMatchmaking004::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}

bool SteamMatchmaking004::RequestFriendsLobbies()
{
	return ProxiedMatchmaking::RequestFriendsLobbies();
}
#pragma endregion

#pragma region SteamMatchmaking005

int SteamMatchmaking005::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking005::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking005::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking005::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking005::RequestLobbyList()
{
	return ProxiedMatchmaking::RequestLobbyList();
}

void SteamMatchmaking005::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{
	return ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}

void SteamMatchmaking005::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, static_cast<ELobbyComparison>(nComparisonType));
}

OBSOLETE_FUNCTION void SteamMatchmaking005::AddRequestLobbyListSlotsAvailableFilter()
{
	//obsolete
}

void SteamMatchmaking005::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	return ProxiedMatchmaking::AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}

CSteamID SteamMatchmaking005::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}

SteamAPICall_t SteamMatchmaking005::CreateLobby(ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::CreateLobby(eLobbyType);
}

SteamAPICall_t SteamMatchmaking005::JoinLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::JoinLobby(steamIDLobby);
}

void SteamMatchmaking005::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}

bool SteamMatchmaking005::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking005::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}

CSteamID SteamMatchmaking005::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}

const char* SteamMatchmaking005::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}

bool SteamMatchmaking005::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

const char* SteamMatchmaking005::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

void SteamMatchmaking005::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

bool SteamMatchmaking005::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

int SteamMatchmaking005::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

bool SteamMatchmaking005::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}

void SteamMatchmaking005::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	return ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

bool SteamMatchmaking005::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool SteamMatchmaking005::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

int SteamMatchmaking005::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}

bool SteamMatchmaking005::RequestFriendsLobbies()
{
	return ProxiedMatchmaking::RequestFriendsLobbies();
}

bool SteamMatchmaking005::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::SetLobbyType(steamIDLobby, eLobbyType);
}

CSteamID SteamMatchmaking005::GetLobbyOwner(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyOwner(steamIDLobby);
}

OBSOLETE_FUNCTION double SteamMatchmaking005::GetLobbyDistance(CSteamID steamIDLobby)
{
	return 0.0;
}

#pragma endregion

#pragma region SteamMatchmaking006

int SteamMatchmaking006::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking006::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}
int SteamMatchmaking006::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}
bool SteamMatchmaking006::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking006::RequestLobbyList()
{
	return ProxiedMatchmaking::RequestLobbyList();
}
void SteamMatchmaking006::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{
	return ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}
void SteamMatchmaking006::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, static_cast<ELobbyComparison>(nComparisonType));
}
void SteamMatchmaking006::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	return ProxiedMatchmaking::AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}


CSteamID SteamMatchmaking006::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}
SteamAPICall_t SteamMatchmaking006::CreateLobby(ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::CreateLobby(eLobbyType);
}
SteamAPICall_t SteamMatchmaking006::JoinLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::JoinLobby(steamIDLobby);
}
void SteamMatchmaking006::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}
bool SteamMatchmaking006::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking006::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}
CSteamID SteamMatchmaking006::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}

const char* SteamMatchmaking006::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}
bool SteamMatchmaking006::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

const char* SteamMatchmaking006::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}
void SteamMatchmaking006::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

bool SteamMatchmaking006::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}
int SteamMatchmaking006::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}
bool SteamMatchmaking006::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}

void SteamMatchmaking006::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	return ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}
bool SteamMatchmaking006::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool SteamMatchmaking006::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

int SteamMatchmaking006::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}

bool SteamMatchmaking006::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::SetLobbyType(steamIDLobby, eLobbyType);
}

CSteamID SteamMatchmaking006::GetLobbyOwner(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyOwner(steamIDLobby);
}

#pragma endregion

#pragma region SteamMatchmaking007
int SteamMatchmaking007::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking007::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}
int SteamMatchmaking007::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}
bool SteamMatchmaking007::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking007::RequestLobbyList()
{
	return ProxiedMatchmaking::RequestLobbyList();
}

void SteamMatchmaking007::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}
void SteamMatchmaking007::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
}
void SteamMatchmaking007::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	return ProxiedMatchmaking::AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}
void SteamMatchmaking007::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	return ProxiedMatchmaking::AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
}

CSteamID SteamMatchmaking007::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}
SteamAPICall_t SteamMatchmaking007::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	return ProxiedMatchmaking::CreateLobby(eLobbyType, cMaxMembers);
}
SteamAPICall_t SteamMatchmaking007::JoinLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::JoinLobby(steamIDLobby);
}
void SteamMatchmaking007::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}
bool SteamMatchmaking007::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}
int SteamMatchmaking007::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}
CSteamID SteamMatchmaking007::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}
const char* SteamMatchmaking007::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}
bool SteamMatchmaking007::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}
int SteamMatchmaking007::GetLobbyDataCount(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyDataCount(steamIDLobby);
}
bool SteamMatchmaking007::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	return ProxiedMatchmaking::GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

bool SteamMatchmaking007::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::DeleteLobbyData(steamIDLobby, pchKey);
}
const char* SteamMatchmaking007::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}
void SteamMatchmaking007::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}
bool SteamMatchmaking007::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}
int SteamMatchmaking007::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}
bool SteamMatchmaking007::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}
void SteamMatchmaking007::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}
bool SteamMatchmaking007::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}
bool SteamMatchmaking007::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}
int SteamMatchmaking007::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}
bool SteamMatchmaking007::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::SetLobbyType(steamIDLobby, eLobbyType);
}
bool SteamMatchmaking007::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	return ProxiedMatchmaking::SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
}
CSteamID SteamMatchmaking007::GetLobbyOwner(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyOwner(steamIDLobby);
}
bool SteamMatchmaking007::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	return ProxiedMatchmaking::SetLobbyOwner(steamIDLobby, steamIDNewOwner);
}

#pragma endregion


#pragma region SteamMatchmaking008

int SteamMatchmaking008::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking008::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}
int SteamMatchmaking008::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}
bool SteamMatchmaking008::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking008::RequestLobbyList()
{
	return ProxiedMatchmaking::RequestLobbyList();
}
void SteamMatchmaking008::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}
void SteamMatchmaking008::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
}
void SteamMatchmaking008::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	ProxiedMatchmaking::AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}
void SteamMatchmaking008::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	ProxiedMatchmaking::AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
}
void SteamMatchmaking008::AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)
{
	ProxiedMatchmaking::AddRequestLobbyListDistanceFilter(eLobbyDistanceFilter);
}
void SteamMatchmaking008::AddRequestLobbyListResultCountFilter(int cMaxResults)
{
	return ProxiedMatchmaking::AddRequestLobbyListResultCountFilter(cMaxResults);
}

CSteamID SteamMatchmaking008::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}
SteamAPICall_t SteamMatchmaking008::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	return ProxiedMatchmaking::CreateLobby(eLobbyType, cMaxMembers);
}
SteamAPICall_t SteamMatchmaking008::JoinLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::JoinLobby(steamIDLobby);
}
void SteamMatchmaking008::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}
bool SteamMatchmaking008::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}
int SteamMatchmaking008::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}
CSteamID SteamMatchmaking008::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}
const char* SteamMatchmaking008::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}
bool SteamMatchmaking008::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}
int SteamMatchmaking008::GetLobbyDataCount(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyDataCount(steamIDLobby);
}
bool SteamMatchmaking008::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	return ProxiedMatchmaking::GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}
bool SteamMatchmaking008::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::DeleteLobbyData(steamIDLobby, pchKey);
}
const char* SteamMatchmaking008::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}
void SteamMatchmaking008::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}
bool SteamMatchmaking008::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}
int SteamMatchmaking008::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}
bool SteamMatchmaking008::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}
void SteamMatchmaking008::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	return ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}
bool SteamMatchmaking008::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}
bool SteamMatchmaking008::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}
int SteamMatchmaking008::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}
bool SteamMatchmaking008::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::SetLobbyType(steamIDLobby, eLobbyType);
}
bool SteamMatchmaking008::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	return ProxiedMatchmaking::SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
}
CSteamID SteamMatchmaking008::GetLobbyOwner(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyOwner(steamIDLobby);
}
bool SteamMatchmaking008::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	return ProxiedMatchmaking::SetLobbyOwner(steamIDLobby, steamIDNewOwner);
}

#pragma endregion

#pragma region SteamMatchmaking009

int SteamMatchmaking009::GetFavoriteGameCount()
{
	return ProxiedMatchmaking::GetFavoriteGameCount();
}

bool SteamMatchmaking009::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, 0, punFlags, pRTime32LastPlayedOnServer);
}

int SteamMatchmaking009::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	return ProxiedMatchmaking::AddFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags, rTime32LastPlayedOnServer);
}

bool SteamMatchmaking009::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	return ProxiedMatchmaking::RemoveFavoriteGame(nAppID, nIP, nConnPort, 0, unFlags);
}

SteamAPICall_t SteamMatchmaking009::RequestLobbyList()
{
	return ProxiedMatchmaking::RequestLobbyList();
}
void SteamMatchmaking009::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, ELobbyComparison::k_ELobbyComparisonEqual);
}
void SteamMatchmaking009::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	return ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
}
void SteamMatchmaking009::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	return ProxiedMatchmaking::AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}
void SteamMatchmaking009::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	return ProxiedMatchmaking::AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
}
void SteamMatchmaking009::AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)
{
	return ProxiedMatchmaking::AddRequestLobbyListDistanceFilter(eLobbyDistanceFilter);
}
void SteamMatchmaking009::AddRequestLobbyListResultCountFilter(int cMaxResults)
{
	return ProxiedMatchmaking::AddRequestLobbyListResultCountFilter(cMaxResults);
}

void SteamMatchmaking009::AddRequestLobbyListCompatibleMembersFilter(CSteamID steamID)
{
	return ProxiedMatchmaking::AddRequestLobbyListCompatibleMembersFilter(steamID);
}

CSteamID SteamMatchmaking009::GetLobbyByIndex(int iLobby)
{
	return ProxiedMatchmaking::GetLobbyByIndex(iLobby);
}
SteamAPICall_t SteamMatchmaking009::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	return ProxiedMatchmaking::CreateLobby(eLobbyType, cMaxMembers);
}

SteamAPICall_t SteamMatchmaking009::JoinLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::JoinLobby(steamIDLobby);
}

void SteamMatchmaking009::LeaveLobby(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::LeaveLobby(steamIDLobby);
}

bool SteamMatchmaking009::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	return ProxiedMatchmaking::InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

int SteamMatchmaking009::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetNumLobbyMembers(steamIDLobby);
}
CSteamID SteamMatchmaking009::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	return ProxiedMatchmaking::GetLobbyMemberByIndex(steamIDLobby, iMember);
}
const char* SteamMatchmaking009::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyData(steamIDLobby, pchKey);
}
bool SteamMatchmaking009::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyData(steamIDLobby, pchKey, pchValue);
}

int SteamMatchmaking009::GetLobbyDataCount(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyDataCount(steamIDLobby);
}

bool SteamMatchmaking009::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	return ProxiedMatchmaking::GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

bool SteamMatchmaking009::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	return ProxiedMatchmaking::DeleteLobbyData(steamIDLobby, pchKey);
}

const char* SteamMatchmaking009::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	return ProxiedMatchmaking::GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}
void SteamMatchmaking009::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	return ProxiedMatchmaking::SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

bool SteamMatchmaking009::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	return ProxiedMatchmaking::SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}
int SteamMatchmaking009::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedMatchmaking::GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

bool SteamMatchmaking009::RequestLobbyData(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::RequestLobbyData(steamIDLobby);
}

void SteamMatchmaking009::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	ProxiedMatchmaking::SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}
bool SteamMatchmaking009::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	return ProxiedMatchmaking::GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

bool SteamMatchmaking009::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	return ProxiedMatchmaking::SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}
int SteamMatchmaking009::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyMemberLimit(steamIDLobby);
}

bool SteamMatchmaking009::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::SetLobbyType(steamIDLobby, eLobbyType);
}

bool SteamMatchmaking009::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	return ProxiedMatchmaking::SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
}

CSteamID SteamMatchmaking009::GetLobbyOwner(CSteamID steamIDLobby)
{
	return ProxiedMatchmaking::GetLobbyOwner(steamIDLobby);
}
bool SteamMatchmaking009::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	return ProxiedMatchmaking::SetLobbyOwner(steamIDLobby, steamIDNewOwner);
}

bool SteamMatchmaking009::SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2)
{
	return ProxiedMatchmaking::SetLinkedLobby(steamIDLobby, steamIDLobby2);
}

#pragma endregion