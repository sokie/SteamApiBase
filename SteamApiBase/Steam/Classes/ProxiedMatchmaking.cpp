/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "..\..\StdInc.h"

int ProxiedMatchmaking::GetFavoriteGameCount()
{
	HHSDBG();
	return 0;
}

bool ProxiedMatchmaking::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return false;
}

int ProxiedMatchmaking::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return 0;
}

bool ProxiedMatchmaking::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

void ProxiedMatchmaking::RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters)
{
	HHSDBG();
}

SteamAPICall_t ProxiedMatchmaking::RequestLobbyList()
{
	HHSDBG();
	return NULL;
}

void ProxiedMatchmaking::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void ProxiedMatchmaking::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void ProxiedMatchmaking::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	HHSDBG();
}
void ProxiedMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	HHSDBG();
}
void ProxiedMatchmaking::AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)
{
	HHSDBG();
}
void ProxiedMatchmaking::AddRequestLobbyListResultCountFilter(int cMaxResults)
{
	HHSDBG();
}

void ProxiedMatchmaking::AddRequestLobbyListCompatibleMembersFilter(CSteamID steamID)
{
	HHSDBG();
}

bool ProxiedMatchmaking::RequestFriendsLobbies()
{
	HHSDBG();
	return false;
}

CSteamID ProxiedMatchmaking::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	CSteamID id = CSteamID(1111111, 0x40000, k_EUniversePublic, k_EAccountTypeChat);
	return id;
}

SteamAPICall_t ProxiedMatchmaking::CreateLobby(ELobbyType eLobbyType)
{
	return ProxiedMatchmaking::CreateLobby(eLobbyType, 18);
}

SteamAPICall_t ProxiedMatchmaking::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	HHSDBG();

	
	SteamAPICall_t result = SteamCallback::RegisterCall();

	/* example callback use case
	LobbyCreated_t* retvals = (LobbyCreated_t*)malloc(sizeof(LobbyCreated_t));
	
	//generate lobby and persist
	CSteamID id = CSteamID(1111111, 0x40000, k_EUniversePublic, k_EAccountTypeChat);

	retvals->m_eResult = k_EResultOK;
	retvals->m_ulSteamIDLobby = id.ConvertToUint64();

	SteamCallback::ReturnCall(retvals, sizeof(LobbyCreated_t), LobbyCreated_t::k_iCallback, result);
	//create a callback for the join for the lobby owner
	JoinLobby(id);
	
	*/
	
	return result;
}

SteamAPICall_t ProxiedMatchmaking::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
	SteamAPICall_t result = SteamCallback::RegisterCall();
	/* example callback use case
	LobbyEnter_t* retvals = (LobbyEnter_t*)malloc(sizeof(LobbyEnter_t));
	retvals->m_bLocked = false;
	retvals->m_EChatRoomEnterResponse = k_EChatRoomEnterResponseSuccess;
	retvals->m_rgfChatPermissions = k_EChatPermissionEveryoneDefault;
	retvals->m_ulSteamIDLobby = steamIDLobby.ConvertToUint64();

	SteamCallback::ReturnCall(retvals, sizeof(LobbyEnter_t), LobbyEnter_t::k_iCallback, result);*/
	return result;
}

void ProxiedMatchmaking::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();

	/* example callback use case
	SteamAPICall_t result = SteamCallback::RegisterCall();
	LobbyChatUpdate_t* retvals = (LobbyChatUpdate_t*)malloc(sizeof(LobbyChatUpdate_t));
	retvals->m_rgfChatMemberStateChange = EChatMemberStateChange::k_EChatMemberStateChangeLeft;
	retvals->m_ulSteamIDLobby = steamIDLobby;
	retvals->m_ulSteamIDMakingChange = SteamProxy::GetUserID();
	retvals->m_ulSteamIDUserChanged = SteamProxy::GetUserID();

	SteamCallback::ReturnCall(retvals, sizeof(LobbyChatUpdate_t), LobbyChatUpdate_t::k_iCallback, result);*/
}

bool ProxiedMatchmaking::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}

int ProxiedMatchmaking::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
CSteamID ProxiedMatchmaking::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *ProxiedMatchmaking::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "data";
}
bool ProxiedMatchmaking::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return true;
}

int ProxiedMatchmaking::GetLobbyDataCount(CSteamID steamIDLobby)
{
	HHSDBG();
	return 0;
}

bool ProxiedMatchmaking::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	HHSDBG();
	return true;
}

bool ProxiedMatchmaking::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return true;
}

const char *ProxiedMatchmaking::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "data";
}
void ProxiedMatchmaking::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}

bool ProxiedMatchmaking::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();

	/* example callback use case
	SteamAPICall_t result = SteamCallback::RegisterCall();
	LobbyChatMsg_t* retvals = (LobbyChatMsg_t*)malloc(sizeof(LobbyChatMsg_t));
	retvals->m_eChatEntryType = 0;
	retvals->m_iChatID = 0;
	retvals->m_ulSteamIDLobby = CSteamID(1111111, 0x40000, k_EUniversePublic, k_EAccountTypeChat).ConvertToUint64;
	retvals->m_ulSteamIDUser = SteamProxy::GetUserID().ConvertToUint64;

	SteamCallback::ReturnCall(retvals, sizeof(LobbyChatMsg_t), LobbyChatMsg_t::k_iCallback, result);*/

	return true;
}
int ProxiedMatchmaking::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}

bool ProxiedMatchmaking::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}

void ProxiedMatchmaking::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	HHSDBG();
}
bool ProxiedMatchmaking::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	HHSDBG();
	return true;
}

bool ProxiedMatchmaking::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	HHSDBG();
	return true;
}
int ProxiedMatchmaking::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}

bool ProxiedMatchmaking::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	HHSDBG();
	return true;
}

bool ProxiedMatchmaking::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	HHSDBG();
	return true;
}

CSteamID ProxiedMatchmaking::GetLobbyOwner(CSteamID steamIDLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
bool ProxiedMatchmaking::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	HHSDBG();
	return true;
}

bool ProxiedMatchmaking::SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2)
{
	HHSDBG();
	return true;
}