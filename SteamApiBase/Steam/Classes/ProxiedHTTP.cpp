/*
	This project is released under the GPL 2.0 license.
	Please do no evil.
 
	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Notes:
 Interface to HTTP client.
	*/

#include "../../StdInc.h"


HTTPRequestHandle ProxiedHTTP::CreateHTTPRequest( EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL )
{
    HHSDBG();
    return NULL;
}

bool ProxiedHTTP::SetHTTPRequestContextValue( HTTPRequestHandle hRequest, uint64 ulContextValue )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::SetHTTPRequestNetworkActivityTimeout( HTTPRequestHandle hRequest, uint32 unTimeoutSeconds )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::SetHTTPRequestHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::SetHTTPRequestGetOrPostParameter( HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue )
{
    HHSDBG();
    return true;
}

bool ProxiedHTTP::SendHTTPRequest( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::SendHTTPRequestAndStreamResponse( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle )
{
    HHSDBG();
    return true;
}

bool ProxiedHTTP::DeferHTTPRequest( HTTPRequestHandle hRequest )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::PrioritizeHTTPRequest( HTTPRequestHandle hRequest )
{
    HHSDBG();
    return true;
}

bool ProxiedHTTP::GetHTTPResponseHeaderSize( HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::GetHTTPResponseHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::GetHTTPResponseBodySize( HTTPRequestHandle hRequest, uint32 *unBodySize )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::GetHTTPResponseBodyData( HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::GetHTTPStreamingResponseBodyData( HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize )
{
    HHSDBG();
    return true;
}

bool ProxiedHTTP::ReleaseHTTPRequest( HTTPRequestHandle hRequest )
{
    HHSDBG();
    return true;
}

bool ProxiedHTTP::GetHTTPDownloadProgressPct( HTTPRequestHandle hRequest, float *pflPercentOut )
{
    HHSDBG();
    return true;
}
bool ProxiedHTTP::SetHTTPRequestRawPostBody( HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen )
{
    HHSDBG();
    return true;
}