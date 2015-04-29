/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedMatchmaking
{
public:
	static int GetFavoriteGameCount();

	static bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer);

	static int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer);

	static bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags);

	//Old way to request lobbyList
	static void RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters);

	//New way to request LobbyList, with filters on separate calls
	static SteamAPICall_t RequestLobbyList();
	static void AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType);
	static void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType);
	static void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo);
	static void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable);
	static void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter);
	static void AddRequestLobbyListResultCountFilter(int cMaxResults);
	static bool RequestFriendsLobbies();

	static void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamID);

	static CSteamID GetLobbyByIndex(int iLobby);

	//no member limit, it will get set by SetLobbyMemberLimit
	static SteamAPICall_t CreateLobby(ELobbyType eLobbyType);
	static SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers);

	static SteamAPICall_t JoinLobby(CSteamID steamIDLobby);

	static void LeaveLobby(CSteamID steamIDLobby);

	static bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee);

	static int GetNumLobbyMembers(CSteamID steamIDLobby);
	static CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember);
	static const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey);
	static bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue);

	static int GetLobbyDataCount(CSteamID steamIDLobby);

	static bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize);

	static bool DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey);

	static const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey);
	static void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue);

	static bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody);
	static int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType);

	static bool RequestLobbyData(CSteamID steamIDLobby);

	static void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer);
	static bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer);

	static bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers);
	static int GetLobbyMemberLimit(CSteamID steamIDLobby);

	static bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType);

	static bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable);

	static CSteamID GetLobbyOwner(CSteamID steamIDLobby);
	static bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner);

	static bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2);
};
