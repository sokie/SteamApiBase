// General includes.

#pragma once

#define DEVBUILD

#ifndef WIN32_LEAN_AND_MEAN
#define	WIN32_LEAN_AND_MEAN
#endif

#ifndef _CRT_SECURE_NO_WARNINGS
#define	_CRT_SECURE_NO_WARNINGS
#endif

#ifdef DEVBUILD
#define HHSDBG() Log::Debug("SteamApiBase", "%s()", __FUNCTION__)
#else
#define HHSDBG()
#endif

// C\C++ includes.
#pragma region Runtime
//#include <Windows.h>
#include <string>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <io.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <sys/stat.h>
#include <list>
#include <map>
#include <queue>
#include <fstream>
#include <unordered_map>
#include <memory>
#include <mutex>
#include <chrono>
#include <thread>
#include <direct.h>
#pragma endregion

#include "Steam\SteamCallback.h"
#include "Steam\InterfaceManager.h"
#include "External\GlobalVariables.h"

#include "Utils\Log.h"
#include "Steam\Steam.h"