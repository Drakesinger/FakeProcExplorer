#ifndef __RESIZER_H__
#define __RESIZER_H__
#pragma once
#include <uxtheme.h>
#include <VSStyle.h>

typedef HRESULT(WINAPI* LPFN_CloseThemeData)(IN HTHEME hTheme);
typedef HTHEME(WINAPI* LPFN_OpenThemeData)(IN HWND hWnd, IN LPCWSTR lpszClassList);
typedef BOOL(WINAPI* LPFN_IsThemeActive)();
typedef HRESULT(WINAPI* LPFN_DrawThemeBackground)(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pRect,LPCRECT pClipRect);
typedef HRESULT(WINAPI* LPFN_EnableThemeDialogTexture)(IN HWND hWnd, IN DWORD dwFlags);

extern LPFN_CloseThemeData gpfnCloseThemeData ;
extern LPFN_OpenThemeData gpfnOpenThemeData;
extern LPFN_IsThemeActive gpfnIsThemeActive;
extern LPFN_DrawThemeBackground gpfnDrawThemeBackground;
extern LPFN_EnableThemeDialogTexture gpfnEnableThemeDialogTexture;

//////////////////////////////////////////////////////////////////////////
class CThemedWindow
{
public:
	CThemedWindow():m_hThemeHandle(NULL)
	{}

	virtual TCHAR* GetName() = 0;
	virtual LRESULT HandleMessage(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
	{
		return DefWindowProc(hWnd, msg, wParam, lParam);
	}
public:
	HTHEME		m_hThemeHandle;
};

//////////////////////////////////////////////////////////////////////////
typedef struct tagResizerItem
{
	RECT	m_rect1;
	RECT	m_rect2;
	RECT	m_rcWindow;		///�ؼ���ʼλ����Ϣ
	HWND	m_hWnd;			///�ؼ����
	DWORD	m_Unknown;
}RESIZERITEM,*PRESIZERITEM,*LPRESIZERITEM;

///0x40=60
class CResizer : public CThemedWindow
{
public:
	CResizer(HWND hWnd);
	virtual ~CResizer();
	virtual TCHAR* GetName() { return TEXT("status"); }

	BOOL InitWnd(HWND hWnd);

	LPRESIZERITEM AddItem(HWND hWnd, bool fFlags);



	static LRESULT CALLBACK Proxy_WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	void Refresh();
private:
	static BOOL CALLBACK EnumChildCallback(HWND hWnd, LPARAM lParam);
public:
	///���ھ��
	HWND m_hWnd;		
	///ԭʼ���ڴ�����
	WNDPROC m_OldWndProc;
	///�ߴ�仯ǰ�Ĵ��ڳߴ�
	int m_nWidth;

	int m_nHeight;
	POINT m_ptMinTrackSize;
	///�ߴ�仯��Ĵ��ڳߴ�
	int m_nWidth3;
	
	int m_nHeight3;
	HDWP m_hDWP;
	int m_nXRatio;
	int m_nYRatio;
	
	bool m_FixedBorder;
	/// 
	LPRESIZERITEM m_Buffer;
	DWORD m_dwBufferCount;
};

#endif //__RESIZER_H__