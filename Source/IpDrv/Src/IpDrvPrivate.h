/*=============================================================================
	IpDrvPrivate.h: Unreal TCP/IP driver.
	Copyright 1997 Epic MegaGames, Inc. This software is a trade secret.

Revision history:
	* Created by Tim Sweeney.
=============================================================================*/

#ifdef PLATFORM_MSVC
#pragma warning( disable : 4201 )
#endif

#ifdef PLATFORM_WIN32
#include <windows.h>
#include <winsock.h>
#else
#include <unistd.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>
#include <pthread.h>
#endif

#include <stdlib.h>
#include <string.h>

#include "Engine.h"
#include "UnNet.h"
#include "UnSocket.h"

/*-----------------------------------------------------------------------------
	Definitions.
-----------------------------------------------------------------------------*/

struct FIpAddr
{
	DWORD Addr;
	DWORD Port;
};

extern UBOOL GInitialized;

/*-----------------------------------------------------------------------------
	Public includes.
-----------------------------------------------------------------------------*/

#include "IpDrvClasses.h"

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
