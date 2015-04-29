/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedGameCoordinator
{
public:
    // sends a message to the Game Coordinator
    static EGCResults SendMessage( uint32 unMsgType, const void *pubData, uint32 cubData );
    
    // returns true if there is a message waiting from the game coordinator
    static bool IsMessageAvailable( uint32 *pcubMsgSize );
    
    // fills the provided buffer with the first message in the queue and returns k_EGCResultOK or
    // returns k_EGCResultNoMessage if there is no message waiting. pcubMsgSize is filled with the message size.
    // If the provided buffer is not large enough to fit the entire message, k_EGCResultBufferTooSmall is returned
    // and the message remains at the head of the queue.
    static EGCResults RetrieveMessage( uint32 *punMsgType, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize );
};
