/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Friendslists.
*/

#include "..\..\StdInc.h"

const char *ProxiedFriends::GetPersonaName()
{
	//HHSDBG(); // Spams the console
	return Global::Steam_Username;
}
SteamAPICall_t ProxiedFriends::SetPersonaName(const char *pchPersonaName)
{
	HHSDBG();
	return 0;
}
EPersonaState ProxiedFriends::GetPersonaState()
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOnline;
}

int32_t ProxiedFriends::GetFriendCount(int32_t iFriendFlags)
{
	HHSDBG();
	return 0;
}
CSteamID ProxiedFriends::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	//HHSDBG(); // Spams the console
	return CSteamID();
}
EFriendRelationship ProxiedFriends::GetFriendRelationship(CSteamID steamIDFriend)
{
	HHSDBG();
	//TODO: save it on server?
	return EFriendRelationship::k_EFriendRelationshipFriend;
}

EPersonaState ProxiedFriends::GetFriendPersonaState(CSteamID steamIDFriend)
{
	//HHSDBG(); // Spams the console
	//TODO: get it from server?
	return EPersonaState::k_EPersonaStateOnline;
}
const char *ProxiedFriends::GetFriendPersonaName(CSteamID steamIDFriend)
{
	//HHSDBG(); // Spams the console
	return "friend";
}

bool ProxiedFriends::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
	//HHSDBG(); // Spams the console
	return false;
}
const char *ProxiedFriends::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName)
{
	HHSDBG();
	return "";
}
const char *ProxiedFriends::GetPlayerNickname(CSteamID steamIDPlayer)
{
	HHSDBG();
	return "";
}
bool ProxiedFriends::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags)
{
	HHSDBG();
	return true;
}

int32_t ProxiedFriends::GetClanCount()
{
	HHSDBG();
	return 0;
}
CSteamID ProxiedFriends::GetClanByIndex(int32_t iClan)
{
	HHSDBG();
	return CSteamID();
}
const char *ProxiedFriends::GetClanName(CSteamID steamIDClan)
{
	HHSDBG();
	return "HHS";
}
const char *ProxiedFriends::GetClanTag(CSteamID steamIDClan)
{
	HHSDBG();
	return "";
}

bool ProxiedFriends::GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting)
{
	HHSDBG();
	return false;
}
SteamAPICall_t ProxiedFriends::DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds)
{
	HHSDBG();
	return 0;
}

int32_t ProxiedFriends::GetFriendCountFromSource(CSteamID steamIDSource)
{
	HHSDBG();
	return 0; // :(
}
CSteamID ProxiedFriends::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend)
{
	HHSDBG();
	return CSteamID();
}
bool ProxiedFriends::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
	HHSDBG();
	return false;
}

void ProxiedFriends::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)
{
	HHSDBG();
}
void ProxiedFriends::ActivateGameOverlay(const char *pchDialog)
{
	HHSDBG();
}
void ProxiedFriends::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)
{
	HHSDBG();
}
void ProxiedFriends::ActivateGameOverlayToWebPage(const char *pchURL)
{
	HHSDBG();
}
void ProxiedFriends::ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
	HHSDBG();
}

void ProxiedFriends::SetPlayedWith(CSteamID steamIDUserPlayedWith)
{
	HHSDBG();
}
void ProxiedFriends::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)
{
	HHSDBG();
}

int32_t ProxiedFriends::GetSmallFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return 0;
}
int32_t ProxiedFriends::GetMediumFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return 0;
}
int32_t ProxiedFriends::GetLargeFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return 0;
}

bool ProxiedFriends::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)
{
	HHSDBG();
	return false;
}
SteamAPICall_t ProxiedFriends::RequestClanOfficerList(CSteamID steamIDClan)
{
	HHSDBG();
	return 0;
}
CSteamID ProxiedFriends::GetClanOwner(CSteamID steamIDClan)
{
	HHSDBG();
	return CSteamID();
}
int32_t ProxiedFriends::GetClanOfficerCount(CSteamID steamIDClan)
{
	HHSDBG();
	return 0;
}
CSteamID ProxiedFriends::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer)
{
	HHSDBG();
	return CSteamID();
}
EUserRestriction ProxiedFriends::GetUserRestrictions()
{
	HHSDBG();
	return EUserRestriction::k_nUserRestrictionNone;
}

bool ProxiedFriends::SetRichPresence(const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return false;
}
void ProxiedFriends::ClearRichPresence()
{
	HHSDBG();
}
const char *ProxiedFriends::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)
{
	HHSDBG();
	return "";
}
int32_t ProxiedFriends::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)
{
	HHSDBG();
	return 0;
}
const char *ProxiedFriends::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey)
{
	HHSDBG();
	return "";
}
void ProxiedFriends::RequestFriendRichPresence(CSteamID steamIDFriend)
{
	HHSDBG();
}

bool ProxiedFriends::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)
{
	HHSDBG();
	return false;
}
int32_t ProxiedFriends::GetCoplayFriendCount()
{
	HHSDBG();
	return 0;
}
CSteamID ProxiedFriends::GetCoplayFriend(int32_t iCoplayFriend)
{
	HHSDBG();
	return CSteamID();
}
int32_t ProxiedFriends::GetFriendCoplayTime(CSteamID steamIDFriend)
{
	HHSDBG();
	return 0;
}
AppId_t ProxiedFriends::GetFriendCoplayGame(CSteamID steamIDFriend)
{
	HHSDBG();
	return 0;
}

SteamAPICall_t ProxiedFriends::JoinClanChatRoom(CSteamID steamIDClan)
{
	HHSDBG();
	return 0;
}
bool ProxiedFriends::LeaveClanChatRoom(CSteamID steamIDClan)
{
	HHSDBG();
	return false;
}
int32_t ProxiedFriends::GetClanChatMemberCount(CSteamID steamIDClan)
{
	HHSDBG();
	return 0;
}
CSteamID ProxiedFriends::GetChatMemberByIndex(CSteamID steamIDClan, int32_t iUser)
{
	HHSDBG();
	return CSteamID();
}
bool ProxiedFriends::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)
{
	HHSDBG();
	return false;
}
int32_t ProxiedFriends::GetClanChatMessage(CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter)
{
	HHSDBG();
	return 0;
}
bool ProxiedFriends::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)
{
	HHSDBG();
	return false;
}

bool ProxiedFriends::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)
{
	HHSDBG();
	return false;
}
bool ProxiedFriends::OpenClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	HHSDBG();
	return false;
}
bool ProxiedFriends::CloseClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	HHSDBG();
	return false;
}

bool ProxiedFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	HHSDBG();
	return false;
}
bool ProxiedFriends::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)
{
	HHSDBG();
	return false;
}
int32_t ProxiedFriends::GetFriendMessage(CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}

SteamAPICall_t ProxiedFriends::GetFollowerCount(CSteamID steamID)
{
	HHSDBG();
	return 0;
}
SteamAPICall_t ProxiedFriends::IsFollowing(CSteamID steamID)
{
	HHSDBG();
	return 0;
}
SteamAPICall_t ProxiedFriends::EnumerateFollowingList(uint32 unStartIndex)
{
	HHSDBG();
	return 0;
}
// Extra methods.
EPersonaState ProxiedFriends::SetPersonaState(EPersonaState ePersonaState)
{
	HHSDBG();
	return ePersonaState;
}
bool ProxiedFriends::AddFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return false;
}
bool ProxiedFriends::RemoveFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return false;
}
HSteamCall ProxiedFriends::AddFriendByName(const char *pchEmailOrAccountName)
{
	HHSDBG();
	return 0;
}
