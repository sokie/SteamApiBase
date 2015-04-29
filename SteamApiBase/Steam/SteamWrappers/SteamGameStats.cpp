/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Notes:
	Functions for recording game play sessions and details thereof
	*/
#include "..\..\StdInc.h"

#pragma region SteamGameStats001
SteamAPICall_t SteamGameStats001::GetNewSession( int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted )
{
    return ProxiedGameStats::GetNewSession(nAccountType, ulAccountID, nAppID, rtTimeStarted);
}
SteamAPICall_t SteamGameStats001::EndSession( uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode )
{
    return ProxiedGameStats::EndSession(ulSessionID, rtTimeEnded, nReasonCode);
}
EResult SteamGameStats001::AddSessionAttributeInt( uint64 ulSessionID, const char* pstrName, int32 nData )
{
    return ProxiedGameStats::AddSessionAttributeInt(ulSessionID, pstrName, nData);
}
EResult SteamGameStats001::AddSessionAttributeString( uint64 ulSessionID, const char* pstrName, const char *pstrData )
{
    return ProxiedGameStats::AddSessionAttributeString(ulSessionID, pstrName, pstrData);
}
EResult SteamGameStats001::AddSessionAttributeFloat( uint64 ulSessionID, const char* pstrName, float fData )
{
    return ProxiedGameStats::AddSessionAttributeFloat(ulSessionID, pstrName, fData);
}

EResult SteamGameStats001::AddNewRow( uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName )
{
    return ProxiedGameStats::AddNewRow(pulRowID, ulSessionID, pstrTableName);
}
EResult SteamGameStats001::CommitRow( uint64 ulRowID )
{
    return ProxiedGameStats::CommitRow(ulRowID);
}
EResult SteamGameStats001::CommitOutstandingRows( uint64 ulSessionID )
{
    return ProxiedGameStats::CommitOutstandingRows(ulSessionID);
}
EResult SteamGameStats001::AddRowAttributeInt( uint64 ulRowID, const char *pstrName, int32 nData )
{
    return ProxiedGameStats::AddRowAttributeInt(ulRowID, pstrName, nData);
}
EResult SteamGameStats001::AddRowAtributeString( uint64 ulRowID, const char *pstrName, const char *pstrData )
{
    return ProxiedGameStats::AddRowAtributeString(ulRowID, pstrName, pstrData);
}
EResult SteamGameStats001::AddRowAttributeFloat( uint64 ulRowID, const char *pstrName, float fData )
{
    return ProxiedGameStats::AddRowAttributeFloat(ulRowID, pstrName, fData);
}

EResult SteamGameStats001::AddSessionAttributeInt64( uint64 ulSessionID, const char *pstrName, int64 llData )
{
    return ProxiedGameStats::AddSessionAttributeInt64(ulSessionID, pstrName, llData);
}
EResult SteamGameStats001::AddRowAttributeInt64( uint64 ulRowID, const char *pstrName, int64 llData )
{
    return ProxiedGameStats::AddRowAttributeInt64(ulRowID, pstrName, llData);
}
#pragma endregion