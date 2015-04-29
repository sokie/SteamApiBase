/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
	Information about the game.
	*/
#include "..\..\StdInc.h"

#pragma region SteamGameCoordinator001
EGCResults SteamGameCoordinator001::SendMessage( uint32 unMsgType, const void *pubData, uint32 cubData )
{
	return ProxiedGameCoordinator::SendMessage(unMsgType, pubData, cubData);
}
    
bool SteamGameCoordinator001::IsMessageAvailable( uint32 *pcubMsgSize )
{
    return ProxiedGameCoordinator::IsMessageAvailable(pcubMsgSize);
}

EGCResults SteamGameCoordinator001::RetrieveMessage( uint32 *punMsgType, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize )
{
    return ProxiedGameCoordinator::RetrieveMessage( punMsgType, pubDest, cubDest, pcubMsgSize);
}
#pragma endregion