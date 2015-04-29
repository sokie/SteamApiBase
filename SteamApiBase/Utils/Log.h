#pragma once
#include "..\STDInc.h"

enum LogLevel
{
	LogLevel_None = 0,
	LogLevel_Warning = 1,
	LogLevel_Error = 2,
	LogLevel_Debug = 4,
	LogLevel_Info = 8,
	LogLevel_Trace = 16,
	LogLevel_All = 31,
};

enum LogColor
{
	LogColor_Black = 0,
	LogColor_Blue = 1,
	LogColor_Green = 2,
	LogColor_Cyan = 3,
	LogColor_Red = 4,
	LogColor_Magenta = 5,
	LogColor_Brown = 6,
	LogColor_LightGrey = 7,
	LogColor_DarkGrey = 8,
	LogColor_LightBlue = 9,
	LogColor_LightGreen = 10,
	LogColor_LightCyan = 11,
	LogColor_LightRed = 12,
	LogColor_LightMagenta = 13,
	LogColor_Yellow = 14,
	LogColor_White = 15,
	LogColor_Blink = 128,
};

class Log
{
public:
	static bool Init(const char* file, LogLevel logLevel);
	static void Print(LogLevel type, LogColor color, char identifier, const char* svc, const char* msg);
	static void Debug(const char* svc, const char* msg, ...);
	static void Error(const char* svc, const char* msg, ...);
	static void Trace(const char* svc, const char* msg, ...);
	static void Info(const char* svc, const char* msg, ...);
	static void Warning(const char* svc, const char* msg, ...);
	static void Stop();

private:
	static void SetConsoleTextColor(uint8_t color);
	static void CreateConsole(const char* caption);
	static void ResizeConsole(int width, int height);

	static LogLevel logLevel;
	static FILE* fileStream;
	static bool enabled;
	static uint32_t queue;
};