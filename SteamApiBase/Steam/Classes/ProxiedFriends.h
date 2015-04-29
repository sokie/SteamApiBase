/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Friendslists.
*/

#pragma once

class ProxiedFriends
{
public:
	static const char *GetPersonaName();
	static SteamAPICall_t SetPersonaName(const char *pchPersonaName);
	static EPersonaState GetPersonaState();

	static int32_t GetFriendCount(int32_t iFriendFlags);
	static CSteamID GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags);
	static EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend);

	static EPersonaState GetFriendPersonaState(CSteamID steamIDFriend);
	static const char *GetFriendPersonaName(CSteamID steamIDFriend);

	static bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo);
	static const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName);
	static const char *GetPlayerNickname(CSteamID steamIDPlayer);
	static bool HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags);

	static int32_t GetClanCount();
	static CSteamID GetClanByIndex(int32_t iClan);
	static const char *GetClanName(CSteamID steamIDClan);
	static const char *GetClanTag(CSteamID steamIDClan);

	static bool GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting);
	static SteamAPICall_t DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds);

	static int32_t GetFriendCountFromSource(CSteamID steamIDSource);
	static CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend);
	static bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource);

	static void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking);
	static void ActivateGameOverlay(const char *pchDialog);
	static void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID);
	static void ActivateGameOverlayToWebPage(const char *pchURL);
	static void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag);

	static void SetPlayedWith(CSteamID steamIDUserPlayedWith);
	static void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby);

	static int32_t GetSmallFriendAvatar(CSteamID steamIDFriend);
	static int32_t GetMediumFriendAvatar(CSteamID steamIDFriend);
	static int32_t GetLargeFriendAvatar(CSteamID steamIDFriend);

	static bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly);
	static SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan);
	static CSteamID GetClanOwner(CSteamID steamIDClan);
	static int32_t GetClanOfficerCount(CSteamID steamIDClan);
	static CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer);
	static EUserRestriction GetUserRestrictions();

	static bool SetRichPresence(const char *pchKey, const char *pchValue);
	static void ClearRichPresence();
	static const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey);
	static int32_t GetFriendRichPresenceKeyCount(CSteamID steamIDFriend);
	static const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey);
	static void RequestFriendRichPresence(CSteamID steamIDFriend);

	static bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString);
	static int32_t GetCoplayFriendCount();
	static CSteamID GetCoplayFriend(int32_t iCoplayFriend);
	static int32_t GetFriendCoplayTime(CSteamID steamIDFriend);
	static AppId_t GetFriendCoplayGame(CSteamID steamIDFriend);

	static SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan);
	static bool LeaveClanChatRoom(CSteamID steamIDClan);
	static int32_t GetClanChatMemberCount(CSteamID steamIDClan);
	static CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int32_t iUser);
	static bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText);
	static int32_t GetClanChatMessage(CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter);
	static bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser);

	static bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat);
	static bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat);
	static bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat);

	static bool SetListenForFriendsMessages(bool bInterceptEnabled);
	static bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend);
	static int32_t GetFriendMessage(CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType);

	static SteamAPICall_t GetFollowerCount(CSteamID steamID);
	static SteamAPICall_t IsFollowing(CSteamID steamID);
	static SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex);

	// Extra methods.
	static EPersonaState SetPersonaState(EPersonaState ePersonaState);
	static bool AddFriend(CSteamID steamIDFriend);
	static bool RemoveFriend(CSteamID steamIDFriend);
	static HSteamCall AddFriendByName(const char *pchEmailOrAccountName);
};
