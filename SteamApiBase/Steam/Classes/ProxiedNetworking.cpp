/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2015-04-08
	Notes:
		Information about the application.
*/

#include "..\..\StdInc.h"

static const int defaultPort = 31313;

bool ProxiedNetworking::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iPort)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType)
 {
	 HHSDBG();
	 return ProxiedNetworking::SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, defaultPort);
 }

bool ProxiedNetworking::IsP2PPacketAvailable(uint32 *pcubMsgSize, int iPort)
 {
	 //HHSDBG();
	 return false;
 }

bool ProxiedNetworking::IsP2PPacketAvailable(uint32 *pcubMsgSize)
 {
	 //HHSDBG();
	 return ProxiedNetworking::IsP2PPacketAvailable(pcubMsgSize, defaultPort);
 }


bool ProxiedNetworking::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote)
{
	HHSDBG();
	return false;
}

bool ProxiedNetworking::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iPort)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::CloseP2PSessionWithUser(CSteamID steamIDRemote)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::CloseP2PChannelWithUser(CSteamID steamIDRemote, int iPort)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::AllowP2PPacketRelay(bool bAllow)
 {
	 HHSDBG();
	 return false;
 }

SNetListenSocket_t ProxiedNetworking::CreateListenSocket(int nP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
 {
	 HHSDBG();
	 return NULL;
 }

SNetSocket_t ProxiedNetworking::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
 {
	 HHSDBG();
	 return NULL;
 }
SNetSocket_t ProxiedNetworking::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
 {
	 HHSDBG();
	 return NULL;
 }


bool ProxiedNetworking::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
 {
	 HHSDBG();
	 return false;
 }

bool ProxiedNetworking::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
 {
	 HHSDBG();
	 return false;
 }

ESNetSocketConnectionType ProxiedNetworking::GetSocketConnectionType(SNetSocket_t hSocket)
 {
	 HHSDBG();
	 return k_ESNetSocketConnectionTypeNotConnected;
 }

int ProxiedNetworking::GetMaxPacketSize(SNetSocket_t hSocket)
 {
	 HHSDBG();
	 return 0;
 }