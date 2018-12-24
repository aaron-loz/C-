#pragma once
#include "stdafx.h"
#include "Win32Project1.h"
#include<Windows.h>
#include "Resource.h"

INT_PTR CALLBACK AboutDlgProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) //This is for the About Dialog box
{
	UNREFERENCED_PARAMETER(lParam);
	switch (Message)
	{
	case WM_INITDIALOG://this does processing before the dialog window opens
		return (INT_PTR)TRUE;//do not break, need this to stay active because it opens the dialog.
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case IDOK:
			EndDialog(hwnd, IDOK);
			break;
		case IDCANCEL:
			EndDialog(hwnd, IDCANCEL);
			break;
		}
		break;
	default:
		return (INT_PTR)FALSE;//ignores all messages fed to app otherwise
	}
	return (INT_PTR)FALSE;
}


//This is the hide and show dialogbar
BOOL CALLBACK ToolDlgProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	switch (Message)
	{
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case IDC_PRESS:
			MessageBox(hwnd, _T("Hi!"), _T("This is a message"),
				MB_OK | MB_ICONEXCLAMATION);
			break;
		case IDC_OTHER:
			MessageBox(hwnd, _T("Bye!"), _T("This is another message"),
				MB_OK | MB_ICONEXCLAMATION);
			break;
		}//end of SWITCH LOWORD
		break;
	default:
		return FALSE;
	}
	return TRUE;
}
