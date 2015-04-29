/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-28
	Notes:
	Remote storage class.
*/

#include "../../StdInc.h"

bool ProxiedRemoteStorage::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    HHSDBG();
    return true;
}
int32 ProxiedRemoteStorage::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    HHSDBG();
    return 0;
}
bool ProxiedRemoteStorage::FileForget( const char *pchFile )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::FileDelete( const char *pchFile )
{
    HHSDBG();
    return true;
}
SteamAPICall_t ProxiedRemoteStorage::FileShare( const char *pchFile )
{
    HHSDBG();
    return NULL;
}
bool ProxiedRemoteStorage::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    HHSDBG();
    return true;
}

GID_t ProxiedRemoteStorage::FileWriteStreamOpen( const char *pchFile )
{
    HHSDBG();
    return NULL;
}
EResult ProxiedRemoteStorage::FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedRemoteStorage::FileWriteStreamClose( GID_t hStream )
{
    HHSDBG();
    return EResult::k_EResultOK;
}
EResult ProxiedRemoteStorage::FileWriteStreamCancel( GID_t hStream )
{
    HHSDBG();
    return EResult::k_EResultOK;
}

// file information
bool ProxiedRemoteStorage::FileExists( const char *pchFile )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::FilePersisted( const char *pchFile )
{
    HHSDBG();
    return true;
}
int32 ProxiedRemoteStorage::GetFileSize( const char *pchFile )
{
    HHSDBG();
    return 0;
}
int64 ProxiedRemoteStorage::GetFileTimestamp( const char *pchFile )
{
    HHSDBG();
    return 0;
}
ERemoteStoragePlatform ProxiedRemoteStorage::GetSyncPlatforms( const char *pchFile )
{
    HHSDBG();
	return ERemoteStoragePlatform::k_ERemoteStoragePlatformAll;
}

// iteration
int32 ProxiedRemoteStorage::GetFileCount()
{
    HHSDBG();
    return 0;
}
const char *ProxiedRemoteStorage::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    HHSDBG();
    return "";
}

// configuration management
bool ProxiedRemoteStorage::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::IsCloudEnabledForAccount()
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::IsCloudEnabledForApp()
{
    HHSDBG();
    return true;
}
void ProxiedRemoteStorage::SetCloudEnabledForApp( bool bEnabled )
{
    HHSDBG();
}

// user generated content
SteamAPICall_t ProxiedRemoteStorage::UGCDownload( UGCHandle_t hContent, uint32 uUnk )
{
    HHSDBG();
    return NULL;
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool ProxiedRemoteStorage::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
    HHSDBG();
    return true;
}
int32 ProxiedRemoteStorage::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction )
{
    HHSDBG();
    return 0;
}

// user generated content iteration
int32 ProxiedRemoteStorage::GetCachedUGCCount()
{
    HHSDBG();
    return 0;
}
UGCHandle_t ProxiedRemoteStorage::GetCachedUGCHandle( int32 iCachedContent )
{
    HHSDBG();
    return true;
}

// publishing UGC
SteamAPICall_t ProxiedRemoteStorage::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    HHSDBG();
    return NULL;
}
JobID_t ProxiedRemoteStorage::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    HHSDBG();
    return NULL;
}
bool ProxiedRemoteStorage::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    HHSDBG();
    return true;
}
SteamAPICall_t ProxiedRemoteStorage::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    HHSDBG();
    return NULL;
}

SteamAPICall_t ProxiedRemoteStorage::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId, uint32 )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    HHSDBG();
    return NULL;
}

bool ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    HHSDBG();
    return true;
}
SteamAPICall_t ProxiedRemoteStorage::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    HHSDBG();
    return NULL;
}
SteamAPICall_t ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    HHSDBG();
    return NULL;
}

SteamAPICall_t ProxiedRemoteStorage::UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk )
{
    HHSDBG();
    return NULL;
}