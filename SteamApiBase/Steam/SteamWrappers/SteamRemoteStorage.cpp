/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-28
	Notes:
	Remote storage class.
	*/

#include "../../StdInc.h"

#pragma region SteamRemoteStorage001
bool SteamRemoteStorage001::FileWrite( const char *filename, void  const *data, int cubData )
{
    return ProxiedRemoteStorage::FileWrite(filename, data, cubData);
}

uint32 SteamRemoteStorage001::GetFileSize( const char *filename )
{
    return ProxiedRemoteStorage::GetFileSize(filename);
}

bool SteamRemoteStorage001::FileRead( const char *filename, void *buffer, int size )
{
    int32 len = ProxiedRemoteStorage::FileRead(filename, buffer, size);
	if (len > 0){
		return true;
	}
	return false;
}

bool SteamRemoteStorage001::FileExists( const char *filename )
{
    return ProxiedRemoteStorage::FileExists(filename);
}

OBSOLETE_FUNCTION bool SteamRemoteStorage001::FileDelete( const char *filename )
{
    return ProxiedRemoteStorage::FileDelete(filename);
}

uint32 SteamRemoteStorage001::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}

const char *SteamRemoteStorage001::GetFileNameAndSize( int index, int *size )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(index, size);
}

bool SteamRemoteStorage001::GetQuota( int *current, int *maximum )
{
    return ProxiedRemoteStorage::GetQuota(maximum, current);
}
#pragma endregion

#pragma region SteamRemoteStorage002
bool SteamRemoteStorage002::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage002::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int32 SteamRemoteStorage002::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage002::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}

// iteration
int32 SteamRemoteStorage002::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage002::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// quota management
bool SteamRemoteStorage002::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
#pragma endregion

#pragma region SteamRemoteStorage003
bool SteamRemoteStorage003::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage003::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}

bool SteamRemoteStorage003::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage003::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage003::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}

// file information
bool SteamRemoteStorage003::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage003::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage003::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage003::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}

// iteration
int32 SteamRemoteStorage003::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage003::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage003::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage003::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage003::IsCloudEnabledThisApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
bool SteamRemoteStorage003::SetCloudEnabledThisApp( bool bEnable )
{
    ProxiedRemoteStorage::SetCloudEnabledForApp(bEnable);
	return true;
}

// user generated content
SteamAPICall_t SteamRemoteStorage003::UGCDownload( UGCHandle_t hContent )
{
    //return ProxiedRemoteStorage::UGCDownload(hContent, 0);
    return NULL;
} // Returns a Deprecated_RemoteStorageDownloadUGCResult_t callback

bool SteamRemoteStorage003::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
    return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage003::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, 0, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage003::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage003::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}
#pragma endregion

#pragma region SteamRemoteStorage004
// file operations
bool SteamRemoteStorage004::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage004::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage004::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage004::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage004::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage004::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

// file information
bool SteamRemoteStorage004::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage004::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage004::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage004::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage004::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage004::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage004::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage004::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage004::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage004::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage004::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage004::UGCDownload( UGCHandle_t hContent )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, 0);
} // Returns a Deprecated_RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage004::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
    return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage004::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, 0, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage004::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage004::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}
#pragma endregion

#pragma region SteamRemoteStorage005
// file operations
bool SteamRemoteStorage005::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage005::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage005::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage005::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage005::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage005::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

// file information
bool SteamRemoteStorage005::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage005::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage005::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage005::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage005::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage005::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage005::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage005::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage005::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage005::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage005::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage005::UGCDownload( UGCHandle_t hContent )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, 0);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage005::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
    return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage005::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, 0, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage005::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage005::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage005::PublishFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    //return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, 0);
	return NULL;
}
SteamAPICall_t SteamRemoteStorage005::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, SteamParamStringArray_t *pTags )
{
	//return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, 0, pTags, EWorkshopFileType);
	return NULL;
}

SteamAPICall_t SteamRemoteStorage005::UpdatePublishedFile( RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest )
{
    //TODO: changeme
    return NULL;
}
SteamAPICall_t SteamRemoteStorage005::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, 0);
}
SteamAPICall_t SteamRemoteStorage005::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage005::EnumerateUserPublishedFiles( uint32 unStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(unStartIndex);
}
SteamAPICall_t SteamRemoteStorage005::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage005::EnumerateUserSubscribedFiles( uint32 unStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(unStartIndex);
}
SteamAPICall_t SteamRemoteStorage005::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}
#pragma endregion

#pragma region SteamRemoteStorage006
bool SteamRemoteStorage006::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage006::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage006::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage006::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage006::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage006::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

// file information
bool SteamRemoteStorage006::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage006::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage006::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage006::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage006::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage006::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage006::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage006::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage006::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage006::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage006::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage006::UGCDownload( UGCHandle_t hContent )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, 0);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage006::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage006::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
    return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage006::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, 0, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage006::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage006::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage006::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage006::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage006::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage006::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage006::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage006::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage006::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage006::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage006::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage006::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, 0);
}
SteamAPICall_t SteamRemoteStorage006::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage006::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage006::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage006::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage006::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage006::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}
SteamAPICall_t SteamRemoteStorage006::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage006::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage006::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage006::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage006::PublishVideo( const char *cszFileName, const char *cszPreviewFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
	return ProxiedRemoteStorage::PublishVideo(EWorkshopVideoProvider::k_EWorkshopVideoProviderNone, "", "", cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage006::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage006::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage006::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}
#pragma endregion

#pragma region SteamRemoteStorage007
bool SteamRemoteStorage007::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage007::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage007::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage007::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage007::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage007::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

// file information
bool SteamRemoteStorage007::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage007::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage007::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage007::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage007::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage007::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage007::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage007::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage007::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage007::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage007::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage007::UGCDownload( UGCHandle_t hContent )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, 0);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage007::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage007::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
    return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage007::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, 0, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage007::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage007::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage007::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage007::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage007::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage007::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage007::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage007::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage007::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage007::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage007::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage007::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, 0);
}
SteamAPICall_t SteamRemoteStorage007::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage007::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage007::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage007::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage007::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage007::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}
SteamAPICall_t SteamRemoteStorage007::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage007::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage007::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage007::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage007::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::PublishVideo(eVideoProvider, cszVideoAccountName, cszVideoIdentifier, cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage007::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId,EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage007::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage007::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}
#pragma endregion

#pragma region SteamRemoteStorage008
bool SteamRemoteStorage008::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage008::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage008::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage008::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage008::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage008::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

GID_t SteamRemoteStorage008::FileWriteStreamOpen( const char *pchFile )
{
    return ProxiedRemoteStorage::FileWriteStreamOpen(pchFile);
}
EResult SteamRemoteStorage008::FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWriteStreamWriteChunk(hStream, pvData, cubData);
}
EResult SteamRemoteStorage008::FileWriteStreamClose( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamClose(hStream);
}
EResult SteamRemoteStorage008::FileWriteStreamCancel( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamCancel(hStream);
}

// file information
bool SteamRemoteStorage008::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage008::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage008::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage008::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage008::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage008::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage008::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage008::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage008::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage008::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage008::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage008::UGCDownload( UGCHandle_t hContent )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, 0);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage008::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage008::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
	return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage008::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, 0, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage008::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage008::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage008::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage008::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage008::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage008::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage008::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage008::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage008::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage008::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage008::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage008::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, 0);
}
SteamAPICall_t SteamRemoteStorage008::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage008::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage008::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage008::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage008::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage008::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}
SteamAPICall_t SteamRemoteStorage008::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage008::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage008::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage008::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage008::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::PublishVideo(eVideoProvider, cszVideoAccountName, cszVideoIdentifier, cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage008::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage008::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage008::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}
#pragma endregion

#pragma region SteamRemoteStorage009
bool SteamRemoteStorage009::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage009::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage009::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage009::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage009::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage009::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

GID_t SteamRemoteStorage009::FileWriteStreamOpen( const char *pchFile )
{
    return ProxiedRemoteStorage::FileWriteStreamOpen(pchFile);
}
EResult SteamRemoteStorage009::FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWriteStreamWriteChunk(hStream, pvData, cubData);
}
EResult SteamRemoteStorage009::FileWriteStreamClose( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamClose(hStream);
}
EResult SteamRemoteStorage009::FileWriteStreamCancel( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamCancel(hStream);
}

// file information
bool SteamRemoteStorage009::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage009::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage009::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage009::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage009::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage009::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage009::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage009::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage009::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage009::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage009::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage009::UGCDownload( UGCHandle_t hContent )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, 0);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage009::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage009::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
	return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage009::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, uOffset, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage009::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage009::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage009::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage009::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage009::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage009::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage009::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage009::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage009::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage009::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage009::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage009::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, 0);
}
SteamAPICall_t SteamRemoteStorage009::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage009::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage009::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage009::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage009::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage009::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}

SteamAPICall_t SteamRemoteStorage009::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage009::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage009::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage009::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage009::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::PublishVideo(eVideoProvider, cszVideoAccountName, cszVideoIdentifier, cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage009::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage009::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage009::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}
#pragma endregion

#pragma region SteamRemoteStorage010
bool SteamRemoteStorage010::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage010::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage010::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage010::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage010::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage010::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

GID_t SteamRemoteStorage010::FileWriteStreamOpen( const char *pchFile )
{
    return ProxiedRemoteStorage::FileWriteStreamOpen(pchFile);
}
EResult SteamRemoteStorage010::FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWriteStreamWriteChunk(hStream, pvData, cubData);
}
EResult SteamRemoteStorage010::FileWriteStreamClose( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamClose(hStream);
}
EResult SteamRemoteStorage010::FileWriteStreamCancel( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamCancel(hStream);
}

// file information
bool SteamRemoteStorage010::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage010::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage010::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage010::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage010::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage010::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage010::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage010::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage010::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage010::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage010::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage010::UGCDownload( UGCHandle_t hContent, uint32 uUnk )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, uUnk);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage010::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage010::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
	return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage010::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, uOffset, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage010::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage010::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage010::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage010::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage010::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage010::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage010::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage010::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage010::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage010::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage010::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage010::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, 0);
}
SteamAPICall_t SteamRemoteStorage010::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage010::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage010::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage010::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage010::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage010::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}
SteamAPICall_t SteamRemoteStorage010::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage010::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage010::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage010::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage010::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::PublishVideo(eVideoProvider, cszVideoAccountName, cszVideoIdentifier, cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage010::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage010::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage010::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}

SteamAPICall_t SteamRemoteStorage010::UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk )
{
    return ProxiedRemoteStorage::UGCDownloadToLocation(hContent, cszLocation, uUnk);
}
#pragma endregion

#pragma region SteamRemoteStorage011
bool SteamRemoteStorage011::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage011::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage011::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage011::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage011::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage011::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

GID_t SteamRemoteStorage011::FileWriteStreamOpen( const char *pchFile )
{
    return ProxiedRemoteStorage::FileWriteStreamOpen(pchFile);
}
EResult SteamRemoteStorage011::FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWriteStreamWriteChunk(hStream, pvData, cubData);
}
EResult SteamRemoteStorage011::FileWriteStreamClose( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamClose(hStream);
}
EResult SteamRemoteStorage011::FileWriteStreamCancel( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamCancel(hStream);
}

// file information
bool SteamRemoteStorage011::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage011::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage011::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage011::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage011::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage011::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage011::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage011::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage011::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage011::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage011::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage011::UGCDownload( UGCHandle_t hContent, uint32 uUnk )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, uUnk);
} // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage011::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage011::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
	return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage011::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset )
{
	return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, uOffset, EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished);
}

// user generated content iteration
int32 SteamRemoteStorage011::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage011::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage011::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage011::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage011::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage011::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage011::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage011::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage011::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage011::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage011::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage011::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
}
SteamAPICall_t SteamRemoteStorage011::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage011::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage011::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage011::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage011::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage011::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}
SteamAPICall_t SteamRemoteStorage011::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage011::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage011::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage011::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage011::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::PublishVideo(eVideoProvider, cszVideoAccountName, cszVideoIdentifier, cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage011::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage011::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage011::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}

SteamAPICall_t SteamRemoteStorage011::UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk )
{
    return ProxiedRemoteStorage::UGCDownloadToLocation(hContent, cszLocation, uUnk);
}
#pragma endregion

#pragma region SteamRemoteStorage012
bool SteamRemoteStorage012::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWrite(pchFile, pvData, cubData);
}
int32 SteamRemoteStorage012::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    return ProxiedRemoteStorage::FileRead(pchFile, pvData, cubDataToRead);
}
bool SteamRemoteStorage012::FileForget( const char *pchFile )
{
    return ProxiedRemoteStorage::FileForget(pchFile);
}
bool SteamRemoteStorage012::FileDelete( const char *pchFile )
{
    return ProxiedRemoteStorage::FileDelete(pchFile);
}
SteamAPICall_t SteamRemoteStorage012::FileShare( const char *pchFile )
{
    return ProxiedRemoteStorage::FileShare(pchFile);
}
bool SteamRemoteStorage012::SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform )
{
    return ProxiedRemoteStorage::SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

GID_t SteamRemoteStorage012::FileWriteStreamOpen( const char *pchFile )
{
    return ProxiedRemoteStorage::FileWriteStreamOpen(pchFile);
}
EResult SteamRemoteStorage012::FileWriteStreamWriteChunk( GID_t hStream, const void *pvData, int32 cubData )
{
    return ProxiedRemoteStorage::FileWriteStreamWriteChunk(hStream, pvData, cubData);
}
EResult SteamRemoteStorage012::FileWriteStreamClose( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamClose(hStream);
}
EResult SteamRemoteStorage012::FileWriteStreamCancel( GID_t hStream )
{
    return ProxiedRemoteStorage::FileWriteStreamCancel(hStream);
}

// file information
bool SteamRemoteStorage012::FileExists( const char *pchFile )
{
    return ProxiedRemoteStorage::FileExists(pchFile);
}
bool SteamRemoteStorage012::FilePersisted( const char *pchFile )
{
    return ProxiedRemoteStorage::FilePersisted(pchFile);
}
int32 SteamRemoteStorage012::GetFileSize( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileSize(pchFile);
}
int64 SteamRemoteStorage012::GetFileTimestamp( const char *pchFile )
{
    return ProxiedRemoteStorage::GetFileTimestamp(pchFile);
}
ERemoteStoragePlatform SteamRemoteStorage012::GetSyncPlatforms( const char *pchFile )
{
    return ProxiedRemoteStorage::GetSyncPlatforms(pchFile);
}

// iteration
int32 SteamRemoteStorage012::GetFileCount()
{
    return ProxiedRemoteStorage::GetFileCount();
}
const char *SteamRemoteStorage012::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    return ProxiedRemoteStorage::GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

// configuration management
bool SteamRemoteStorage012::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    return ProxiedRemoteStorage::GetQuota(pnTotalBytes, puAvailableBytes);
}
bool SteamRemoteStorage012::IsCloudEnabledForAccount()
{
    return ProxiedRemoteStorage::IsCloudEnabledForAccount();
}
bool SteamRemoteStorage012::IsCloudEnabledForApp()
{
    return ProxiedRemoteStorage::IsCloudEnabledForApp();
}
void SteamRemoteStorage012::SetCloudEnabledForApp( bool bEnabled )
{
    return ProxiedRemoteStorage::SetCloudEnabledForApp(bEnabled);
}

// user generated content
SteamAPICall_t SteamRemoteStorage012::UGCDownload( UGCHandle_t hContent, uint32 uUnk )
{
    return ProxiedRemoteStorage::UGCDownload(hContent, uUnk);
}  // Returns a RemoteStorageDownloadUGCResult_t callback
bool SteamRemoteStorage012::GetUGCDownloadProgress( UGCHandle_t hContent, uint32 *puDownloadedBytes, uint32 *puTotalBytes )
{
    return ProxiedRemoteStorage::GetUGCDownloadProgress(hContent, puDownloadedBytes, puTotalBytes);
}
bool SteamRemoteStorage012::GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner )
{
	return ProxiedRemoteStorage::GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}
int32 SteamRemoteStorage012::UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 uOffset, EUGCReadAction eAction )
{
    return ProxiedRemoteStorage::UGCRead(hContent, pvData, cubDataToRead, uOffset, eAction);
}

// user generated content iteration
int32 SteamRemoteStorage012::GetCachedUGCCount()
{
    return ProxiedRemoteStorage::GetCachedUGCCount();
}
UGCHandle_t SteamRemoteStorage012::GetCachedUGCHandle( int32 iCachedContent )
{
    return ProxiedRemoteStorage::GetCachedUGCHandle(iCachedContent);
}

// publishing UGC
SteamAPICall_t SteamRemoteStorage012::PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType )
{
    return ProxiedRemoteStorage::PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}
JobID_t SteamRemoteStorage012::CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::CreatePublishedFileUpdateRequest(unPublishedFileId);
}
bool SteamRemoteStorage012::UpdatePublishedFileFile( JobID_t hUpdateRequest, const char *pchFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFileFile(hUpdateRequest, pchFile);
}
bool SteamRemoteStorage012::UpdatePublishedFilePreviewFile( JobID_t hUpdateRequest, const char *pchPreviewFile )
{
    return ProxiedRemoteStorage::UpdatePublishedFilePreviewFile(hUpdateRequest, pchPreviewFile);
}
bool SteamRemoteStorage012::UpdatePublishedFileTitle( JobID_t hUpdateRequest, const char *pchTitle )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTitle(hUpdateRequest, pchTitle);
}
bool SteamRemoteStorage012::UpdatePublishedFileDescription( JobID_t hUpdateRequest, const char *pchDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileDescription(hUpdateRequest, pchDescription);
}
bool SteamRemoteStorage012::UpdatePublishedFileVisibility( JobID_t hUpdateRequest, ERemoteStoragePublishedFileVisibility eVisibility )
{
    return ProxiedRemoteStorage::UpdatePublishedFileVisibility(hUpdateRequest, eVisibility);
}
bool SteamRemoteStorage012::UpdatePublishedFileTags( JobID_t hUpdateRequest, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::UpdatePublishedFileTags(hUpdateRequest, pTags);
}
SteamAPICall_t SteamRemoteStorage012::CommitPublishedFileUpdate( JobID_t hUpdateRequest )
{
    return ProxiedRemoteStorage::CommitPublishedFileUpdate(hUpdateRequest);
}

SteamAPICall_t SteamRemoteStorage012::GetPublishedFileDetails( PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
    return ProxiedRemoteStorage::GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
}
SteamAPICall_t SteamRemoteStorage012::DeletePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::DeletePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage012::EnumerateUserPublishedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserPublishedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage012::SubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::SubscribePublishedFile(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage012::EnumerateUserSubscribedFiles( uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumerateUserSubscribedFiles(uStartIndex);
}
SteamAPICall_t SteamRemoteStorage012::UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::UnsubscribePublishedFile(unPublishedFileId);
}

bool SteamRemoteStorage012::UpdatePublishedFileSetChangeDescription( JobID_t hUpdateRequest, const char *cszDescription )
{
    return ProxiedRemoteStorage::UpdatePublishedFileSetChangeDescription(hUpdateRequest, cszDescription);
}
SteamAPICall_t SteamRemoteStorage012::GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage012::UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp )
{
    return ProxiedRemoteStorage::UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}
SteamAPICall_t SteamRemoteStorage012::GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId )
{
    return ProxiedRemoteStorage::GetUserPublishedItemVoteDetails(unPublishedFileId);
}
SteamAPICall_t SteamRemoteStorage012::EnumerateUserSharedWorkshopFiles( AppId_t nAppId, CSteamID creatorSteamID, uint32 uStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags )
{
    return ProxiedRemoteStorage::EnumerateUserSharedWorkshopFiles(nAppId, creatorSteamID, uStartIndex, pRequiredTags, pExcludedTags);
}
SteamAPICall_t SteamRemoteStorage012::PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *cszVideoAccountName, const char *cszVideoIdentifier, const char *cszFileName, AppId_t nConsumerAppId, const char *cszTitle, const char *cszDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags )
{
    return ProxiedRemoteStorage::PublishVideo(eVideoProvider, cszVideoAccountName, cszVideoIdentifier, cszFileName, nConsumerAppId, cszTitle, cszDescription, eVisibility, pTags);
}
SteamAPICall_t SteamRemoteStorage012::SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction )
{
    return ProxiedRemoteStorage::SetUserPublishedFileAction(unPublishedFileId, eAction);
}
SteamAPICall_t SteamRemoteStorage012::EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 uStartIndex )
{
    return ProxiedRemoteStorage::EnumeratePublishedFilesByUserAction(eAction, uStartIndex);
}
SteamAPICall_t SteamRemoteStorage012::EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eType, uint32 uStartIndex, uint32 cDays, uint32 cCount, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags )
{
    return ProxiedRemoteStorage::EnumeratePublishedWorkshopFiles(eType, uStartIndex, cDays, cCount, pTags, pUserTags);
}

SteamAPICall_t SteamRemoteStorage012::UGCDownloadToLocation( UGCHandle_t hContent, const char *cszLocation, uint32 uUnk )
{
    return ProxiedRemoteStorage::UGCDownloadToLocation(hContent, cszLocation, uUnk);
}
#pragma endregion