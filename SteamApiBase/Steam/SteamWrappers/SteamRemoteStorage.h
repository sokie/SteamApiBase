/*
	This project is released under the GPL 2.0 license.
	Please do no evil.
 
	Initial author: (https://github.com/)Sokie
	Started: 2015-04-28
	Notes:
	Remote storage class.
 */

#pragma once

#pragma region SteamRemoteStorage001
class SteamRemoteStorage001 : public ISteamRemoteStorage001
{
public:
    bool FileWrite( const char *filename, void  const *data, int );
    
    uint32 GetFileSize( const char *filename );
    
    bool FileRead( const char *filename, void *buffer, int size );
    
    bool FileExists( const char *filename );
    OBSOLETE_FUNCTION bool FileDelete( const char *filename );
    
    uint32 GetFileCount();
    
    const char *GetFileNameAndSize( int index, int *size ) ;
    
    bool GetQuota( int *current, int *maximum );
};
#pragma endregion

#pragma region SteamRemoteStorage002
class SteamRemoteStorage002 : public ISteamRemoteStorage002
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	GetFileSize( const char *pchFile );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileExists( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // quota management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
};
#pragma endregion

#pragma region SteamRemoteStorage003
class SteamRemoteStorage003 : public ISteamRemoteStorage003
{
public:
    bool FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32 FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    
    bool FileForget( const char *pchFile );
    bool FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    
    // file information
    bool FileExists( const char *pchFile );
    bool FilePersisted( const char *pchFile );
    int32 GetFileSize( const char *pchFile );
    int64 GetFileTimestamp( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledThisApp();
    bool SetCloudEnabledThisApp( bool bEnable );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a Deprecated_RemoteStorageDownloadUGCResult_t callback
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    virtual	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
};
#pragma endregion

#pragma region SteamRemoteStorage004

class SteamRemoteStorage004 : public ISteamRemoteStorage004
{
public:
    // file operations
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a Deprecated_RemoteStorageDownloadUGCResult_t callback
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    virtual	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
};

#pragma endregion

#pragma region SteamRemoteStorage005

class SteamRemoteStorage005 : public ISteamRemoteStorage005
{
public:
    // file operations
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    virtual	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t	PublishFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t	PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, SteamParamStringArray_t *pTags );
    SteamAPICall_t	UpdatePublishedFile( RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest );
    SteamAPICall_t	GetPublishedFileDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t	DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t	EnumerateUserPublishedFiles( uint32 unStartIndex );
    SteamAPICall_t	SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t	EnumerateUserSubscribedFiles( uint32 unStartIndex );
    SteamAPICall_t	UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
};

#pragma endregion

#pragma region SteamRemoteStorage006
class SteamRemoteStorage006 : public ISteamRemoteStorage006
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    virtual	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( const char *cszFileName, const char *cszPreviewFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
};
#pragma endregion

#pragma region SteamRemoteStorage007
class SteamRemoteStorage007 : public ISteamRemoteStorage007
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    virtual	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
};
#pragma endregion

#pragma region SteamRemoteStorage008
class SteamRemoteStorage008 : public ISteamRemoteStorage008
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    GID_t FileWriteStreamOpen( const char *pchFile );
    EResult FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData );
    EResult FileWriteStreamClose( GID_t hStream );
    EResult FileWriteStreamCancel( GID_t hStream );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
};
#pragma endregion

#pragma region SteamRemoteStorage009
class SteamRemoteStorage009 : public ISteamRemoteStorage009
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    GID_t FileWriteStreamOpen( const char *pchFile );
    EResult FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData );
    EResult FileWriteStreamClose( GID_t hStream );
    EResult FileWriteStreamCancel( GID_t hStream );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
};
#pragma endregion

#pragma region SteamRemoteStorage010
class SteamRemoteStorage010 : public ISteamRemoteStorage010
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    GID_t FileWriteStreamOpen( const char *pchFile );
    EResult FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData );
    EResult FileWriteStreamClose( GID_t hStream );
    EResult FileWriteStreamCancel( GID_t hStream );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent, uint32 uUnk ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
    
    SteamAPICall_t UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk );
};
#pragma endregion

#pragma region SteamRemoteStorage011
class SteamRemoteStorage011 : public ISteamRemoteStorage011
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    GID_t FileWriteStreamOpen( const char *pchFile );
    EResult FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData );
    EResult FileWriteStreamClose( GID_t hStream );
    EResult FileWriteStreamCancel( GID_t hStream );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent, uint32 uUnk ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId, uint32 );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
    
    SteamAPICall_t UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk );
};
#pragma endregion

#pragma region SteamRemoteStorage012
class SteamRemoteStorage012 : public ISteamRemoteStorage012
{
public:
    bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData );
    int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead );
    bool	FileForget( const char *pchFile );
    bool	FileDelete( const char *pchFile );
    SteamAPICall_t FileShare( const char *pchFile );
    bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform );
    
    GID_t FileWriteStreamOpen( const char *pchFile );
    EResult FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData );
    EResult FileWriteStreamClose( GID_t hStream );
    EResult FileWriteStreamCancel( GID_t hStream );
    
    // file information
    bool	FileExists( const char *pchFile );
    bool	FilePersisted( const char *pchFile );
    int32	GetFileSize( const char *pchFile );
    int64	GetFileTimestamp( const char *pchFile );
    ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile );
    
    // iteration
    int32 GetFileCount();
    const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes );
    
    // configuration management
    bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes );
    bool IsCloudEnabledForAccount();
    bool IsCloudEnabledForApp();
    void SetCloudEnabledForApp( bool bEnabled );
    
    // user generated content
    SteamAPICall_t UGCDownload( UGCHandle_t hContent, uint32 uUnk ); // Returns a RemoteStorageDownloadUGCResult_t callback
    bool GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes );
    bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner );
    int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction );
    
    // user generated content iteration
    int32	GetCachedUGCCount();
    UGCHandle_t GetCachedUGCHandle( int32 iCachedContent );
    
    // publishing UGC
    SteamAPICall_t PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType );
    JobID_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId );
    bool UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile );
    bool UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile );
    bool UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle );
    bool UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription );
    bool UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility );
    bool UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags );
    SteamAPICall_t CommitPublishedFileUpdate( JobID_t hUpdateRequest );
    
    SteamAPICall_t GetPublishedFileDetails( PublishedFileId_t unPublishedFileId, uint32 );
    SteamAPICall_t DeletePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserPublishedFiles( uint32 uStartIndex );
    SteamAPICall_t SubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSubscribedFiles( uint32 uStartIndex );
    SteamAPICall_t UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId );
    
    bool UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription );
    SteamAPICall_t GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp );
    SteamAPICall_t GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId );
    SteamAPICall_t EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags );
    SteamAPICall_t PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags );
    SteamAPICall_t SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction );
    SteamAPICall_t EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex );
    SteamAPICall_t EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags );
    
    SteamAPICall_t UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk );
};
#pragma endregion