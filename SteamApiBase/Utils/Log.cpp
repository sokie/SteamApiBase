#include "..\STDInc.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <sys/stat.h>
#include <list>
#include <map>

bool Log::Init(const char* file, LogLevel logLevel)
{
	fileStream = fopen(file, "wb");

	if (fileStream == NULL)
	{
		return false;
	}

	enabled = true;

	CreateConsole("hAPI - Debug");
	ResizeConsole(80, 32766);

	Log::logLevel = logLevel;

	return true;
}

void Log::Print(LogLevel type, LogColor color, char identifier, const char* svc, const char* msg)
{
	if (enabled == false)
	{
		return;
	}

	if ((type & logLevel) == 0)
	{
		return;
	}

	while (queue > 0)Sleep(1);

	queue++;

	char time[9];

	_strtime(time);
	SetConsoleTextColor(LogColor_DarkGrey);

	printf("%s", time);
	fprintf(fileStream, "%s", time);

	SetConsoleTextColor(color);

	printf(" %c ", identifier);
	fprintf(fileStream, " %c ", identifier);

	SetConsoleTextColor(LogColor_White);

	printf("%s: ", svc);
	fprintf(fileStream, "%s: ", svc);

	SetConsoleTextColor(color);

	printf("%s\r\n", msg);
	fprintf(fileStream, "%s\r\n", msg);

	fflush(fileStream);

	queue--;
}

void Log::Debug(const char* svc, const char* msg, ...)
{
	char logline[1024];

	va_list argumentList;
	va_start(argumentList, msg);

	vsnprintf(logline, 1024, msg, argumentList);

	va_end(argumentList);

	Print(LogLevel_Debug, LogColor_LightCyan, 'D', svc, logline);
}

void Log::Error(const char* svc, const char* msg, ...)
{
	char logline[1024];

	va_list argumentList;
	va_start(argumentList, msg);

	vsnprintf(logline, 1024, msg, argumentList);

	va_end(argumentList);

	Print(LogLevel_Error, LogColor_Red, 'E', svc, logline);
}

void Log::Info(const char* svc, const char* msg, ...)
{
	char logline[1024];

	va_list argumentList;
	va_start(argumentList, msg);

	vsnprintf(logline, 1024, msg, argumentList);

	va_end(argumentList);

	Print(LogLevel_Info, LogColor_LightGrey, 'I', svc, logline);
}

void Log::Trace(const char* svc, const char* msg, ...)
{
	char logline[1024];

	va_list argumentList;
	va_start(argumentList, msg);

	vsnprintf(logline, 1024, msg, argumentList);

	va_end(argumentList);

	Print(LogLevel_Trace, LogColor_DarkGrey, 'T', svc, logline);
}

void Log::Warning(const char* svc, const char* msg, ...)
{
	char logline[1024];

	va_list argumentList;
	va_start(argumentList, msg);

	vsnprintf(logline, 1024, msg, argumentList);

	va_end(argumentList);

	Print(LogLevel_Warning, LogColor_Yellow, 'W', svc, logline);
}

void Log::Stop()
{
	if (enabled == false)
	{
		return;
	}

	while (queue > 0);

	fclose(fileStream);

	enabled = false;
}

void Log::SetConsoleTextColor(uint8_t color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Log::ResizeConsole(int width, int height)
{
	COORD c = { width, height };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(handle, c);
}

void Log::CreateConsole(LPCSTR caption)
{
	AllocConsole();
	AttachConsole(GetCurrentProcessId());
	freopen("CON", "w", stdout); //-V530
	SetConsoleTitleA(caption);
}

LogLevel Log::logLevel = LogLevel_None;
FILE* Log::fileStream = NULL;
bool Log::enabled = false;
uint32_t Log::queue = 0;