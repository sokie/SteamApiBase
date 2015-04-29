/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Variables that can be used anywhere.
*/

#include "..\STDInc.h"

namespace Global
{
	// Game information.
	std::vector<std::string> Game_Argv;
	char			Game_BinaryName[64]{};
	std::string		Game_Commandline;

	// Steam information.
	char			Steam_Username[16]{};
	char			Steam_Language[16]{};
	uint64_t		Steam_UserID = 0;
	bool			Steam_Offline = false;
	bool			Steam_Dedicated = false;
	uint32_t		Steam_AppID = 0;

	// Performance.
	std::chrono::high_resolution_clock::time_point StartupPoint = std::chrono::high_resolution_clock::now();
}
