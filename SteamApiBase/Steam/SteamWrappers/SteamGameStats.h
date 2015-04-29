/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Notes:
		Functions for recording game play sessions and details thereof.
*/

#pragma once

#pragma region SteamGameStats001
class SteamGameStats001 : public ISteamGameStats001
{
public:
    SteamAPICall_t GetNewSession( int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted );
    SteamAPICall_t EndSession( uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode );
    EResult AddSessionAttributeInt( uint64 ulSessionID, const char* pstrName, int32 nData );
    EResult AddSessionAttributeString( uint64 ulSessionID, const char* pstrName, const char *pstrData );
    EResult AddSessionAttributeFloat( uint64 ulSessionID, const char* pstrName, float fData );
    
    EResult AddNewRow( uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName );
    EResult CommitRow( uint64 ulRowID );
    EResult CommitOutstandingRows( uint64 ulSessionID );
    EResult AddRowAttributeInt( uint64 ulRowID, const char *pstrName, int32 nData );
    EResult AddRowAtributeString( uint64 ulRowID, const char *pstrName, const char *pstrData );
    EResult AddRowAttributeFloat( uint64 ulRowID, const char *pstrName, float fData );
    
    EResult AddSessionAttributeInt64( uint64 ulSessionID, const char *pstrName, int64 llData );
    EResult AddRowAttributeInt64( uint64 ulRowID, const char *pstrName, int64 llData );
};
#pragma endregion