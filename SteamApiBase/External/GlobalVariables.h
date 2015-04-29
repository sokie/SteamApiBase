/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Variables that can be used anywhere.
*/

#pragma once

namespace Global
{
	// Game information.
	extern std::vector<std::string> Game_Argv;
	extern char			Game_BinaryName[64];
	extern std::string	Game_Commandline;

	// Steam information.
	extern char			Steam_Username[16];
	extern char			Steam_Language[16];
	extern uint64_t		Steam_UserID;
	extern bool			Steam_Offline;
	extern bool			Steam_Dedicated;
	extern uint32_t		Steam_AppID;

	// Performance.
	extern std::chrono::high_resolution_clock::time_point StartupPoint;
}
