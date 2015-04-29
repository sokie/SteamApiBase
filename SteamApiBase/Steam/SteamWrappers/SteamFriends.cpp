/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Friendslist.
	*/

#include "..\..\StdInc.h"

#pragma region SteamFriends001
// returns the local players name - guaranteed to not be NULL.
const char *SteamFriends001::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}
// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends001::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the friend status of the current user
EPersonaState SteamFriends001::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}
// sets the status, communicates to server, tells all friends
void SteamFriends001::SetPersonaState(EPersonaState ePersonaState)
{
	ProxiedFriends::SetPersonaState(ePersonaState);
}

// adds a friend to the users list.  Friend will be notified that they have been added, and have the option of accept/decline
bool SteamFriends001::AddFriend(CSteamID steamIDFriend)
{
	return ProxiedFriends::AddFriend(steamIDFriend);
}
// removes the friend from the list, and blocks them from contacting the user again
bool SteamFriends001::RemoveFriend(CSteamID steamIDFriend)
{
	return ProxiedFriends::RemoveFriend(steamIDFriend);
}
// returns true if the specified user is considered a friend (can see our online status)
bool SteamFriends001::HasFriend(CSteamID steamIDFriend)
{
	return ProxiedFriends::HasFriend(steamIDFriend, 0);
}

// gets the relationship to a user
EFriendRelationship SteamFriends001::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}
// returns true if the specified user is considered a friend (can see our online status)
EPersonaState SteamFriends001::GetFriendPersonaState(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// retrieves details about the game the friend is currently playing - returns false if the friend is not playing any games
// this is deprecated, please use the GetFriendGamePlayed# functions below
bool SteamFriends001::Deprecated_GetFriendGamePlayed(CSteamID steamIDFriend, int32 *pnGameID, uint32 *punGameIP, uint16 *pusGamePort)
{
	//return ProxiedFriends::Deprecated_GetFriendGamePlayed(steamIDFriend, pnGameID, punGameIP, pusQueryPort);
	return false;
}

// returns the name of a friend - guaranteed to not be NULL.
const char *SteamFriends001::GetFriendPersonaName(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// adds a friend by email address or account name - value returned in callback
HSteamCall SteamFriends001::AddFriendByName(const char *pchEmailOrAccountName)
{
	return ProxiedFriends::AddFriendByName(pchEmailOrAccountName);
}

// friend iteration
int32_t SteamFriends001::GetFriendCount()
{
	return ProxiedFriends::GetFriendCount(0);
}
CSteamID SteamFriends001::GetFriendByIndex(int32_t iFriend)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, 0);
}

// generic friend->friend message sending
// DEPRECATED, use the sized-buffer version instead (has much higher max buffer size)
void SteamFriends001::SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const char *pchMsgBody)
{
	//ProxiedFriends::SendMsgToFriend(steamIDFriend, eFriendMsgType, pchMsgBody);
}

// steam registry, accessed by friend
void SteamFriends001::SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
	//ProxiedFriends::SetFriendRegValue(steamIDFriend, pchKey, pchValue);
}
const char *SteamFriends001::GetFriendRegValue(CSteamID steamIDFriend, const char *pchKey)
{
	//return ProxiedFriends::GetFriendRegValue(steamIDFriend, pchKey);
	return "";
}

// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends001::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName)
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// chat message iteration
// returns the number of bytes in the message, filling pvData with as many of those bytes as possible
// returns 0 if the steamID or iChatID are invalid
int32_t SteamFriends001::GetChatMessage(CSteamID steamIDFriend, int32_t iChatID, void *pvData, int32_t cubData, EChatEntryType *peFriendMsgType)
{
	//return ProxiedFriends::GetChatMessage(steamIDFriend, iChatID, pvData, cubData, peFriendMsgType);
	return 0;
}

// generic friend->friend message sending, takes a sized buffer
bool SteamFriends001::SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const void *pvMsgBody, int32_t cubMsgBody)
{
	//return ProxiedFriends::SendMsgToFriend(steamIDFriend, eFriendMsgType, pvMsgBody, cubMsgBody);
	return false;
}

// returns the chatID that a chat should be resumed from when switching chat contexts
OBSOLETE_FUNCTION int32_t SteamFriends001::GetChatIDOfChatHistoryStart(CSteamID steamIDFriend)
{
	//return ProxiedFriends::GetChatIDOfChatHistoryStart(steamIDFriend);
	return 0;
}
// sets where a chat with a user should resume
OBSOLETE_FUNCTION void SteamFriends001::SetChatHistoryStart(CSteamID steamIDFriend, int32_t iChatID) 
{
	//return ProxiedFriends::SetChatHistoryStart(steamIDFriend, iChatID);
}
// clears the chat history - should be called when a chat dialog closes
// the chat history can still be recovered by another context using SetChatHistoryStart() to reset the ChatIDOfChatHistoryStart
void SteamFriends001::ClearChatHistory(CSteamID steamIDFriend)
{
	//ProxiedFriends::ClearChatHistory(steamIDFriend);
}

HSteamCall SteamFriends001::InviteFriendByEmail(const char *pchEmailOrAccountName)
{
	//return ProxiedFriends::InviteFriendByEmail(pchEmailOrAccountName);
	return 0;
}

uint32 SteamFriends001::GetBlockedFriendCount()
{
	//return ProxiedFriends::GetBlockedFriendCount();
	return 0;
}

bool SteamFriends001::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort) 
{
	//return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pulGameID, punGameIP, pusGamePort);
	return false;
}
bool SteamFriends001::GetFriendGamePlayed2(CSteamID steamDIFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort) 
{
	//return ProxiedFriends::GetFriendGamePlayed2(steamDIFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
	return false;
}
#pragma endregion

#pragma region SteamFriends002
// returns the local players name - guaranteed to not be NULL.
const char *SteamFriends002::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}
// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends002::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}
// gets the friend status of the current user
EPersonaState SteamFriends002::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}
// sets the status, communicates to server, tells all friends
void SteamFriends002::SetPersonaState(EPersonaState ePersonaState)
{
	ProxiedFriends::SetPersonaState(ePersonaState);
}

// friend iteration
int32_t SteamFriends002::GetFriendCount(EFriendFlags iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

CSteamID SteamFriends002::GetFriendByIndex(int32_t iFriend, EFriendFlags iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// gets the relationship to a user
EFriendRelationship SteamFriends002::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}
// returns true if the specified user is considered a friend (can see our online status)
EPersonaState SteamFriends002::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}
// returns the name of a friend - guaranteed to not be NULL.
const char *SteamFriends002::GetFriendPersonaName(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// steam registry, accessed by friend
void SteamFriends002::SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue) 
{
	//ProxiedFriends::SetFriendRegValue(steamIDFriend, pchKey, pchValue);
}
const char *SteamFriends002::GetFriendRegValue(CSteamID steamIDFriend, const char *pchKey)
{
	//return ProxiedFriends::GetFriendRegValue(steamIDFriend, pchKey);
	return "";
}

// returns true if the friend is actually in a game
bool SteamFriends002::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort) 
{
	//return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
	return true;
}

// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends002::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName)
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// adds a friend to the users list.  Friend will be notified that they have been added, and have the option of accept/decline
bool SteamFriends002::AddFriend(CSteamID steamIDFriend) 
{
	return ProxiedFriends::AddFriend(steamIDFriend);
}
// removes the friend from the list, and blocks them from contacting the user again
bool SteamFriends002::RemoveFriend(CSteamID steamIDFriend)
{
	return ProxiedFriends::RemoveFriend(steamIDFriend);
}

// returns true if the specified user is considered a friend (can see our online status)
bool SteamFriends002::HasFriend(CSteamID steamIDFriend, EFriendFlags iFriendFlags)
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// adds a friend by email address or account name - value returned in callback
HSteamCall SteamFriends002::AddFriendByName(const char *pchEmailOrAccountName)
{
	return ProxiedFriends::AddFriendByName(pchEmailOrAccountName);
}

bool SteamFriends002::InviteFriendByEmail(const char *emailAddr) 
{
	//return ProxiedFriends::InviteFriendByEmail(emailAddr);
	return false;
}

// chat message iteration
// returns the number of bytes in the message, filling pvData with as many of those bytes as possible
// returns 0 if the steamID or iChatID are invalid
int32_t SteamFriends002::GetChatMessage(CSteamID steamIDFriend, int32_t iChatID, void *pvData, int32_t cubData, EChatEntryType *peFriendMsgType)
{
	//return ProxiedFriends::GetChatMessage(steamIDFriend, iChatID, pvData, cubData, peFriendMsgType);
	return 0;
}

// generic friend->friend message sending, takes a sized buffer
bool SteamFriends002::SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const void *pvMsgBody, int32_t cubMsgBody) 
{
	//return ProxiedFriends::SendMsgToFriend(steamIDFriend, eFriendMsgType, pvMsgBody, cubMsgBody);
	return false;
}

// returns the chatID that a chat should be resumed from when switching chat contexts
OBSOLETE_FUNCTION int32_t SteamFriends002::GetChatIDOfChatHistoryStart(CSteamID steamIDFriend)
{
	//return ProxiedFriends::GetChatIDOfChatHistoryStart(steamIDFriend);
	return 0;
}
// sets where a chat with a user should resume
OBSOLETE_FUNCTION void SteamFriends002::SetChatHistoryStart(CSteamID steamIDFriend, int32_t iChatID) 
{
	//ProxiedFriends::SetChatHistoryStart(steamIDFriend, iChatID);
}
// clears the chat history - should be called when a chat dialog closes
// the chat history can still be recovered by another context using SetChatHistoryStart() to reset the ChatIDOfChatHistoryStart
void SteamFriends002::ClearChatHistory(CSteamID steamIDFriend) 
{
	//ProxiedFriends::ClearChatHistory(steamIDFriend);
}

// clan functions
int32_t SteamFriends002::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends002::GetClanByIndex(int32_t iClan)
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends002::GetClanName(CSteamID steamIDClan)
{
	return ProxiedFriends::GetClanName(steamIDClan);
}

bool SteamFriends002::InviteFriendToClan(CSteamID steamIDfriend, CSteamID steamIDclan) 
{
	//return ProxiedFriends::InviteFriendToClan(steamIDfriend, steamIDclan);
	return false;
}
bool SteamFriends002::AcknowledgeInviteToClan(CSteamID steamID, bool)
{
	//return ProxiedFriends::AcknowledgeInviteToClan(steamID);
	return false;
}

int32_t SteamFriends002::GetFriendCountFromSource(CSteamID steamIDSource)
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends002::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}
#pragma endregion

#pragma region SteamFriends003
// returns the local players name - guaranteed to not be NULL.
const char *SteamFriends003::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}
// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends003::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}
// gets the friend status of the current user
EPersonaState SteamFriends003::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
int32_t SteamFriends003::GetFriendCount(EFriendFlags iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}
CSteamID SteamFriends003::GetFriendByIndex(int32_t iFriend, EFriendFlags iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// gets the relationship to a user
EFriendRelationship SteamFriends003::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}
// returns true if the specified user is considered a friend (can see our online status)
EPersonaState SteamFriends003::GetFriendPersonaState(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}
// returns the name of a friend - guaranteed to not be NULL.
const char *SteamFriends003::GetFriendPersonaName(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}
// gets the avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends003::GetFriendAvatar(CSteamID steamIDFriend) 
{
	//return ProxiedFriends::GetFriendAvatar(steamIDFriend);
	return false;
}
// returns true if the friend is actually in a game
bool SteamFriends003::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
	//return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
	return 0;
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends003::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName)
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user is considered a friend
bool SteamFriends003::HasFriend(CSteamID steamIDFriend, EFriendFlags iFriendFlags)
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan functions
int32_t SteamFriends003::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends003::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends003::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}

// iterators for any source
int32_t SteamFriends003::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends003::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}
bool SteamFriends003::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends003::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open ("Friends", "Community", "Players", "Settings")
void SteamFriends003::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}
#pragma endregion

#pragma region SteamFriends004
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends004::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends004::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends004::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends004::GetFriendCount(EFriendFlags eFriendFlags)
{
	return ProxiedFriends::GetFriendCount(eFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends004::GetFriendByIndex(int32_t iFriend, EFriendFlags eFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, eFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends004::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends004::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
const char *SteamFriends004::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// gets the avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends004::GetFriendAvatar(CSteamID steamIDFriend, int32_t eAvatarSize) 
{
	//return ProxiedFriends::GetFriendAvatar(steamIDFriend, eAvatarSize);
	return 0;
}

// returns true if the friend is actually in a game
bool SteamFriends004::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort) 
{
	//return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pulGameID, punGameIP, pusGamePort, pusQueryPort);
	return false;
}

// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends004::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends004::HasFriend(CSteamID steamIDFriend, EFriendFlags eFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, eFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends004::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends004::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends004::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends004::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends004::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends004::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends004::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup"
void SteamFriends004::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}
#pragma endregion

#pragma region SteamFriends005
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends005::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends005::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends005::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends005::GetFriendCount(EFriendFlags eFriendFlags)
{
	return ProxiedFriends::GetFriendCount(eFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends005::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends005::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends005::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
const char *SteamFriends005::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// gets the avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends005::GetFriendAvatar(CSteamID steamIDFriend, int32_t eAvatarSize) 
{
	//return ProxiedFriends::GetFriendAvatar(steamIDFriend, eAvatarSize);
	return 0;
}
// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends005::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends005::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends005::HasFriend(CSteamID steamIDFriend, EFriendFlags eFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, eFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends005::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends005::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends005::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends005::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends005::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends005::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends005::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup"
void SteamFriends005::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
void SteamFriends005::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends005::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends005::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends005::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}
#pragma endregion

#pragma region SteamFriends006
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends006::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends006::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends006::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends006::GetFriendCount(EFriendFlags eFriendFlags)
{
	return ProxiedFriends::GetFriendCount(eFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends006::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends006::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends006::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
const char *SteamFriends006::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// gets the avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends006::GetFriendAvatar(CSteamID steamIDFriend, int32_t eAvatarSize) 
{
	//return ProxiedFriends::GetFriendAvatar(steamIDFriend, eAvatarSize);
	return 0;
}
// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends006::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends006::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends006::HasFriend(CSteamID steamIDFriend, EFriendFlags eFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, eFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends006::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends006::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends006::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends006::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends006::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends006::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends006::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends006::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup"
void SteamFriends006::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
void SteamFriends006::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends006::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends006::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends006::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends006::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}
#pragma endregion

#pragma region SteamFriends007
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends007::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends007::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends007::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends007::GetFriendCount(EFriendFlags eFriendFlags)
{
	return ProxiedFriends::GetFriendCount(eFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends007::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends007::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends007::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
const char *SteamFriends007::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends007::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends007::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends007::HasFriend(CSteamID steamIDFriend, EFriendFlags eFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, eFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends007::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends007::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends007::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends007::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends007::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends007::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends007::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends007::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup"
void SteamFriends007::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
void SteamFriends007::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends007::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends007::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends007::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends007::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends007::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}
int32_t SteamFriends007::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}
int32_t SteamFriends007::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}
#pragma endregion

#pragma region SteamFriends008
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends008::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends008::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends008::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends008::GetFriendCount(EFriendFlags eFriendFlags)
{
	return ProxiedFriends::GetFriendCount(eFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends008::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends008::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends008::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
const char *SteamFriends008::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends008::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends008::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends008::HasFriend(CSteamID steamIDFriend, EFriendFlags eFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, eFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends008::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends008::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends008::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends008::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends008::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends008::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends008::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends008::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup"
void SteamFriends008::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
void SteamFriends008::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends008::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends008::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends008::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends008::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends008::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends008::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends008::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends008::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends008::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends008::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends008::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends008::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends008::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}
#pragma endregion

#pragma region SteamFriends009
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends009::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends009::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends009::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends009::GetFriendCount(int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends009::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends009::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends009::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
// 
const char *SteamFriends009::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends009::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends009::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends009::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends009::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends009::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends009::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends009::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends009::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends009::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends009::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends009::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup", "Stats", "Achievements"
void SteamFriends009::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
//		"stats" - opens the overlay web browser to the specified user's stats
//		"achievements" - opens the overlay web browser to the specified user's achievements
void SteamFriends009::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends009::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends009::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends009::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends009::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends009::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends009::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends009::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends009::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends009::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends009::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends009::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends009::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends009::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}

// Rich Presence data is automatically shared between friends who are in the same game
// Each user has a set of Key/Value pairs
// Up to 20 different keys can be set
// There are two magic keys:
//		"status"  - a UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list
//		"connect" - a UTF-8 string that contains the command-line for how a friend can connect to a game
// GetFriendRichPresence() returns an empty string "" if no value is set
// SetRichPresence() to a NULL or an empty string deletes the key
// You can iterate the current set of keys for a friend with GetFriendRichPresenceKeyCount()
// and GetFriendRichPresenceKeyByIndex() (typically only used for debugging)
bool SteamFriends009::SetRichPresence(const char *pchKey, const char *pchValue) 
{
	return ProxiedFriends::SetRichPresence(pchKey, pchValue);
}
void SteamFriends009::ClearRichPresence() 
{
	ProxiedFriends::ClearRichPresence();
}
const char *SteamFriends009::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) 
{
	return ProxiedFriends::GetFriendRichPresence(steamIDFriend, pchKey);
}
int32_t SteamFriends009::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyCount(steamIDFriend);
}
const char *SteamFriends009::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

// rich invite support
// if the target accepts the invite, the pchConnectString gets added to the command-line for launching the game
// if the game is already running, a GameRichPresenceJoinRequested_t callback is posted containing the connect string
// invites can only be sent to friends
bool SteamFriends009::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) 
{
	return ProxiedFriends::InviteUserToGame(steamIDFriend, pchConnectString);
}

// recently-played-with friends iteration
// this iterates the entire list of users recently played with, across games
// GetFriendCoplayTime() returns as a unix time
int32_t SteamFriends009::GetCoplayFriendCount() 
{
	return ProxiedFriends::GetCoplayFriendCount();
}
CSteamID SteamFriends009::GetCoplayFriend(int32_t iCoplayFriend) 
{
	return ProxiedFriends::GetCoplayFriend(iCoplayFriend);
}
int32_t SteamFriends009::GetFriendCoplayTime(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayTime(steamIDFriend);
}
AppId_t SteamFriends009::GetFriendCoplayGame(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayGame(steamIDFriend);
}
#pragma endregion

#pragma region SteamFriends010
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends010::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends010::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends010::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends010::GetFriendCount(int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends010::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends010::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends010::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
// 
const char *SteamFriends010::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends010::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends010::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends010::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends010::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends010::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends010::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends010::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

bool SteamFriends010::GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting) 
{
	return ProxiedFriends::GetClanActivityCounts(steamID, pnOnline, pnInGame, pnChatting);
}
SteamAPICall_t SteamFriends010::DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds) 
{
	return ProxiedFriends::DownloadClanActivityCounts(groupIDs, nIds);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends010::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends010::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends010::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends010::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup", "Stats", "Achievements"
void SteamFriends010::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
//		"stats" - opens the overlay web browser to the specified user's stats
//		"achievements" - opens the overlay web browser to the specified user's achievements
void SteamFriends010::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends010::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends010::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends010::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends010::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends010::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends010::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends010::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends010::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends010::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends010::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends010::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends010::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends010::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}

// Rich Presence data is automatically shared between friends who are in the same game
// Each user has a set of Key/Value pairs
// Up to 20 different keys can be set
// There are two magic keys:
//		"status"  - a UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list
//		"connect" - a UTF-8 string that contains the command-line for how a friend can connect to a game
// GetFriendRichPresence() returns an empty string "" if no value is set
// SetRichPresence() to a NULL or an empty string deletes the key
// You can iterate the current set of keys for a friend with GetFriendRichPresenceKeyCount()
// and GetFriendRichPresenceKeyByIndex() (typically only used for debugging)
bool SteamFriends010::SetRichPresence(const char *pchKey, const char *pchValue) 
{
	return ProxiedFriends::SetRichPresence(pchKey, pchValue);
}
void SteamFriends010::ClearRichPresence() 
{
	ProxiedFriends::ClearRichPresence();
}
const char *SteamFriends010::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) 
{
	return ProxiedFriends::GetFriendRichPresence(steamIDFriend, pchKey);
}
int32_t SteamFriends010::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyCount(steamIDFriend);
}
const char *SteamFriends010::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

// rich invite support
// if the target accepts the invite, the pchConnectString gets added to the command-line for launching the game
// if the game is already running, a GameRichPresenceJoinRequested_t callback is posted containing the connect string
// invites can only be sent to friends
bool SteamFriends010::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) 
{
	return ProxiedFriends::InviteUserToGame(steamIDFriend, pchConnectString);
}

// recently-played-with friends iteration
// this iterates the entire list of users recently played with, across games
// GetFriendCoplayTime() returns as a unix time
int32_t SteamFriends010::GetCoplayFriendCount() 
{
	return ProxiedFriends::GetCoplayFriendCount();
}
CSteamID SteamFriends010::GetCoplayFriend(int32_t iCoplayFriend) 
{
	return ProxiedFriends::GetCoplayFriend(iCoplayFriend);
}
int32_t SteamFriends010::GetFriendCoplayTime(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayTime(steamIDFriend);
}
AppId_t SteamFriends010::GetFriendCoplayGame(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayGame(steamIDFriend);
}

SteamAPICall_t SteamFriends010::JoinClanChatRoom(CSteamID groupID) 
{
	return ProxiedFriends::JoinClanChatRoom(groupID);
}
bool SteamFriends010::LeaveClanChatRoom(CSteamID groupID) 
{
	return ProxiedFriends::LeaveClanChatRoom(groupID);
}
int32_t SteamFriends010::GetClanChatMemberCount(CSteamID groupID) 
{
	return ProxiedFriends::GetClanChatMemberCount(groupID);
}
CSteamID SteamFriends010::GetChatMemberByIndex(CSteamID groupID, int32_t iIndex) 
{
	return ProxiedFriends::GetChatMemberByIndex(groupID, iIndex);
}
bool SteamFriends010::SendClanChatMessage(CSteamID groupID, const char *cszMessage) 
{
	return ProxiedFriends::SendClanChatMessage(groupID, cszMessage);
}
int32_t SteamFriends010::GetClanChatMessage(CSteamID groupID, int32_t iChatID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) 
{
	return ProxiedFriends::GetClanChatMessage(groupID, iChatID, pvData, cubData, peChatEntryType, pSteamIDChatter);
}
bool SteamFriends010::IsClanChatAdmin(CSteamID groupID, CSteamID userID) 
{
	return ProxiedFriends::IsClanChatAdmin(groupID, userID);
}
bool SteamFriends010::IsClanChatWindowOpenInSteam(CSteamID groupID) 
{
	return ProxiedFriends::IsClanChatWindowOpenInSteam(groupID);
}
bool SteamFriends010::OpenClanChatWindowInSteam(CSteamID groupID) 
{
	return ProxiedFriends::OpenClanChatWindowInSteam(groupID);
}
bool SteamFriends010::CloseClanChatWindowInSteam(CSteamID groupID) 
{
	return ProxiedFriends::CloseClanChatWindowInSteam(groupID);
}
bool SteamFriends010::SetListenForFriendsMessages(bool bListen) 
{
	return ProxiedFriends::SetListenForFriendsMessages(bListen);
}
bool SteamFriends010::ReplyToFriendMessage(CSteamID friendID, const char *cszMessage) 
{
	return ProxiedFriends::ReplyToFriendMessage(friendID, cszMessage);
}
int32_t SteamFriends010::GetFriendMessage(CSteamID friendID, int32_t iChatID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType) 
{
	return ProxiedFriends::GetFriendMessage(friendID, iChatID, pvData, cubData, peChatEntryType);
}
#pragma endregion

#pragma region SteamFriends011
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends011::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
void SteamFriends011::SetPersonaName(const char *pchPersonaName)
{
	ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends011::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends011::GetFriendCount(int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends011::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends011::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends011::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
// 
const char *SteamFriends011::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends011::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends011::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends011::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends011::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends011::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends011::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends011::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

bool SteamFriends011::GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting) 
{
	return ProxiedFriends::GetClanActivityCounts(steamID, pnOnline, pnInGame, pnChatting);
}
SteamAPICall_t SteamFriends011::DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds) 
{
	return ProxiedFriends::DownloadClanActivityCounts(groupIDs, nIds);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends011::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends011::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends011::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends011::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup", "Stats", "Achievements"
void SteamFriends011::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
//		"stats" - opens the overlay web browser to the specified user's stats
//		"achievements" - opens the overlay web browser to the specified user's achievements
void SteamFriends011::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends011::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends011::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends011::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends011::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends011::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends011::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends011::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends011::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends011::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends011::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends011::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends011::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends011::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}

// Rich Presence data is automatically shared between friends who are in the same game
// Each user has a set of Key/Value pairs
// Up to 20 different keys can be set
// There are two magic keys:
//		"status"  - a UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list
//		"connect" - a UTF-8 string that contains the command-line for how a friend can connect to a game
// GetFriendRichPresence() returns an empty string "" if no value is set
// SetRichPresence() to a NULL or an empty string deletes the key
// You can iterate the current set of keys for a friend with GetFriendRichPresenceKeyCount()
// and GetFriendRichPresenceKeyByIndex() (typically only used for debugging)
bool SteamFriends011::SetRichPresence(const char *pchKey, const char *pchValue) 
{
	return ProxiedFriends::SetRichPresence(pchKey, pchValue);
}
void SteamFriends011::ClearRichPresence() 
{
	ProxiedFriends::ClearRichPresence();
}
const char *SteamFriends011::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) 
{
	return ProxiedFriends::GetFriendRichPresence(steamIDFriend, pchKey);
}
int32_t SteamFriends011::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyCount(steamIDFriend);
}
const char *SteamFriends011::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}
void SteamFriends011::RequestFriendRichPresence(CSteamID steamIDFriend) 
{
	ProxiedFriends::RequestFriendRichPresence(steamIDFriend);
}

// rich invite support
// if the target accepts the invite, the pchConnectString gets added to the command-line for launching the game
// if the game is already running, a GameRichPresenceJoinRequested_t callback is posted containing the connect string
// invites can only be sent to friends
bool SteamFriends011::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) 
{
	return ProxiedFriends::InviteUserToGame(steamIDFriend, pchConnectString);
}

// recently-played-with friends iteration
// this iterates the entire list of users recently played with, across games
// GetFriendCoplayTime() returns as a unix time
int32_t SteamFriends011::GetCoplayFriendCount() 
{
	return ProxiedFriends::GetCoplayFriendCount();
}
CSteamID SteamFriends011::GetCoplayFriend(int32_t iCoplayFriend) 
{
	return ProxiedFriends::GetCoplayFriend(iCoplayFriend);
}
int32_t SteamFriends011::GetFriendCoplayTime(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayTime(steamIDFriend);
}
AppId_t SteamFriends011::GetFriendCoplayGame(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayGame(steamIDFriend);
}

// chat interface for games
// this allows in-game access to group (clan) chats from in the game
// the behavior is somewhat sophisticated, because the user may or may not be already in the group chat from outside the game or in the overlay
// use ActivateGameOverlayToUser( "chat", steamIDClan ) to open the in-game overlay version of the chat
SteamAPICall_t SteamFriends011::JoinClanChatRoom(CSteamID steamIDClan) 
{
	return ProxiedFriends::JoinClanChatRoom(steamIDClan);
}
bool SteamFriends011::LeaveClanChatRoom(CSteamID steamIDClan) 
{
	return ProxiedFriends::LeaveClanChatRoom(steamIDClan);
}
int32_t SteamFriends011::GetClanChatMemberCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanChatMemberCount(steamIDClan);
}
CSteamID SteamFriends011::GetChatMemberByIndex(CSteamID steamIDClan, int32_t iUser) 
{
	return ProxiedFriends::GetChatMemberByIndex(steamIDClan, iUser);
}
bool SteamFriends011::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText) 
{
	return ProxiedFriends::SendClanChatMessage(steamIDClanChat, pchText);
}
int32_t SteamFriends011::GetClanChatMessage(CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) 
{
	return ProxiedFriends::GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, pSteamIDChatter);
}
bool SteamFriends011::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) 
{
	return ProxiedFriends::IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

// interact with the Steam (game overlay / desktop)
bool SteamFriends011::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::IsClanChatWindowOpenInSteam(steamIDClanChat);
}
bool SteamFriends011::OpenClanChatWindowInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::OpenClanChatWindowInSteam(steamIDClanChat);
}
bool SteamFriends011::CloseClanChatWindowInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::CloseClanChatWindowInSteam(steamIDClanChat);
}

// peer-to-peer chat interception
// this is so you can show P2P chats inline in the game
bool SteamFriends011::SetListenForFriendsMessages(bool bInterceptEnabled) 
{
	return ProxiedFriends::SetListenForFriendsMessages(bInterceptEnabled);
}
bool SteamFriends011::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend) 
{
	return ProxiedFriends::ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}
int32_t SteamFriends011::GetFriendMessage(CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType) 
{
	return ProxiedFriends::GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

// following apis
SteamAPICall_t SteamFriends011::GetFollowerCount(CSteamID steamID) 
{
	return ProxiedFriends::GetFollowerCount(steamID);
}
SteamAPICall_t SteamFriends011::IsFollowing(CSteamID steamID) 
{
	return ProxiedFriends::IsFollowing(steamID);
}
SteamAPICall_t SteamFriends011::EnumerateFollowingList(uint32 unStartIndex) 
{
	return ProxiedFriends::EnumerateFollowingList(unStartIndex);
}
#pragma endregion

#pragma region SteamFriends012
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends012::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
SteamAPICall_t SteamFriends012::SetPersonaName(const char *pchPersonaName)
{
	return ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends012::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends012::GetFriendCount(int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends012::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends012::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends012::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
// 
const char *SteamFriends012::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends012::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends012::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends012::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends012::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends012::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends012::GetClanName(CSteamID steamIDClan)
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends012::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

bool SteamFriends012::GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting) 
{
	return ProxiedFriends::GetClanActivityCounts(steamID, pnOnline, pnInGame, pnChatting);
}
SteamAPICall_t SteamFriends012::DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds) 
{
	return ProxiedFriends::DownloadClanActivityCounts(groupIDs, nIds);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends012::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends012::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends012::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends012::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup", "Stats", "Achievements"
void SteamFriends012::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
//		"stats" - opens the overlay web browser to the specified user's stats
//		"achievements" - opens the overlay web browser to the specified user's achievements
void SteamFriends012::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends012::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends012::ActivateGameOverlayToStore(AppId_t nAppID) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, EOverlayToStoreFlag::k_EOverlayToStoreFlagNone);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends012::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends012::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends012::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends012::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends012::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends012::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends012::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends012::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends012::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends012::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends012::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}

// Rich Presence data is automatically shared between friends who are in the same game
// Each user has a set of Key/Value pairs
// Up to 20 different keys can be set
// There are two magic keys:
//		"status"  - a UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list
//		"connect" - a UTF-8 string that contains the command-line for how a friend can connect to a game
// GetFriendRichPresence() returns an empty string "" if no value is set
// SetRichPresence() to a NULL or an empty string deletes the key
// You can iterate the current set of keys for a friend with GetFriendRichPresenceKeyCount()
// and GetFriendRichPresenceKeyByIndex() (typically only used for debugging)
bool SteamFriends012::SetRichPresence(const char *pchKey, const char *pchValue) 
{
	return ProxiedFriends::SetRichPresence(pchKey, pchValue);
}
void SteamFriends012::ClearRichPresence() 
{
	ProxiedFriends::ClearRichPresence();
}
const char *SteamFriends012::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) 
{
	return ProxiedFriends::GetFriendRichPresence(steamIDFriend, pchKey);
}
int32_t SteamFriends012::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyCount(steamIDFriend);
}
const char *SteamFriends012::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}
void SteamFriends012::RequestFriendRichPresence(CSteamID steamIDFriend) 
{
	ProxiedFriends::RequestFriendRichPresence(steamIDFriend);
}

// rich invite support
// if the target accepts the invite, the pchConnectString gets added to the command-line for launching the game
// if the game is already running, a GameRichPresenceJoinRequested_t callback is posted containing the connect string
// invites can only be sent to friends
bool SteamFriends012::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) 
{
	return ProxiedFriends::InviteUserToGame(steamIDFriend, pchConnectString);
}

// recently-played-with friends iteration
// this iterates the entire list of users recently played with, across games
// GetFriendCoplayTime() returns as a unix time
int32_t SteamFriends012::GetCoplayFriendCount() 
{
	return ProxiedFriends::GetCoplayFriendCount();
}
CSteamID SteamFriends012::GetCoplayFriend(int32_t iCoplayFriend) 
{
	return ProxiedFriends::GetCoplayFriend(iCoplayFriend);
}
int32_t SteamFriends012::GetFriendCoplayTime(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayTime(steamIDFriend);
}
AppId_t SteamFriends012::GetFriendCoplayGame(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayGame(steamIDFriend);
}

// chat interface for games
// this allows in-game access to group (clan) chats from in the game
// the behavior is somewhat sophisticated, because the user may or may not be already in the group chat from outside the game or in the overlay
// use ActivateGameOverlayToUser( "chat", steamIDClan ) to open the in-game overlay version of the chat
SteamAPICall_t SteamFriends012::JoinClanChatRoom(CSteamID steamIDClan) 
{
	return ProxiedFriends::JoinClanChatRoom(steamIDClan);
}
bool SteamFriends012::LeaveClanChatRoom(CSteamID steamIDClan) 
{
	return ProxiedFriends::LeaveClanChatRoom(steamIDClan);
}
int32_t SteamFriends012::GetClanChatMemberCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanChatMemberCount(steamIDClan);
}
CSteamID SteamFriends012::GetChatMemberByIndex(CSteamID steamIDClan, int32_t iUser) 
{
	return ProxiedFriends::GetChatMemberByIndex(steamIDClan, iUser);
}
bool SteamFriends012::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText) 
{
	return ProxiedFriends::SendClanChatMessage(steamIDClanChat, pchText);
}
int32_t SteamFriends012::GetClanChatMessage(CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) 
{
	return ProxiedFriends::GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, pSteamIDChatter);
}
bool SteamFriends012::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) 
{
	return ProxiedFriends::IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

// interact with the Steam (game overlay / desktop)
bool SteamFriends012::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::IsClanChatWindowOpenInSteam(steamIDClanChat);
}
bool SteamFriends012::OpenClanChatWindowInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::OpenClanChatWindowInSteam(steamIDClanChat);
}
bool SteamFriends012::CloseClanChatWindowInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::CloseClanChatWindowInSteam(steamIDClanChat);
}

// peer-to-peer chat interception
// this is so you can show P2P chats inline in the game
bool SteamFriends012::SetListenForFriendsMessages(bool bInterceptEnabled) 
{
	return ProxiedFriends::SetListenForFriendsMessages(bInterceptEnabled);
}
bool SteamFriends012::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend) 
{
	return ProxiedFriends::ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}
int32_t SteamFriends012::GetFriendMessage(CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType) 
{
	return ProxiedFriends::GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

// following apis
SteamAPICall_t SteamFriends012::GetFollowerCount(CSteamID steamID) 
{
	return ProxiedFriends::GetFollowerCount(steamID);
}
SteamAPICall_t SteamFriends012::IsFollowing(CSteamID steamID) 
{
	return ProxiedFriends::IsFollowing(steamID);
}
SteamAPICall_t SteamFriends012::EnumerateFollowingList(uint32 unStartIndex) 
{
	return ProxiedFriends::EnumerateFollowingList(unStartIndex);
}
#pragma endregion

#pragma region SteamFriends013
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends013::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
SteamAPICall_t SteamFriends013::SetPersonaName(const char *pchPersonaName)
{
	return ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends013::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends013::GetFriendCount(int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends013::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends013::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends013::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
// 
const char *SteamFriends013::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends013::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends013::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends013::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends013::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends013::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends013::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends013::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

bool SteamFriends013::GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting) 
{
	return ProxiedFriends::GetClanActivityCounts(steamID, pnOnline, pnInGame, pnChatting);
}
SteamAPICall_t SteamFriends013::DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds) 
{
	return ProxiedFriends::DownloadClanActivityCounts(groupIDs, nIds);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends013::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends013::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends013::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends013::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup", "Stats", "Achievements"
void SteamFriends013::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
//		"stats" - opens the overlay web browser to the specified user's stats
//		"achievements" - opens the overlay web browser to the specified user's achievements
void SteamFriends013::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends013::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends013::ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) 
{
	ProxiedFriends::ActivateGameOverlayToStore(nAppID, eFlag);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends013::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends013::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends013::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends013::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends013::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends013::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends013::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends013::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends013::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends013::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends013::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}

// Rich Presence data is automatically shared between friends who are in the same game
// Each user has a set of Key/Value pairs
// Up to 20 different keys can be set
// There are two magic keys:
//		"status"  - a UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list
//		"connect" - a UTF-8 string that contains the command-line for how a friend can connect to a game
// GetFriendRichPresence() returns an empty string "" if no value is set
// SetRichPresence() to a NULL or an empty string deletes the key
// You can iterate the current set of keys for a friend with GetFriendRichPresenceKeyCount()
// and GetFriendRichPresenceKeyByIndex() (typically only used for debugging)
bool SteamFriends013::SetRichPresence(const char *pchKey, const char *pchValue) 
{
	return ProxiedFriends::SetRichPresence(pchKey, pchValue);
}
void SteamFriends013::ClearRichPresence() 
{
	ProxiedFriends::ClearRichPresence();
}
const char *SteamFriends013::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) 
{
	return ProxiedFriends::GetFriendRichPresence(steamIDFriend, pchKey);
}
int32_t SteamFriends013::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyCount(steamIDFriend);
}
const char *SteamFriends013::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}
void SteamFriends013::RequestFriendRichPresence(CSteamID steamIDFriend) 
{
	ProxiedFriends::RequestFriendRichPresence(steamIDFriend);
}

// rich invite support
// if the target accepts the invite, the pchConnectString gets added to the command-line for launching the game
// if the game is already running, a GameRichPresenceJoinRequested_t callback is posted containing the connect string
// invites can only be sent to friends
bool SteamFriends013::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) 
{
	return ProxiedFriends::InviteUserToGame(steamIDFriend, pchConnectString);
}

// recently-played-with friends iteration
// this iterates the entire list of users recently played with, across games
// GetFriendCoplayTime() returns as a unix time
int32_t SteamFriends013::GetCoplayFriendCount() 
{
	return ProxiedFriends::GetCoplayFriendCount();
}
CSteamID SteamFriends013::GetCoplayFriend(int32_t iCoplayFriend) 
{
	return ProxiedFriends::GetCoplayFriend(iCoplayFriend);
}
int32_t SteamFriends013::GetFriendCoplayTime(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayTime(steamIDFriend);
}
AppId_t SteamFriends013::GetFriendCoplayGame(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayGame(steamIDFriend);
}

// chat interface for games
// this allows in-game access to group (clan) chats from in the game
// the behavior is somewhat sophisticated, because the user may or may not be already in the group chat from outside the game or in the overlay
// use ActivateGameOverlayToUser( "chat", steamIDClan ) to open the in-game overlay version of the chat
SteamAPICall_t SteamFriends013::JoinClanChatRoom(CSteamID steamIDClan) 
{
	return ProxiedFriends::JoinClanChatRoom(steamIDClan);
}
bool SteamFriends013::LeaveClanChatRoom(CSteamID steamIDClan)
{
	return ProxiedFriends::LeaveClanChatRoom(steamIDClan);
}
int32_t SteamFriends013::GetClanChatMemberCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanChatMemberCount(steamIDClan);
}
CSteamID SteamFriends013::GetChatMemberByIndex(CSteamID steamIDClan, int32_t iUser) 
{
	return ProxiedFriends::GetChatMemberByIndex(steamIDClan, iUser);
}
bool SteamFriends013::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText) 
{
	return ProxiedFriends::SendClanChatMessage(steamIDClanChat, pchText);
}
int32_t SteamFriends013::GetClanChatMessage(CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter) 
{
	return ProxiedFriends::GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, pSteamIDChatter);
}
bool SteamFriends013::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) 
{
	return ProxiedFriends::IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

// interact with the Steam (game overlay / desktop)
bool SteamFriends013::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::IsClanChatWindowOpenInSteam(steamIDClanChat);
}
bool SteamFriends013::OpenClanChatWindowInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::OpenClanChatWindowInSteam(steamIDClanChat);
}
bool SteamFriends013::CloseClanChatWindowInSteam(CSteamID steamIDClanChat) 
{
	return ProxiedFriends::CloseClanChatWindowInSteam(steamIDClanChat);
}

// peer-to-peer chat interception
// this is so you can show P2P chats inline in the game
bool SteamFriends013::SetListenForFriendsMessages(bool bInterceptEnabled) 
{
	return ProxiedFriends::SetListenForFriendsMessages(bInterceptEnabled);
}
bool SteamFriends013::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend) 
{
	return ProxiedFriends::ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}
int32_t SteamFriends013::GetFriendMessage(CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType) 
{
	return ProxiedFriends::GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

// following apis
SteamAPICall_t SteamFriends013::GetFollowerCount(CSteamID steamID) 
{
	return ProxiedFriends::GetFollowerCount(steamID);
}
SteamAPICall_t SteamFriends013::IsFollowing(CSteamID steamID) 
{
	return ProxiedFriends::IsFollowing(steamID);
}
SteamAPICall_t SteamFriends013::EnumerateFollowingList(uint32 unStartIndex) 
{
	return ProxiedFriends::EnumerateFollowingList(unStartIndex);
}
#pragma endregion

#pragma region SteamFriends014
// returns the local players name - guaranteed to not be NULL.
// this is the same name as on the users community profile page
// this is stored in UTF-8 format
// like all the other interface functions that return a char *, it's important that this pointer is not saved
// off {} it will eventually be free'd or re-allocated
const char *SteamFriends014::GetPersonaName()
{
	return ProxiedFriends::GetPersonaName();
}

// sets the player name, stores it on the server and publishes the changes to all friends who are online
SteamAPICall_t SteamFriends014::SetPersonaName(const char *pchPersonaName)
{
	return ProxiedFriends::SetPersonaName(pchPersonaName);
}

// gets the status of the current user
EPersonaState SteamFriends014::GetPersonaState()
{
	return ProxiedFriends::GetPersonaState();
}

// friend iteration
// takes a set of k_EFriendFlags, and returns the number of users the client knows about who meet that criteria
// then GetFriendByIndex() can then be used to return the id's of each of those users
int32_t SteamFriends014::GetFriendCount(int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendCount(iFriendFlags);
}

// returns the steamID of a user
// iFriend is a index of range [0, GetFriendCount())
// iFriendsFlags must be the same value as used in GetFriendCount()
// the returned CSteamID can then be used by all the functions below to access details about the user
CSteamID SteamFriends014::GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	return ProxiedFriends::GetFriendByIndex(iFriend, iFriendFlags);
}

// returns a relationship to a user
EFriendRelationship SteamFriends014::GetFriendRelationship(CSteamID steamIDFriend)
{
	return ProxiedFriends::GetFriendRelationship(steamIDFriend);
}

// returns the current status of the specified user
// this will only be known by the local user if steamIDFriend is in their friends list {} on the same game server {} in a chat room or lobby {} or in a small group with the local user
EPersonaState SteamFriends014::GetFriendPersonaState(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaState(steamIDFriend);
}

// returns the name another user - guaranteed to not be NULL.
// same rules as GetFriendPersonaState() apply as to whether or not the user knowns the name of the other user
// note that on first joining a lobby, chat room or game server the local user will not known the name of the other users automatically {} that information will arrive asyncronously
// 
const char *SteamFriends014::GetFriendPersonaName(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendPersonaName(steamIDFriend);
}

// returns true if the friend is actually in a game, and fills in pFriendGameInfo with an extra details 
bool SteamFriends014::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo) 
{
	return ProxiedFriends::GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}
// accesses old friends names - returns an empty string when their are no more items in the history
const char *SteamFriends014::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int32_t iPersonaName) 
{
	return ProxiedFriends::GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

const char *SteamFriends014::GetPlayerNickname(CSteamID steamIDPlayer) 
{
	return ProxiedFriends::GetPlayerNickname(steamIDPlayer);
}

// returns true if the specified user meets any of the criteria specified in iFriendFlags
// iFriendFlags can be the union (binary or, |) of one or more k_EFriendFlags values
bool SteamFriends014::HasFriend(CSteamID steamIDFriend, int32_t iFriendFlags) 
{
	return ProxiedFriends::HasFriend(steamIDFriend, iFriendFlags);
}

// clan (group) iteration and access functions
int32_t SteamFriends014::GetClanCount() 
{
	return ProxiedFriends::GetClanCount();
}
CSteamID SteamFriends014::GetClanByIndex(int32_t iClan) 
{
	return ProxiedFriends::GetClanByIndex(iClan);
}
const char *SteamFriends014::GetClanName(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanName(steamIDClan);
}
const char *SteamFriends014::GetClanTag(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanTag(steamIDClan);
}

bool SteamFriends014::GetClanActivityCounts(CSteamID steamID, int32_t *pnOnline, int32_t *pnInGame, int32_t *pnChatting) 
{
	return ProxiedFriends::GetClanActivityCounts(steamID, pnOnline, pnInGame, pnChatting);
}
SteamAPICall_t SteamFriends014::DownloadClanActivityCounts(CSteamID groupIDs[], int32_t nIds) 
{
	return ProxiedFriends::DownloadClanActivityCounts(groupIDs, nIds);
}

// iterators for getting users in a chat room, lobby, game server or clan
// note that large clans that cannot be iterated by the local user
// steamIDSource can be the steamID of a group, game server, lobby or chat room
int32_t SteamFriends014::GetFriendCountFromSource(CSteamID steamIDSource) 
{
	return ProxiedFriends::GetFriendCountFromSource(steamIDSource);
}
CSteamID SteamFriends014::GetFriendFromSourceByIndex(CSteamID steamIDSource, int32_t iFriend) 
{
	return ProxiedFriends::GetFriendFromSourceByIndex(steamIDSource, iFriend);
}

// returns true if the local user can see that steamIDUser is a member or in steamIDSource
bool SteamFriends014::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) 
{
	return ProxiedFriends::IsUserInSource(steamIDUser, steamIDSource);
}

// User is in a game pressing the talk button (will suppress the microphone for all voice comms from the Steam friends UI)
void SteamFriends014::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) 
{
	ProxiedFriends::SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

// activates the game overlay, with an optional dialog to open 
// valid options are "Friends", "Community", "Players", "Settings", "LobbyInvite", "OfficialGameGroup", "Stats", "Achievements"
void SteamFriends014::ActivateGameOverlay(const char *pchDialog) 
{
	ProxiedFriends::ActivateGameOverlay(pchDialog);
}

// activates game overlay to a specific place
// valid options are
//		"steamid" - opens the overlay web browser to the specified user or groups profile
//		"chat" - opens a chat window to the specified user, or joins the group chat 
//		"stats" - opens the overlay web browser to the specified user's stats
//		"achievements" - opens the overlay web browser to the specified user's achievements
void SteamFriends014::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID) 
{
	ProxiedFriends::ActivateGameOverlayToUser(pchDialog, steamID);
}

// activates game overlay web browser directly to the specified URL
// full address with protocol type is required, e.g. http://www.steamgames.com/
void SteamFriends014::ActivateGameOverlayToWebPage(const char *pchURL) 
{
	ProxiedFriends::ActivateGameOverlayToWebPage(pchURL);
}

// activates game overlay to store page for app
void SteamFriends014::ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) 
{
	return ProxiedFriends::ActivateGameOverlayToStore(nAppID, eFlag);
}

// Mark a target user as 'played with'. This is a client-side only feature that requires that the calling user is 
// in game 
void SteamFriends014::SetPlayedWith(CSteamID steamIDUserPlayedWith) 
{
	ProxiedFriends::SetPlayedWith(steamIDUserPlayedWith);
}

// activates game overlay to open the invite dialog. Invitations will be sent for the provided lobby.
// You can also use ActivateGameOverlay( "LobbyInvite" ) to allow the user to create invitations for their current public lobby.
void SteamFriends014::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) 
{
	ProxiedFriends::ActivateGameOverlayInviteDialog(steamIDLobby);
}

// gets the small (32x32) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends014::GetSmallFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetSmallFriendAvatar(steamIDFriend);
}

// gets the medium (64x64) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
int32_t SteamFriends014::GetMediumFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetMediumFriendAvatar(steamIDFriend);
}

// gets the large (184x184) avatar of the current user, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
// returns -1 if this image has yet to be loaded, in this case wait for a AvatarImageLoaded_t callback and then call this again
int32_t SteamFriends014::GetLargeFriendAvatar(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetLargeFriendAvatar(steamIDFriend);
}

// requests information about a user - persona name & avatar
// if bRequireNameOnly is set, then the avatar of a user isn't downloaded 
// - it's a lot slower to download avatars and churns the local cache, so if you don't need avatars, don't request them
// if returns true, it means that data is being requested, and a PersonaStateChanged_t callback will be posted when it's retrieved
// if returns false, it means that we already have all the details about that user, and functions can be called immediately
bool SteamFriends014::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) 
{
	return ProxiedFriends::RequestUserInformation(steamIDUser, bRequireNameOnly);
}

// requests information about a clan officer list
// when complete, data is returned in ClanOfficerListResponse_t call result
// this makes available the calls below
// you can only ask about clans that a user is a member of
// note that this won't download avatars automatically {} if you get an officer,
// and no avatar image is available, call RequestUserInformation( steamID, false ) to download the avatar
SteamAPICall_t SteamFriends014::RequestClanOfficerList(CSteamID steamIDClan) 
{
	return ProxiedFriends::RequestClanOfficerList(steamIDClan);
}

// iteration of clan officers - can only be done when a RequestClanOfficerList() call has completed

// returns the steamID of the clan owner
CSteamID SteamFriends014::GetClanOwner(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOwner(steamIDClan);
}
// returns the number of officers in a clan (including the owner)
int32_t SteamFriends014::GetClanOfficerCount(CSteamID steamIDClan) 
{
	return ProxiedFriends::GetClanOfficerCount(steamIDClan);
}
// returns the steamID of a clan officer, by index, of range [0,GetClanOfficerCount)
CSteamID SteamFriends014::GetClanOfficerByIndex(CSteamID steamIDClan, int32_t iOfficer) 
{
	return ProxiedFriends::GetClanOfficerByIndex(steamIDClan, iOfficer);
}
// if current user is chat restricted, he can't send or receive any text/voice chat messages.
// the user can't see custom avatars. But the user can be online and send/recv game invites.
// a chat restricted user can't add friends or join any groups.
EUserRestriction SteamFriends014::GetUserRestrictions() 
{
	return ProxiedFriends::GetUserRestrictions();
}

// Rich Presence data is automatically shared between friends who are in the same game
// Each user has a set of Key/Value pairs
// Up to 20 different keys can be set
// There are two magic keys:
//		"status"  - a UTF-8 string that will show up in the 'view game info' dialog in the Steam friends list
//		"connect" - a UTF-8 string that contains the command-line for how a friend can connect to a game
// GetFriendRichPresence() returns an empty string "" if no value is set
// SetRichPresence() to a NULL or an empty string deletes the key
// You can iterate the current set of keys for a friend with GetFriendRichPresenceKeyCount()
// and GetFriendRichPresenceKeyByIndex() (typically only used for debugging)
bool SteamFriends014::SetRichPresence(const char *pchKey, const char *pchValue) 
{
	return ProxiedFriends::SetRichPresence(pchKey, pchValue);
}
void SteamFriends014::ClearRichPresence() 
{
	ProxiedFriends::ClearRichPresence();
}
const char *SteamFriends014::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey) 
{
	return ProxiedFriends::GetFriendRichPresence(steamIDFriend, pchKey);
}
int32_t SteamFriends014::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyCount(steamIDFriend);
}
const char *SteamFriends014::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int32_t iKey) 
{
	return ProxiedFriends::GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}
void SteamFriends014::RequestFriendRichPresence(CSteamID steamIDFriend) 
{
	ProxiedFriends::RequestFriendRichPresence(steamIDFriend);
}

// rich invite support
// if the target accepts the invite, the pchConnectString gets added to the command-line for launching the game
// if the game is already running, a GameRichPresenceJoinRequested_t callback is posted containing the connect string
// invites can only be sent to friends
bool SteamFriends014::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString) 
{
	return ProxiedFriends::InviteUserToGame(steamIDFriend, pchConnectString);
}

// recently-played-with friends iteration
// this iterates the entire list of users recently played with, across games
// GetFriendCoplayTime() returns as a unix time
int32_t SteamFriends014::GetCoplayFriendCount() 
{
	return ProxiedFriends::GetCoplayFriendCount();
}
CSteamID SteamFriends014::GetCoplayFriend(int32_t iCoplayFriend) 
{
	return ProxiedFriends::GetCoplayFriend(iCoplayFriend);
}
int32_t SteamFriends014::GetFriendCoplayTime(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayTime(steamIDFriend);
}
AppId_t SteamFriends014::GetFriendCoplayGame(CSteamID steamIDFriend) 
{
	return ProxiedFriends::GetFriendCoplayGame(steamIDFriend);
}

// chat interface for games
// this allows in-game access to group (clan) chats from in the game
// the behavior is somewhat sophisticated, because the user may or may not be already in the group chat from outside the game or in the overlay
// use ActivateGameOverlayToUser( "chat", steamIDClan ) to open the in-game overlay version of the chat
SteamAPICall_t SteamFriends014::JoinClanChatRoom(CSteamID steamIDClan) 
{
	return ProxiedFriends::JoinClanChatRoom(steamIDClan);
}
bool SteamFriends014::LeaveClanChatRoom(CSteamID steamIDClan)
{
	return ProxiedFriends::LeaveClanChatRoom(steamIDClan);
}
int32_t SteamFriends014::GetClanChatMemberCount(CSteamID steamIDClan)
{
	return ProxiedFriends::GetClanChatMemberCount(steamIDClan);
}
CSteamID SteamFriends014::GetChatMemberByIndex(CSteamID steamIDClan, int32_t iUser)
{
	return ProxiedFriends::GetChatMemberByIndex(steamIDClan, iUser);
}
bool SteamFriends014::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)
{
	return ProxiedFriends::SendClanChatMessage(steamIDClanChat, pchText);
}
int32_t SteamFriends014::GetClanChatMessage(CSteamID steamIDClanChat, int32_t iMessage, void *prgchText, int32_t cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter)
{
	return ProxiedFriends::GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, pSteamIDChatter);
}
bool SteamFriends014::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)
{
	return ProxiedFriends::IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

// interact with the Steam (game overlay / desktop)
bool SteamFriends014::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)
{
	return ProxiedFriends::IsClanChatWindowOpenInSteam(steamIDClanChat);
}
bool SteamFriends014::OpenClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	return ProxiedFriends::OpenClanChatWindowInSteam(steamIDClanChat);
}
bool SteamFriends014::CloseClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	return ProxiedFriends::CloseClanChatWindowInSteam(steamIDClanChat);
}

// peer-to-peer chat interception
// this is so you can show P2P chats inline in the game
bool SteamFriends014::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	return ProxiedFriends::SetListenForFriendsMessages(bInterceptEnabled);
}
bool SteamFriends014::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)
{
	return ProxiedFriends::ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}
int32_t SteamFriends014::GetFriendMessage(CSteamID steamIDFriend, int32_t iMessageID, void *pvData, int32_t cubData, EChatEntryType *peChatEntryType)
{
	return ProxiedFriends::GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

// following apis
SteamAPICall_t SteamFriends014::GetFollowerCount(CSteamID steamID)
{
	return ProxiedFriends::GetFollowerCount(steamID);
}
SteamAPICall_t SteamFriends014::IsFollowing(CSteamID steamID)
{
	return ProxiedFriends::IsFollowing(steamID);
}
SteamAPICall_t SteamFriends014::EnumerateFollowingList(uint32 unStartIndex)
{
	return ProxiedFriends::EnumerateFollowingList(unStartIndex);
}
#pragma endregion
