/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
	Information about the game.
	*/

#include "..\..\StdInc.h"

#pragma once

#pragma region SteamNetworking001

SNetListenSocket_t SteamNetworking001::CreateListenSocket(int nP2PPort, uint32 nIP, uint16 nPort)
{
	return ProxiedNetworking::CreateListenSocket(nP2PPort, nIP, nPort, false);
}

SNetSocket_t SteamNetworking001::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort, int nTimeoutSec)
{
	return ProxiedNetworking::CreateP2PConnectionSocket(steamIDTarget, nPort, nTimeoutSec, false);
}
SNetSocket_t SteamNetworking001::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
{
	return ProxiedNetworking::CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

bool SteamNetworking001::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking001::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking001::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
	return ProxiedNetworking::SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool SteamNetworking001::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool SteamNetworking001::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool SteamNetworking001::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool SteamNetworking001::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, NULL);
}

	// returns information about the specified socket, filling out the contents of the pointers
bool SteamNetworking001::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
	return ProxiedNetworking::GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool SteamNetworking001::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
	return ProxiedNetworking::GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

#pragma endregion

#pragma region SteamNetworking002

SNetListenSocket_t SteamNetworking002::CreateListenSocket(int nP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateListenSocket(nP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetSocket_t SteamNetworking002::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateP2PConnectionSocket(steamIDTarget, nPort, nTimeoutSec, bAllowUseOfPacketRelay);
}
SNetSocket_t SteamNetworking002::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
{
	return ProxiedNetworking::CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

bool SteamNetworking002::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking002::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking002::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
	return ProxiedNetworking::SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool SteamNetworking002::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool SteamNetworking002::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool SteamNetworking002::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool SteamNetworking002::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool SteamNetworking002::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, ESNetSocketState *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
	return ProxiedNetworking::GetSocketInfo(hSocket, pSteamIDRemote, (int*)peSocketStatus, punIPRemote, punPortRemote);
}

bool SteamNetworking002::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
	return ProxiedNetworking::GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

ESNetSocketConnectionType SteamNetworking002::GetSocketConnectionType(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetSocketConnectionType(hSocket);
}


int SteamNetworking002::GetMaxPacketSize(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetMaxPacketSize(hSocket);
}

#pragma endregion

#pragma region SteamNetworking003

bool SteamNetworking003::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType)
{
	return ProxiedNetworking::SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType);
}

	// returns true if any data is available for read, and the amount of data that will need to be read
bool SteamNetworking003::IsP2PPacketAvailable(uint32 *pcubMsgSize)
{
	return ProxiedNetworking::IsP2PPacketAvailable(pcubMsgSize);
}

bool SteamNetworking003::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote)
{
	return ProxiedNetworking::ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote);
}

bool SteamNetworking003::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
{
	return ProxiedNetworking::AcceptP2PSessionWithUser(steamIDRemote);
}

bool SteamNetworking003::CloseP2PSessionWithUser(CSteamID steamIDRemote)
{
	return ProxiedNetworking::CloseP2PSessionWithUser(steamIDRemote);
}

bool SteamNetworking003::GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
	return ProxiedNetworking::GetP2PSessionState(steamIDRemote, pConnectionState);
}

SNetListenSocket_t SteamNetworking003::CreateListenSocket(int nP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateListenSocket(nP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetSocket_t SteamNetworking003::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateP2PConnectionSocket(steamIDTarget, nPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

SNetSocket_t SteamNetworking003::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
{
	return ProxiedNetworking::CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

bool SteamNetworking003::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking003::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking003::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
	return ProxiedNetworking::SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool SteamNetworking003::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool SteamNetworking003::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool SteamNetworking003::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool SteamNetworking003::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool SteamNetworking003::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
	return ProxiedNetworking::GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool SteamNetworking003::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
	return ProxiedNetworking::GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

ESNetSocketConnectionType SteamNetworking003::GetSocketConnectionType(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetSocketConnectionType(hSocket);
}

int SteamNetworking003::GetMaxPacketSize(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetMaxPacketSize(hSocket);
}
#pragma endregion

#pragma region SteamNetworking004

bool SteamNetworking004::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iPort)
{
	return ProxiedNetworking::SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, iPort);
}

bool SteamNetworking004::IsP2PPacketAvailable(uint32 *pcubMsgSize, int iPort)
{
	return ProxiedNetworking::IsP2PPacketAvailable(pcubMsgSize, iPort);
}

bool SteamNetworking004::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iPort)
{
	return ProxiedNetworking::ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote, iPort);
}

bool SteamNetworking004::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
{
	return ProxiedNetworking::AcceptP2PSessionWithUser(steamIDRemote);
}

bool SteamNetworking004::CloseP2PSessionWithUser(CSteamID steamIDRemote)
{
	return ProxiedNetworking::CloseP2PSessionWithUser(steamIDRemote);
}

bool SteamNetworking004::GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
	return ProxiedNetworking::GetP2PSessionState(steamIDRemote, pConnectionState);
}

SNetListenSocket_t SteamNetworking004::CreateListenSocket(int nP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateListenSocket(nP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetSocket_t SteamNetworking004::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateP2PConnectionSocket(steamIDTarget, nPort, nTimeoutSec, bAllowUseOfPacketRelay);
}
SNetSocket_t SteamNetworking004::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
{
	return ProxiedNetworking::CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

bool SteamNetworking004::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroySocket(hSocket, bNotifyRemoteEnd);
}
bool SteamNetworking004::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking004::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
	return ProxiedNetworking::SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool SteamNetworking004::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool SteamNetworking004::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool SteamNetworking004::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool SteamNetworking004::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool SteamNetworking004::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
	return ProxiedNetworking::GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool SteamNetworking004::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
	return ProxiedNetworking::GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

ESNetSocketConnectionType SteamNetworking004::GetSocketConnectionType(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetSocketConnectionType(hSocket);
}

int SteamNetworking004::GetMaxPacketSize(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetMaxPacketSize(hSocket);
}
#pragma endregion

#pragma region SteamNetworking005

bool SteamNetworking005::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iPort)
{
	return ProxiedNetworking::SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, iPort);
}

bool SteamNetworking005::IsP2PPacketAvailable(uint32 *pcubMsgSize, int iPort)
{
	return ProxiedNetworking::IsP2PPacketAvailable(pcubMsgSize, iPort);
}

bool SteamNetworking005::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iPort)
{
	return ProxiedNetworking::ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote, iPort);
}

bool SteamNetworking005::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
{
	return ProxiedNetworking::AcceptP2PSessionWithUser(steamIDRemote);
}

bool SteamNetworking005::CloseP2PSessionWithUser(CSteamID steamIDRemote)
{
	return ProxiedNetworking::CloseP2PSessionWithUser(steamIDRemote);
}

bool SteamNetworking005::CloseP2PChannelWithUser(CSteamID steamIDRemote, int iPort)
{
	return ProxiedNetworking::CloseP2PChannelWithUser(steamIDRemote, iPort);
}

bool SteamNetworking005::GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
	return ProxiedNetworking::GetP2PSessionState(steamIDRemote, pConnectionState);
}

bool SteamNetworking005::AllowP2PPacketRelay(bool bAllow)
{
	return ProxiedNetworking::AllowP2PPacketRelay(bAllow);
}

SNetListenSocket_t SteamNetworking005::CreateListenSocket(int nP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateListenSocket(nP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

SNetSocket_t SteamNetworking005::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
	return ProxiedNetworking::CreateP2PConnectionSocket(steamIDTarget, nPort, nTimeoutSec, bAllowUseOfPacketRelay);
}
SNetSocket_t SteamNetworking005::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
{
	return ProxiedNetworking::CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

bool SteamNetworking005::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroySocket(hSocket, bNotifyRemoteEnd);
}

bool SteamNetworking005::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	return ProxiedNetworking::DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}


bool SteamNetworking005::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
	return ProxiedNetworking::SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

bool SteamNetworking005::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

bool SteamNetworking005::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	return ProxiedNetworking::RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

bool SteamNetworking005::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

bool SteamNetworking005::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	return ProxiedNetworking::RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

bool SteamNetworking005::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
	return ProxiedNetworking::GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

bool SteamNetworking005::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
	return ProxiedNetworking::GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

ESNetSocketConnectionType SteamNetworking005::GetSocketConnectionType(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetSocketConnectionType(hSocket);
}


int SteamNetworking005::GetMaxPacketSize(SNetSocket_t hSocket)
{
	return ProxiedNetworking::GetMaxPacketSize(hSocket);
}

#pragma endregion