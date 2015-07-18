/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Sokie
	Started: 2015-04-28
	Notes:
	Remote storage class.
*/

#include "../../StdInc.h"

std::vector<std::string> ProxiedRemoteStorage::Results;

void ProxiedRemoteStorage::CreateDir(std::string Path, bool isFile)
{
	char opath[MAX_PATH];
	char *p;
	size_t len;

	if (isFile)
	{
		if (Path.find_last_of("/\\") != std::string::npos) Path = Path.substr(0, Path.find_last_of("/\\"));
		else return;
	}

	strncpy_s(opath, Path.c_str(), sizeof(opath));
	len = strlen(opath);

	if (opath[len - 1] == L'/')
	{
		opath[len - 1] = L'\0';
	}

	for (p = opath; *p; p++)
	{
		if (*p == L'/' || *p == L'\\')
		{
			*p = L'\0';

			if (_access(opath, 0))
			{
				_mkdir(opath);
			}

			*p = L'\\';
		}
	}

	if (_access(opath, 0))
	{
		_mkdir(opath);
	}
}

bool ProxiedRemoteStorage::FileWrite( const char *pchFile, const void *pvData, int32 cubData )
{
    HHSDBG();

	ProxiedRemoteStorage::CreateDir("storage\\", true);

	std::string FilePath;

	FilePath.append("storage\\");
	FilePath.append(pchFile);

	std::ofstream File(FilePath, std::ios::binary);

	File.write((const char *)pvData, cubData);
	File.close();

	return true;
}
int32 ProxiedRemoteStorage::FileRead( const char *pchFile, void *pvData, int32 cubDataToRead )
{
    HHSDBG();

	std::string FilePath;

	FilePath.append("storage\\");
	FilePath.append(pchFile);

	std::ifstream File(FilePath, std::ios::binary);
	int64_t ReadSize = min(cubDataToRead, GetFileSize(FilePath.c_str()));
	cubDataToRead = (uint32_t)ReadSize;
	File.read((char *)pvData, ReadSize);
	return cubDataToRead;
}
bool ProxiedRemoteStorage::FileForget( const char *pchFile )
{
    HHSDBG();
    return true;
}
bool ProxiedRemoteStorage::FileDelete( const char *pchFile )
{
    HHSDBG();
	if (pchFile != NULL && remove(pchFile))
	{
		return true;
	}
	return false;
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
	std::string FilePath;

	FilePath.append("storage\\");
	FilePath.append(pchFile);

	return (GetFileAttributesA(FilePath.c_str()) != INVALID_FILE_ATTRIBUTES);
}
bool ProxiedRemoteStorage::FilePersisted( const char *pchFile )
{
    HHSDBG();
    return true;
}
int32 ProxiedRemoteStorage::GetFileSize( const char *pchFile )
{
    HHSDBG();
	std::ifstream File(pchFile, std::ios::binary);
	std::streamsize Size = 0;

	File.seekg(0, std::ios::end);
	Size = File.tellg();
	File.seekg(0, std::ios::beg);

	File.close();
	return Size;
}
int64 ProxiedRemoteStorage::GetFileTimestamp( const char *pchFile )
{
    HHSDBG();
	HANDLE FileHandle = CreateFileA(pchFile, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	FILETIME CreationTime;

	GetFileTime(FileHandle, &CreationTime, NULL, NULL);
	CloseHandle(FileHandle);

	return (*(uint64_t *)&CreationTime / 10000000 - 11644473600LL);
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
	ListFiles("storage\\");
	return Results.size();
}
const char *ProxiedRemoteStorage::GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes )
{
    HHSDBG();
	ListFiles("storage\\");

	std::string fileName = ProxiedRemoteStorage::Results.at(iFile);
	std::ifstream File(fileName, std::ios::binary);
	std::streamsize Size = 0;

	File.seekg(0, std::ios::end);
	Size = File.tellg();
	File.seekg(0, std::ios::beg);

	File.close();
	*pnFileSizeInBytes = Size;

	return fileName.c_str();
}

bool ProxiedRemoteStorage::ListFiles(std::string Path)
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;
	bool Result = false;

	ProxiedRemoteStorage::Results.clear();

	// Append trailing slash.
	if (Path.back() != '\\')
	{
		Path.append("\\");
	}

	// Filename.
	Path.append("*");

	hFind = FindFirstFileA(Path.c_str(), &FindFileData);

	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			// If not a directory.
			if (!(FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
			{
				ProxiedRemoteStorage::Results.push_back(FindFileData.cFileName);
				Result = true;
			}
		} while (FindNextFileA(hFind, &FindFileData));
		FindClose(hFind);
	}

	return Result;
}

// configuration management
bool ProxiedRemoteStorage::GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes )
{
    HHSDBG();
	*pnTotalBytes = 0x10000000;
	*puAvailableBytes = 0x10000000;
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