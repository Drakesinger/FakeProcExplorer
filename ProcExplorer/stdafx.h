// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>
#include <windowsx.h>
#include <Commdlg.h>
//#include <Winternl.h>
#include <TlHelp32.h>  
#include <Psapi.h>
#include <Shellapi.h>
#include <Shlobj.h>
#include <dbgeng.h>
#include <dbghelp.h>
#include <WinCred.h>
#include <SetupAPI.h>
#include <VdmDbg.h>
#include <Uxtheme.h>
#include <CommCtrl.h>
#include <Taskschd.h>	
#include <WtsApi32.h>
#include <Winnetwk.h>
///#include <CorPub.h>
#include <Wintrust.h>
#include <Vsstyle.h>
#include <Mscat.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <Processthreadsapi.h>
#include <Evntrace.h>

#include <Evntcons.h>
#include <wbemidl.h>
#include <dbt.h>
///#include <shared/envtprov.h>
//#include <envtprov.h>


// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <setupapi.h>
#include <Wbemidl.h>
#include <aclapi.h>
#include <ntsecapi.h>

#include "./include/winmisc.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

#include <atlbase.h>
#include <atlstr.h>

#include <comutil.h>

#include <conio.h>

#include <vector>
#include <list>
#include <map>
using namespace std;

#pragma comment(lib,"ws2_32.lib")
//#pragma comment(lib,"CorGuids.lib")
#pragma comment(lib,"WtsApi32.lib")
//#pragma comment(lib,"VdmDbg.lib")
#pragma comment(lib,"SetupAPI.lib")
#pragma comment(lib,"ntdll.lib")
#pragma comment(lib,"Psapi.lib")
#pragma comment(lib,"dbghelp.lib")
#pragma comment(lib,"dbgeng.lib")
#pragma comment(lib,"Shell32")
#pragma comment(lib,"UxTheme")
#pragma comment(lib,"Comctl32")
#pragma comment(lib,"Taskschd.lib")
#pragma comment(lib,"iphlpapi.lib")
#pragma comment(lib,"Comdlg32.lib")
#pragma comment(lib,"mpr.lib")
#pragma comment(lib,"comsuppw.lib")  
#pragma comment(lib,"Wbemuuid.lib")
#pragma comment(lib,"Credui.lib")
#pragma comment(lib,"version.lib")

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�

//Operating  Version		dwMajorVersion		dwMinorVersion	Other
//system	 number			

//Windows10		10.0*		10						0				OSVERSIONINFOEX.wProductType == VER_NT_WORKSTATION
//Windows		
//Server 2016	10.0*		10						0	OSVERSIONINFOEX.wProductType != VER_NT_WORKSTATION
//Windows 8.1	6.3*		6						3	OSVERSIONINFOEX.wProductType == VER_NT_WORKSTATION
//Windows Server 
//2012 R2		6.3*		6						3	OSVERSIONINFOEX.wProductType != VER_NT_WORKSTATION
//Windows 8		6.2			6						2	OSVERSIONINFOEX.wProductType == VER_NT_WORKSTATION
//Windows Server 
//2012			6.2			6						2	OSVERSIONINFOEX.wProductType != VER_NT_WORKSTATION
//Windows 7		6.1			6						1	OSVERSIONINFOEX.wProductType == VER_NT_WORKSTATION
//Windows Server 
//2008 R2		6.1			6						1	OSVERSIONINFOEX.wProductType != VER_NT_WORKSTATION
//Windows Server 
//2008			6.0			6						0	OSVERSIONINFOEX.wProductType != VER_NT_WORKSTATION
//Windows Vista	6.0			6						0	OSVERSIONINFOEX.wProductType == VER_NT_WORKSTATION
//Windows Server 
//2003 R2		5.2			5						2	GetSystemMetrics(SM_SERVERR2) != 0
//Windows Home 
//Server		5.2			5						2	OSVERSIONINFOEX.wSuiteMask & VER_SUITE_WH_SERVER
//Windows Server 
//2003			5.2			5						2	GetSystemMetrics(SM_SERVERR2) == 0
//Windows XP 
//Professional 
//x64 Edition	5.2			5						2	(OSVERSIONINFOEX.wProductType == VER_NT_WORKSTATION) && (SYSTEM_INFO.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64)
//Windows XP	5.1			5						1	Not applicable
//Windows 2000	5.0			5						0	Not applicable

#include "include/FakeDDK.h"
#include "include/Lock.h"
#include "include/RegSettings.h"
#include "include/MainWnd.h"
#include "ProcExplorer.h"

#include "include/Resizer.h"
#include "include/TreeList.h"
#include "include/TreeListData.h"
#include "include/Process.h"

#include "include/Driver.h"
#include "include/ObjSecurity.h"
#include "include/GraphWnd.h"
#include "include/EventConsumer.h"

#include "include/EvntTraceMgr.h"