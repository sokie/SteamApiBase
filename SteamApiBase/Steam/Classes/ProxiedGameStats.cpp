/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "../../StdInc.h"

SteamAPICall_t ProxiedGameStats::GetNewSession( int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedGameStats::EndSession( uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode )
{
    HHSDBG();
    return NULL;
}
EResult ProxiedGameStats::AddSessionAttributeInt( uint64 ulSessionID, const char* pstrName, int32 nData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::AddSessionAttributeString( uint64 ulSessionID, const char* pstrName, const char *pstrData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::AddSessionAttributeFloat( uint64 ulSessionID, const char* pstrName, float fData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}

EResult ProxiedGameStats::AddNewRow( uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::CommitRow( uint64 ulRowID )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::CommitOutstandingRows( uint64 ulSessionID )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::AddRowAttributeInt( uint64 ulRowID, const char *pstrName, int32 nData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::AddRowAtributeString( uint64 ulRowID, const char *pstrName, const char *pstrData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::AddRowAttributeFloat( uint64 ulRowID, const char *pstrName, float fData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}

EResult ProxiedGameStats::AddSessionAttributeInt64( uint64 ulSessionID, const char *pstrName, int64 llData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedGameStats::AddRowAttributeInt64( uint64 ulRowID, const char *pstrName, int64 llData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}