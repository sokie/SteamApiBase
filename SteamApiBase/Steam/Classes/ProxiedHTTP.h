/*
	This project is released under the GPL 2.0 license.
	Please do no evil.
 
	Initial author: (https://github.com/)Sokie
	Started: 2015-04-29
	Notes:
 Interface to HTTP client.
	*/

#pragma once

class ProxiedHTTP
{
public:
    // Initializes a new HTTP request, returning a handle to use in further operations on it.  Requires
    // the method (GET or POST) and the absolute URL for the request.  Only http requests (ie, not https) are
    // currently supported, so this string must start with http:// or https:// and should look like http://store.steampowered.com/app/250/
    // or such.
    static HTTPRequestHandle CreateHTTPRequest( EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL );
    
    // Set a context value for the request, which will be returned in the HTTPRequestCompleted_t callback after
    // sending the request.  This is just so the caller can easily keep track of which callbacks go with which request data.
    static bool SetHTTPRequestContextValue( HTTPRequestHandle hRequest, uint64 ulContextValue );
    
    // Set a timeout in seconds for the HTTP request, must be called prior to sending the request.  Default
    // timeout is 60 seconds if you don't call this.  Returns false if the handle is invalid, or the request
    // has already been sent.
    static bool SetHTTPRequestNetworkActivityTimeout( HTTPRequestHandle hRequest, uint32 unTimeoutSeconds );
    
    // Set a request header value for the request, must be called prior to sending the request.  Will
    // return false if the handle is invalid or the request is already sent.
    static bool SetHTTPRequestHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue );
    
    // Set a GET or POST parameter value on the request, which is set will depend on the EHTTPMethod specified
    // when creating the request.  Must be called prior to sending the request.  Will return false if the
    // handle is invalid or the request is already sent.
    static bool SetHTTPRequestGetOrPostParameter( HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue );
    
    // Sends the HTTP request, will return false on a bad handle, otherwise use SteamCallHandle to wait on
    // asyncronous response via callback.
    //
    // Note: If the user is in offline mode in Steam, then this will add a only-if-cached cache-control
    // header and only do a local cache lookup rather than sending any actual remote request.
    static bool SendHTTPRequest( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle );
    
    static bool SendHTTPRequestAndStreamResponse( HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle );
    
    // Defers a request you have sent, the actual HTTP client code may have many requests queued, and this will move
    // the specified request to the tail of the queue.  Returns false on invalid handle, or if the request is not yet sent.
    static bool DeferHTTPRequest( HTTPRequestHandle hRequest );
    
    // Prioritizes a request you have sent, the actual HTTP client code may have many requests queued, and this will move
    // the specified request to the head of the queue.  Returns false on invalid handle, or if the request is not yet sent.
    static bool PrioritizeHTTPRequest( HTTPRequestHandle hRequest );
    
    // Checks if a response header is present in a HTTP response given a handle from HTTPRequestCompleted_t, also
    // returns the size of the header value if present so the caller and allocate a correctly sized buffer for
    // GetHTTPResponseHeaderValue.
    static bool GetHTTPResponseHeaderSize( HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize );
    
    // Gets header values from a HTTP response given a handle from HTTPRequestCompleted_t, will return false if the
    // header is not present or if your buffer is too small to contain it's value.  You should first call
    // BGetHTTPResponseHeaderSize to check for the presence of the header and to find out the size buffer needed.
    static bool GetHTTPResponseHeaderValue( HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize );
    
    // Gets the size of the body data from a HTTP response given a handle from HTTPRequestCompleted_t, will return false if the
    // handle is invalid.
    static bool GetHTTPResponseBodySize( HTTPRequestHandle hRequest, uint32 *unBodySize );
    
    // Gets the body data from a HTTP response given a handle from HTTPRequestCompleted_t, will return false if the
    // handle is invalid or if the provided buffer is not the correct size.  Use BGetHTTPResponseBodySize first to find out
    // the correct buffer size to use.
    static bool GetHTTPResponseBodyData( HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize );
    
    static bool GetHTTPStreamingResponseBodyData( HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize );
    
    // Releases an HTTP response handle, should always be called to free resources after receiving a HTTPRequestCompleted_t
    // callback and finishing using the response.
    static bool ReleaseHTTPRequest( HTTPRequestHandle hRequest );
    
    // Gets progress on downloading the body for the request.  This will be zero unless a response header has already been
    // received which included a content-length field.  For responses that contain no content-length it will report
    // zero for the duration of the request as the size is unknown until the connection closes.
    static bool GetHTTPDownloadProgressPct( HTTPRequestHandle hRequest, float *pflPercentOut );
    
    // Sets the body for an HTTP Post request.  Will fail and return false on a GET request, and will fail if POST params
    // have already been set for the request.  Setting this raw body makes it the only contents for the post, the pchContentType
    // parameter will set the content-type header for the request so the server may know how to interpret the body.
    static bool SetHTTPRequestRawPostBody( HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen );
};
