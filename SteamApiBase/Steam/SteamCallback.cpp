/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Steam callbacks that are used allover the place.
		Pretty much a copypaste of Bas's work.
*/


#include "..\STDInc.h"

std::unordered_map<uint64_t, bool> SteamCallback::_Calls;
std::unordered_map<uint64_t, CallbackBase *> SteamCallback::_ResultHandlers;
std::vector<SteamAPIResult_t> SteamCallback::_Results;
std::vector<CallbackBase*> SteamCallback::_Callbacks;
int32_t SteamCallback::_CallID;
static CRITICAL_SECTION ThreadSafe;
static bool Initialized = false;

void SteamCallback::RegisterCallback(CallbackBase *handler, int32_t callback)
{
	if (!Initialized)
	{
		InitializeCriticalSection(&ThreadSafe);
		Initialized = true;
	}

	EnterCriticalSection(&ThreadSafe);
	handler->SetICallback(callback);
	_Callbacks.push_back(handler);
	LeaveCriticalSection(&ThreadSafe);
}
void SteamCallback::RegisterCallResult(uint64_t call, CallbackBase *result)
{
	EnterCriticalSection(&ThreadSafe);
	_ResultHandlers[call] = result;
	LeaveCriticalSection(&ThreadSafe);
}

void SteamCallback::UnregisterCallback(CallbackBase *handler, int32_t callback)
{
}
void SteamCallback::UnregisterCallResult(uint64_t call, CallbackBase *result)
{
	_ResultHandlers.erase(call);
}

uint64_t SteamCallback::RegisterCall()
{
	EnterCriticalSection(&ThreadSafe);
	_CallID++;
	_Calls[_CallID] = false;
	LeaveCriticalSection(&ThreadSafe);
	return _CallID;
}
void SteamCallback::ReturnCall(void *data, int size, int type, uint64_t call)
{
	SteamAPIResult_t result;

	EnterCriticalSection(&ThreadSafe);
	_Calls[call] = true;
	result.Call = call;
	result.Data = data;
	result.Size = size;
	result.Type = type;
	_Results.push_back(result);
	LeaveCriticalSection(&ThreadSafe);
}
void SteamCallback::RunCallbacks()
{
	std::vector<SteamAPIResult_t>::iterator iter;
	if (!Initialized)
	{
		InitializeCriticalSection(&ThreadSafe);
		Initialized = true;
	}

	EnterCriticalSection(&ThreadSafe);
	for (iter = _Results.begin(); iter != _Results.end(); ++iter)
	{
		if (_ResultHandlers.find(iter->Call) != _ResultHandlers.end())
		{
			_ResultHandlers[iter->Call]->Run(iter->Data, false, iter->Call);
		}

		std::vector<CallbackBase*>::iterator cbiter;

		for (cbiter = _Callbacks.begin(); cbiter < _Callbacks.end(); ++cbiter)
		{
			CallbackBase* cb = *cbiter;

			if (cb && cb->GetICallback() == iter->Type)
			{
				cb->Run(iter->Data, false, 0);
			}
		}
	}

	_Results.clear();
	LeaveCriticalSection(&ThreadSafe);
}

#pragma region CallbackNames

//enum ECallbackType
//{
//	k_iSteamUserCallbacks = 100,
//	k_iSteamGameServerCallbacks = 200,
//	k_iSteamFriendsCallbacks = 300,
//	k_iSteamBillingCallbacks = 400,
//	k_iSteamMatchmakingCallbacks = 500,
//	k_iSteamContentServerCallbacks = 600,
//	k_iSteamUtilsCallbacks = 700,
//	k_iClientFriendsCallbacks = 800,
//	k_iClientUserCallbacks = 900,
//	k_iSteamAppsCallbacks = 1000,
//	k_iSteamUserStatsCallbacks = 1100,
//	k_iSteamNetworkingCallbacks = 1200,
//	k_iClientRemoteStorageCallbacks = 1300,
//	k_iSteamUserItemsCallbacks = 1400,
//	k_iSteamGameServerItemsCallbacks = 1500,
//	k_iClientUtilsCallbacks = 1600,
//	k_iSteamGameCoordinatorCallbacks = 1700,
//	k_iSteamGameServerStatsCallbacks = 1800,
//	k_iSteam2AsyncCallbacks = 1900,
//	k_iSteamGameStatsCallbacks = 2000,
//	k_iClientHTTPCallbacks = 2100,
//	k_iClientScreenshotsCallbacks = 2200,
//	k_iSteamScreenshotsCallbacks = 2300,
//	k_iClientAudioCallbacks = 2400,
//	k_iSteamUnifiedMessagesCallbacks = 2500,
//	k_iClientUnifiedMessagesCallbacks = 2600,
//};

static std::unordered_map<uint32_t, char *> CallbackNames;
static void BuildCallbackMap() // CallbackNames[0] = "";
{
	CallbackNames[101] = "SteamServersConnected";
	CallbackNames[102] = "SteamServerConnectFailure";
	CallbackNames[103] = "SteamServersDisconnected";
	CallbackNames[104] = "BeginLogonRetry";
	CallbackNames[113] = "ClientGameServerDeny";
	CallbackNames[114] = "PrimaryChatDestinationSetOld";
	CallbackNames[115] = "GSPolicyResponse";
	CallbackNames[117] = "IPCFailure";
	CallbackNames[125] = "LicensesUpdated";
	CallbackNames[130] = "AppLifetimeNotice";
	CallbackNames[141] = "DRMSDKFileTransferResult";
	CallbackNames[143] = "ValidateAuthTicketResponse";
	CallbackNames[152] = "MicroTxnAuthorizationResponse";
	CallbackNames[154] = "EncryptedAppTicketResponse";
	CallbackNames[163] = "GetAuthSessionTicketResponse";
	CallbackNames[164] = "GameWebCallback";

	CallbackNames[201] = "GSClientApprove";
	CallbackNames[202] = "GSClientDeny";
	CallbackNames[203] = "GSClientKick";
	CallbackNames[204] = "GSClientSteam2Deny";
	CallbackNames[205] = "GSClientSteam2Accept";
	CallbackNames[206] = "GSClientAchievementStatus";
	CallbackNames[207] = "GSGameplayStats";
	CallbackNames[208] = "GSClientGroupStatus";
	CallbackNames[209] = "GSReputation";
	CallbackNames[210] = "AssociateWithClanResult";
	CallbackNames[211] = "ComputeNewPlayerCompatibilityResult";

	CallbackNames[304] = "PersonaStateChange";
	CallbackNames[331] = "GameOverlayActivated";
	CallbackNames[332] = "GameServerChangeRequested";
	CallbackNames[333] = "GameLobbyJoinRequested";
	CallbackNames[334] = "AvatarImageLoaded";
	CallbackNames[335] = "ClanOfficerListResponse";
	CallbackNames[336] = "FriendRichPresenceUpdate";
	CallbackNames[337] = "GameRichPresenceJoinRequested";
	CallbackNames[338] = "GameConnectedClanChatMsg";
	CallbackNames[339] = "GameConnectedChatJoin";
	CallbackNames[340] = "GameConnectedChatLeave";
	CallbackNames[341] = "DownloadClanActivityCountsResult";
	CallbackNames[342] = "JoinClanChatRoomCompletionResult";
	CallbackNames[343] = "GameConnectedFriendChatMsg";
	CallbackNames[344] = "FriendsGetFollowerCount";
	CallbackNames[345] = "FriendsIsFollowing";
	CallbackNames[346] = "FriendsEnumerateFollowingList";
	CallbackNames[347] = "SetPersonaNameResponse";

	// Tired, just going to add the missing T6 ones for now.
	// TODO: Add all callbacks.
	CallbackNames[1005] = "DlcInstalled";
	CallbackNames[1101] = "UserStatsReceived";
	CallbackNames[1102] = "UserStatsStored";
	CallbackNames[1103] = "UserAchievementStored";
}
const char *SteamCallback::GetCallbackName(int32_t ID)
{
	static bool Initialized = false;
	if (!Initialized)
	{
		BuildCallbackMap();
		Initialized = false;
	}

	return CallbackNames[ID];
}
#pragma endregion
