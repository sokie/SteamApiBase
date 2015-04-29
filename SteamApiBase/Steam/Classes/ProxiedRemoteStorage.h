/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-28
	Notes:
	Remote storage class.
*/

#pragma once

class ProxiedRemoteStorage
{
public:
    static bool    FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    static int32   FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    static bool    FileForget( const char *pchFile );
    static bool    FileDelete( const char *pchFile );
    static SteamAPICall_t FileShare( const char *pchFile );
    static bool    SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    static GID_t FileWriteStreamOpen( const char *pchFile );
    static EResult FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData );
    static EResult FileWriteStreamClose( GID_t hStream );
    static EResult FileWriteStreamCancel( GID_t hStream );
    
    // file information
    static bool    FileExists( const char *pchFile );
    static bool    FilePersisted( const char *pchFile );
    static int32   GetFileSize( const char *pchFile );
    static int64   GetFileTimestamp( const char *pchFile );
    static ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    static int32 GetFileCount();
    static const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    static bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    static bool IsCloudEnabledForAccount();
    static bool IsCloudEnabledForApp();
    static void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    static SteamAPICall_t UGCDownload( UGCHandle_t hContent, uint32 uUnk ); // Returns a RemoteStorageDownloadUGCResult_t callback
    static bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    static bool    GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    static int32   UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction );
    
    // user generated content iteration
    static int32   GetCachedUGCCount();
    static UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    static SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    static JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    static bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    static bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    static bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    static bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    static bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    static bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    static SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    static SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId, uint32 );
    static SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    static SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    static SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    static SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    static SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    static bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    static SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    static SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    static SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    static SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    static SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    static SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    static SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    static SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
    
    static SteamAPICall_t UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk );
};
