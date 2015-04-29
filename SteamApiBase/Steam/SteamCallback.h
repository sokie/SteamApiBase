/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-0408
	Notes:
		Steam callbacks that are used allover the place.
		Pretty much a copypaste of Bas's work.
*/

#pragma once

typedef struct
{
	void *Data;
	int32_t Size;
	int32_t Type;
	uint64_t Call;
} SteamAPIResult_t;

class CallbackBase
{
public:
	CallbackBase() { m_nCallbackFlags = 0; m_iCallback = 0; }
	virtual void Run(void *pvParam) = 0;
	virtual void Run(void *pvParam, bool bIOFailure, uint64_t hSteamAPICall) = 0;
	int GetICallback() { return m_iCallback; }
	void SetICallback(int i) { m_iCallback = i; }
	virtual int GetCallbackSizeBytes() = 0;

protected:
	enum { k_ECallbackFlagsRegistered = 0x01, k_ECallbackFlagsGameServer = 0x02 };
	uint8_t m_nCallbackFlags;
	int m_iCallback;
	friend class CCallbackMgr;
};

class SteamCallback
{
	static std::unordered_map<uint64_t, bool> _Calls;
	static std::unordered_map<uint64_t, CallbackBase *> _ResultHandlers;
	static std::vector<SteamAPIResult_t> _Results;
	static std::vector<CallbackBase*> _Callbacks;
	static int32_t _CallID;

public:
	// Does what one would expect.
	static void RunCallbacks();

	// Register a global callback.
	static void RegisterCallback(CallbackBase* handler, int32_t callback);

	// Register a call result.
	static void RegisterCallResult(uint64_t call, CallbackBase* result);

	// Unregister a global callback.
	static void UnregisterCallback(CallbackBase* handler, int32_t callback);

	// Unregister a call result.
	static void UnregisterCallResult(uint64_t call, CallbackBase* result);

	// Register a callback.
	static uint64_t RegisterCall();

	// Return a callback.
	static void ReturnCall(void* data, int32_t size, int32_t type, uint64_t call);

	// Get the name for debugging.
	static const char *GetCallbackName(int32_t ID);
};