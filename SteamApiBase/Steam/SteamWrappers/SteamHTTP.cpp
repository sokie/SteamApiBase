/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Notes:
        Interface to HTTP client.
	*/
#include "..\..\StdInc.h"

#pragma region SteamHTTP001
HTTPRequestHandle SteamHTTP001::CreateHTTPRequest( EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL )
{
    return ProxiedHTTP::CreateHTTPRequest(eHTTPRequestMethod, pchAbsoluteURL);
}

bool SteamHTTP001::SetHTTPRequestContextValue( HTTPRequestHandle hRequest, uint64 ulContextValue )
{
    return ProxiedHTTP::SetHTTPRequestContextValue(hRequest, ulContextValue);
}

bool SteamHTTP001::SetHTTPRequestNetworkActivityTimeout( HTTPRequestHandle hRequest, uint32 unTimeoutSeconds )
{
    return ProxiedHTTP::SetHTTPRequestNetworkActivityTimeout(hRequest, unTimeoutSeconds);
}

bool SteamHTTP001::SetHTTPRequestHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue )
{
    return ProxiedHTTP::SetHTTPRequestHeaderValue(hRequest, pchHeaderName, pchHeaderValue);
}

bool SteamHTTP001::SetHTTPRequestGetOrPostParameter( HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue )
{
    return ProxiedHTTP::SetHTTPRequestGetOrPostParameter(hRequest, pchParamName, pchParamValue);
}

bool SteamHTTP001::SendHTTPRequest( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle )
{
    return ProxiedHTTP::SendHTTPRequest(hRequest, pCallHandle);
}

bool SteamHTTP001::DeferHTTPRequest( HTTPRequestHandle hRequest )
{
    return ProxiedHTTP::DeferHTTPRequest(hRequest);
}

bool SteamHTTP001::PrioritizeHTTPRequest( HTTPRequestHandle hRequest )
{
    return ProxiedHTTP::PrioritizeHTTPRequest(hRequest);
}

bool SteamHTTP001::GetHTTPResponseHeaderSize( HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize )
{
    return ProxiedHTTP::GetHTTPResponseHeaderSize(hRequest, pchHeaderName, unResponseHeaderSize);
}

bool SteamHTTP001::GetHTTPResponseHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize )
{
    return ProxiedHTTP::GetHTTPResponseHeaderValue(hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}

bool SteamHTTP001::GetHTTPResponseBodySize( HTTPRequestHandle hRequest, uint32 *unBodySize )
{
    return ProxiedHTTP::GetHTTPResponseBodySize(hRequest, unBodySize);
}

bool SteamHTTP001::GetHTTPResponseBodyData( HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize )
{
    return ProxiedHTTP::GetHTTPResponseBodyData(hRequest, pBodyDataBuffer, unBufferSize);
}

bool SteamHTTP001::ReleaseHTTPRequest( HTTPRequestHandle hRequest )
{
    return ProxiedHTTP::ReleaseHTTPRequest(hRequest);
}

bool SteamHTTP001::GetHTTPDownloadProgressPct( HTTPRequestHandle hRequest, float *pflPercentOut )
{
    return ProxiedHTTP::GetHTTPDownloadProgressPct(hRequest, pflPercentOut);
}

bool SteamHTTP001::SetHTTPRequestRawPostBody( HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen )
{
    return ProxiedHTTP::SetHTTPRequestRawPostBody(hRequest, pchContentType, pubBody, unBodyLen);
}
#pragma endregion

#pragma region SteamHTTP002
HTTPRequestHandle SteamHTTP002::CreateHTTPRequest( EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL )
{
    return ProxiedHTTP::CreateHTTPRequest(eHTTPRequestMethod, pchAbsoluteURL);
}

bool SteamHTTP002::SetHTTPRequestContextValue( HTTPRequestHandle hRequest, uint64 ulContextValue )
{
    return ProxiedHTTP::SetHTTPRequestContextValue(hRequest, ulContextValue);
}

bool SteamHTTP002::SetHTTPRequestNetworkActivityTimeout( HTTPRequestHandle hRequest, uint32 unTimeoutSeconds )
{
    return ProxiedHTTP::SetHTTPRequestNetworkActivityTimeout(hRequest, unTimeoutSeconds);
}

bool SteamHTTP002::SetHTTPRequestHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue )
{
    return ProxiedHTTP::SetHTTPRequestHeaderValue(hRequest, pchHeaderName, pchHeaderValue);
}

bool SteamHTTP002::SetHTTPRequestGetOrPostParameter( HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue )
{
    return ProxiedHTTP::SetHTTPRequestGetOrPostParameter(hRequest, pchParamName, pchParamValue);
}

bool SteamHTTP002::SendHTTPRequest( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle )
{
    return ProxiedHTTP::SendHTTPRequest(hRequest, pCallHandle);
}

bool SteamHTTP002::SendHTTPRequestAndStreamResponse( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle )
{
    return ProxiedHTTP::SendHTTPRequestAndStreamResponse(hRequest, pCallHandle);
}

bool SteamHTTP002::DeferHTTPRequest( HTTPRequestHandle hRequest )
{
    return ProxiedHTTP::DeferHTTPRequest(hRequest);
}

bool SteamHTTP002::PrioritizeHTTPRequest( HTTPRequestHandle hRequest )
{
    return ProxiedHTTP::PrioritizeHTTPRequest(hRequest);
}

bool SteamHTTP002::GetHTTPResponseHeaderSize( HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize )
{
    return ProxiedHTTP::GetHTTPResponseHeaderSize(hRequest, pchHeaderName, unResponseHeaderSize);
}

bool SteamHTTP002::GetHTTPResponseHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize )
{
    return ProxiedHTTP::GetHTTPResponseHeaderValue(hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}

bool SteamHTTP002::GetHTTPResponseBodySize( HTTPRequestHandle hRequest, uint32 *unBodySize )
{
    return ProxiedHTTP::GetHTTPResponseBodySize(hRequest, unBodySize);
}

bool SteamHTTP002::GetHTTPResponseBodyData( HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize )
{
    return ProxiedHTTP::GetHTTPResponseBodyData(hRequest, pBodyDataBuffer, unBufferSize);
}

bool SteamHTTP002::GetHTTPStreamingResponseBodyData( HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize )
{
    return ProxiedHTTP::GetHTTPStreamingResponseBodyData(hRequest, cOffset, pBodyDataBuffer, unBufferSize);
}

bool SteamHTTP002::ReleaseHTTPRequest( HTTPRequestHandle hRequest )
{
    return ProxiedHTTP::ReleaseHTTPRequest(hRequest);
}

bool SteamHTTP002::GetHTTPDownloadProgressPct( HTTPRequestHandle hRequest, float *pflPercentOut )
{
    return ProxiedHTTP::GetHTTPDownloadProgressPct(hRequest, pflPercentOut);
}

bool SteamHTTP002::SetHTTPRequestRawPostBody( HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen )
{
    return ProxiedHTTP::SetHTTPRequestRawPostBody(hRequest, pchContentType, pubBody, unBodyLen);
}
#pragma endregion