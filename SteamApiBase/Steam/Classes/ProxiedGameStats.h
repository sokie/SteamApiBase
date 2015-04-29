/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#pragma once

class ProxiedGameStats
{
public:
    static SteamAPICall_t GetNewSession( int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted );
    static SteamAPICall_t EndSession( uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode );
    static EResult AddSessionAttributeInt( uint64 ulSessionID, const char* pstrName, int32 nData );
    static EResult AddSessionAttributeString( uint64 ulSessionID, const char* pstrName, const char *pstrData );
    static EResult AddSessionAttributeFloat( uint64 ulSessionID, const char* pstrName, float fData );
    
    static EResult AddNewRow( uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName );
    static EResult CommitRow( uint64 ulRowID );
    static EResult CommitOutstandingRows( uint64 ulSessionID );
    static EResult AddRowAttributeInt( uint64 ulRowID, const char *pstrName, int32 nData );
    static EResult AddRowAtributeString( uint64 ulRowID, const char *pstrName, const char *pstrData );
    static EResult AddRowAttributeFloat( uint64 ulRowID, const char *pstrName, float fData );
    
    static EResult AddSessionAttributeInt64( uint64 ulSessionID, const char *pstrName, int64 llData );
    static EResult AddRowAttributeInt64( uint64 ulRowID, const char *pstrName, int64 llData );
};
