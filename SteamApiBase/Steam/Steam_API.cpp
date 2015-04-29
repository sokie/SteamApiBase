#include "..\STDInc.h"

#pragma region Interfaces
static SteamInterface_t _SteamAppList;
static SteamInterface_t _SteamApps;
static SteamInterface_t _SteamClient;
static SteamInterface_t _SteamContentServer;
static SteamInterface_t _SteamController;
static SteamInterface_t _SteamFriends;
static SteamInterface_t _SteamGameServer;
static SteamInterface_t _SteamGameServerStats;
static SteamInterface_t _SteamHTTP;
static SteamInterface_t _SteamMasterServerUpdater;
static SteamInterface_t _SteamMatchMaking;
static SteamInterface_t _SteamMatchMakingServers;
static SteamInterface_t _SteamMusic;
static SteamInterface_t _SteamMusicRemote;
static SteamInterface_t _SteamNetworking;
static SteamInterface_t _SteamRemoteStorage;
static SteamInterface_t _SteamScreenshots;
static SteamInterface_t _SteamUGC;
static SteamInterface_t _SteamUnifiedMessages;
static SteamInterface_t _SteamUser;
static SteamInterface_t _SteamUserStats;
static SteamInterface_t _SteamUtils;
#pragma endregion

extern "C"
{
	__declspec(dllexport) HSteamPipe __cdecl GetHSteamPipe()
	{
		HHSDBG();
		return 1;
	}

	__declspec(dllexport) HSteamUser __cdecl GetHSteamUser()
	{
		HHSDBG();
		return 1338;
	}

	__declspec(dllexport) HSteamPipe __cdecl SteamAPI_GetHSteamPipe()
	{
		HHSDBG();
		return 1;
	}

	__declspec(dllexport) HSteamUser __cdecl SteamAPI_GetHSteamUser()
	{
		HHSDBG();
		return NULL;
	}

	__declspec(dllexport) const char *__cdecl SteamAPI_GetSteamInstallPath()
	{
		HHSDBG();
		char Buffer[512];
		GetCurrentDirectoryA(512, Buffer);
		return Buffer;
	}

	__declspec(dllexport) bool __cdecl SteamAPI_Init()
	{
		HHSDBG();
		SteamCommon::Init();
		return true;
	}

	__declspec(dllexport) bool __cdecl SteamAPI_InitSafe()
	{
		HHSDBG();
		return true;
	}

	__declspec(dllexport) void __cdecl SteamAPI_RegisterCallResult(void* result, SteamAPICall_t callID)
	{
		Log::Debug("SteamAPI", "%s(CCallbackBase*, %i) = %i", __FUNCTION__, callID);
		SteamCallback::RegisterCallResult(callID, static_cast<CallbackBase *>(result));

		//Log::Debug(__FUNCTION__, "CCallbackBase* dump: m_iCallback => %i; size => %i", result->GetICallback(), result->GetCallbackSizeBytes());
	}

	__declspec(dllexport) void __cdecl SteamAPI_RegisterCallback(void *callback, int type)
	{
		Log::Debug("SteamAPI", "%s(CCallbackBase*, %i) = %i", __FUNCTION__, type);
		SteamCallback::RegisterCallback(static_cast<CallbackBase *>(callback), type);

		//Log::Debug(__FUNCTION__, "CCallbackBase* dump: m_iCallback => %i; size => %i", callback->GetICallback(), callback->GetCallbackSizeBytes());
	}

	__declspec(dllexport) void __cdecl SteamAPI_RunCallbacks()
	{
		SteamCallback::RunCallbacks();
	}

	__declspec(dllexport) void __cdecl SteamAPI_SetMiniDumpComment(const char* msg)
	{
		Log::Debug("SteamAPI", "%s(%X)", __FUNCTION__, _ReturnAddress());
	}

	__declspec(dllexport) bool __cdecl SteamAPI_SetTryCatchCallbacks(bool bTryCatchCallbacks)
	{
		Log::Debug("SteamAPI", "%s(%i)", __FUNCTION__, bTryCatchCallbacks);

		return true;
	}

	__declspec(dllexport) void __cdecl SteamAPI_Shutdown()
	{
		HHSDBG();
	}

	__declspec(dllexport) void __cdecl SteamAPI_UnregisterCallResult(void* result, SteamAPICall_t callID)
	{
		Log::Debug("SteamAPI", "%s(CCallbackBase*, %i) = %i", __FUNCTION__, callID);
		SteamCallback::UnregisterCallResult(callID, static_cast<CallbackBase *>(result));
		//Log::Debug(__FUNCTION__, "CCallbackBase* dump: m_iCallback => %i; size => %i", result->GetICallback(), result->GetCallbackSizeBytes());
	}

	__declspec(dllexport) void __cdecl SteamAPI_UnregisterCallback(void *callback, int type)
	{
		Log::Debug("SteamAPI", "%s(CCallbackBase*, %i) = %i", __FUNCTION__, type);
		SteamCallback::UnregisterCallback(static_cast<CallbackBase *>(callback), type);
		//Log::Debug(__FUNCTION__, "CCallbackBase* dump: m_iCallback => %i; size => %i", callback->GetICallback(), callback->GetCallbackSizeBytes());
	}

	__declspec(dllexport) void __cdecl SteamAPI_WriteMiniDump(uint32 structuredExceptionDoce, void *exceptionInfo, uint32 buildID)
	{
		Log::Debug("SteamAPI", "%s(%i, void, %i)", __FUNCTION__, structuredExceptionDoce, buildID);
	}

	__declspec(dllexport) void* __cdecl SteamApps()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamApps();
	}

	//static SteamClient012 Client;

	__declspec(dllexport) void* __cdecl SteamClient()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamClient();
	}

	__declspec(dllexport) void* __cdecl SteamContentServer()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamContentServer();
	}

	__declspec(dllexport) void* __cdecl SteamContentServerUtils()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return NULL;
	}

	__declspec(dllexport) bool __cdecl SteamContentServer_Init(unsigned int localIP, unsigned short port)
	{
		Log::Debug("SteamAPI", "%s(%i, %lli)", __FUNCTION__, localIP, port);

		return true;
	}

	__declspec(dllexport) void __cdecl SteamContentServer_RunCallbacks()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

	}

	__declspec(dllexport) void __cdecl SteamContentServer_Shutdown()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

	}

	__declspec(dllexport) void* __cdecl SteamFriends()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamFriends();
	}

	__declspec(dllexport) void* __cdecl SteamGameServer()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamGameServer();
	}

	__declspec(dllexport) void* __cdecl SteamGameServerUtils()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return NULL;
	}

	__declspec(dllexport) bool __cdecl SteamGameServer_BSecure()
	{
		HHSDBG();
		return true;
	}

	__declspec(dllexport) HSteamPipe __cdecl SteamGameServer_GetHSteamPipe()
	{
		HHSDBG();
		return 1338;
	}

	__declspec(dllexport) HSteamUser __cdecl SteamGameServer_GetHSteamUser()
	{
		HHSDBG();
		return 1;
	}

	__declspec(dllexport) int32 __cdecl SteamGameServer_GetIPCCallCount()
	{
		HHSDBG();
		return 1338;
	}

	__declspec(dllexport) uint64 __cdecl SteamGameServer_GetSteamID()
	{
		HHSDBG();
		return NULL;
	}

	__declspec(dllexport) bool __cdecl SteamGameServer_Init(uint32 ip, uint16 port, uint16 gamePort, EServerMode serverMode, int gameAppID, const char* gameDir, const char* versionString)
	{
		Log::Debug("SteamAPI", "%s(%i, %i, %i, %i, %i, %s, %s)", __FUNCTION__, ip, port, gamePort, serverMode, gameAppID, gameDir, versionString);

		return true;
	}

	__declspec(dllexport) bool __cdecl SteamGameServer_InitSafe(uint32 ip, uint16 port, uint16 gamePort, EServerMode serverMode, int gameAppID, const char* gameDir, const char* versionString, unsigned long dongs)
	{
		Log::Debug("SteamAPI", "%s(%i, %i, %i, %i, %i, %s, %s, %lli)", __FUNCTION__, ip, port, gamePort, serverMode, gameAppID, gameDir, versionString, dongs);

		return true;
	}

	__declspec(dllexport) void __cdecl SteamGameServer_RunCallbacks()
	{
		HHSDBG();
	}

	__declspec(dllexport) void __cdecl SteamGameServer_Shutdown()
	{
		HHSDBG();
	}

	__declspec(dllexport) void* __cdecl SteamMasterServerUpdater()
	{
		HHSDBG();
		return SteamCommon::GetSteamMasterServerUpdater();
	}

	__declspec(dllexport) void* __cdecl SteamMatchmaking()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamMatchmaking();
	}

	__declspec(dllexport) void* __cdecl SteamMatchmakingServers()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamMatchmakingServers();
	}

	__declspec(dllexport) void* __cdecl SteamNetworking()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamNetworking();
	}

	__declspec(dllexport) void* __cdecl SteamRemoteStorage()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamRemoteStorage();
	}

	__declspec(dllexport) void* __cdecl SteamUser()
	{
		return SteamCommon::GetSteamUser();
	}

	__declspec(dllexport) void* __cdecl SteamUserStats()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamUserStats();
	}

	__declspec(dllexport) void* __cdecl SteamUtils()
	{
		Log::Debug("SteamAPI", "%s()", __FUNCTION__);

		return SteamCommon::GetSteamUtils();
	}

	__declspec(dllexport) HSteamUser __cdecl Steam_GetHSteamUserCurrent()
	{
		HHSDBG();
		return 1;
	}

	__declspec(dllexport) void __cdecl Steam_RegisterInterfaceFuncs(void *module)
	{
		HHSDBG();
	}

	__declspec(dllexport) void __cdecl Steam_RunCallbacks(HSteamPipe hSteamPipe, bool bGameServerCallbacks)
	{
		Log::Debug("SteamAPI", "%s(%i, %i)", __FUNCTION__, hSteamPipe, bGameServerCallbacks);
	}

	__declspec(dllexport) bool __cdecl SteamAPI_RestartApp(int appid)
	{
		HHSDBG();
		return true;
	}

	__declspec(dllexport) bool __cdecl SteamAPI_RestartAppIfNecessary(uint32 appID)
	{
		HHSDBG();
		return false;
	}

	__declspec(dllexport) bool __cdecl SteamAPI_IsSteamRunning()
	{
		HHSDBG();
		return true;
	}

	__declspec(dllexport) void *g_pSteamClientGameServer = NULL;
}