// Win32Project1.cpp : Defines the entry point for the application.
//Template for all Window apps

#include "stdafx.h"
#include "Hooks.h"

static TCHAR g_szClassName[] = _T("myWindowClass");//This is the class name
INT_PTR CALLBACK AboutDlgProc(HWND, UINT, WPARAM, LPARAM); //This is for the About Dialog box
BOOL CALLBACK ToolDlgProc(HWND, UINT, WPARAM, LPARAM);
HWND g_hToolbar = NULL;
HWND hwndTest;

// Step 4: the Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)//responds to intput for main window
{
	bool checked, checked2, checked3;
	static HWND hwndEdit, hwndEdit2,hwndEdit3;
	HWND hwndButton;

	switch (msg)
	{
	case WM_CLOSE://close, destroy are for quitting the program
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		DestroyWindow(g_hToolbar);
		PostQuitMessage(0);
		break;
		//leftclick
	case WM_LBUTTONDOWN:
	{//brace because of hInstance initialization
		static TCHAR szFileName[MAX_PATH];//This is a char array for the full directory of this file
		HINSTANCE hInstance = GetModuleHandle(NULL);//this assigns this exe to hInstance
		GetModuleFileName(hInstance, szFileName, MAX_PATH);//(in this exe, put full directory in szFileName
		MessageBox(hwnd, szFileName, _T("This Program is: "), MB_OK | MB_ICONINFORMATION);//iconinformation shows the default icon png next to the message
		break;
	}
	case WM_KEYDOWN:
		break;
	case WM_COMMAND://for all the toolbars and items
		switch (LOWORD(wParam))
		{
			//ALWAYS PUT IDS HERE AND WITH A CASE OR ELSE IT WILL CAUSE CONFLICT
			//Submit
		case ID_SUBMITBUTTON:
			if (HIWORD(wParam) == BN_CLICKED)//If Button gets pressed, sets text to title
			{
				int len = GetWindowTextLengthW(hwndEdit) + 1;
				wchar_t text[90];//cant use len as array setter because needs constant value
				GetWindowTextW(hwndEdit, text, len);
				SetWindowTextW(hwnd, text);
			}
			break;
		case IDC_TEXT:
			WM_CLEAR;
			break;
		//check box to check box	
		case ID_CHECK:
			checked = IsDlgButtonChecked(hwnd, ID_CHECK);
			if (checked)
			{
				CheckDlgButton(hwnd, ID_CHECK, BST_UNCHECKED);
				SetWindowTextW(hwnd, L"UnChecked!");
			}
			else
			{
				CheckDlgButton(hwnd, ID_CHECK, BST_CHECKED);
				SetWindowTextW(hwnd, L"Checked!");
			}
			break;
		//2nd check box
		case ID_CHECK2:
			checked2 = IsDlgButtonChecked(hwnd, ID_CHECK2);
			if (checked2)
			{
				CheckDlgButton(hwnd, ID_CHECK2, BST_UNCHECKED);
			}
			else
			{
				CheckDlgButton(hwnd, ID_CHECK2, BST_CHECKED);
			}
			break;
		//3rd check box
		case ID_CHECK3:
			checked3 = IsDlgButtonChecked(hwnd, ID_CHECK3);
			if (checked3)
			{
				CheckDlgButton(hwnd, ID_CHECK3, BST_UNCHECKED);
			}
			else
			{
				CheckDlgButton(hwnd, ID_CHECK3, BST_CHECKED);
			}
			break;
		//About Box
		case IDM_ABOUT:
		{
			int ret = DialogBox(GetModuleHandle(NULL),
				MAKEINTRESOURCE(IDD_ABOUTBOX), hwnd, AboutDlgProc);
			if (ret == IDOK) {
				MessageBox(hwnd, _T("Dialog exited with IDOK."), _T("Notice"),
					MB_OK | MB_ICONINFORMATION);
			}
			else if (ret == IDCANCEL) {
				MessageBox(hwnd, _T("Dialog exited with IDCANCEL."), _T("Notice"),
					MB_OK | MB_ICONINFORMATION);
			}
			else if (ret == -1) {
				MessageBox(hwnd, _T("Dialog failed!"), _T("Error"),
					MB_OK | MB_ICONINFORMATION);
			}
		}
		break;//END OF IDM_ABOUT
		case IDM_EXIT://associated with Exit item in File Menu
		{
			DestroyWindow(g_hToolbar);
			PostQuitMessage(0);
		}
		break;
		case ID_DIALOG_SHOW:
		{
			ShowWindow(g_hToolbar, SW_SHOW);
		}
		break;
		case ID_DIALOG_HIDE:
		{
			ShowWindow(g_hToolbar, SW_HIDE);
		}
		break;
		}//END OF SWITCH LOWORD
	break;//END OF CASE WM_COMMAND
	case WM_CREATE:
		//CheckBox
		CreateWindowW(L"button", NULL,//THE FIRST ONE MUST SAY button IT MUST
			 WS_CHILD | WS_VISIBLE | BS_CHECKBOX,
			0, 60, 20, 20, hwnd, (HMENU)ID_CHECK,//I Think the number is an ID. Experiment
			NULL, NULL);
		CheckDlgButton(hwnd, ID_CHECK, BST_CHECKED);
		//CheckBox2
		CreateWindowW(L"button", NULL,//THE FIRST ONE MUST SAY button IT MUST
			WS_CHILD | WS_VISIBLE | BS_CHECKBOX,
			0, 110, 20, 20, hwnd, (HMENU)ID_CHECK2,//I Think the number is an ID. Experiment
			NULL, NULL);
		CheckDlgButton(hwnd, ID_CHECK2, BST_CHECKED);
		//CheckBox3
		CreateWindowW(L"button", NULL,
			WS_CHILD | WS_VISIBLE | BS_CHECKBOX,
			0, 160, 20, 20, hwnd, (HMENU)ID_CHECK3,
			NULL, NULL);
		CheckDlgButton(hwnd, ID_CHECK3, BST_CHECKED);
		//EditBox
		hwndEdit = CreateWindowW(L"Edit", NULL,//_T() and L"" are the same thing
			WS_CHILD | WS_VISIBLE | WS_BORDER |ES_MULTILINE ,
			250, 50, 900, 40, hwnd, (HMENU)IDC_TEXT,
			NULL, NULL);
		//EditBox2
		hwndEdit2 = CreateWindowW(L"Edit", NULL,
			WS_CHILD | WS_VISIBLE | WS_BORDER |ES_MULTILINE,
			250, 100, 900, 40, hwnd, (HMENU)IDC_TEXT2,
			NULL, NULL);
		//EditBox3
		hwndEdit3 = CreateWindowW(L"Edit", NULL,
			WS_CHILD | WS_VISIBLE | WS_BORDER |ES_MULTILINE,
			250, 150, 900, 40, hwnd, (HMENU)IDC_TEXT3,
			NULL, NULL);
		//Button To submit EditBox
		hwndButton = CreateWindowW(L"Button", L"Submit Title",
			WS_VISIBLE | WS_CHILD, 100, 200, 80, 25,
			hwnd, (HMENU)ID_SUBMITBUTTON, NULL, NULL);
		//ShowHideToolbar
		g_hToolbar = CreateDialog(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_TOOLBAR),
			hwnd, ToolDlgProc);
		if (g_hToolbar != NULL)
		{
			ShowWindow(g_hToolbar, SW_SHOW);
		}
		else
		{
			MessageBox(hwnd, _T("CreateDialog returned NULL"), _T("Warning!"),
				MB_OK | MB_ICONINFORMATION);
		}
		
	break;//END OF WM_CREATE
	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc;//this is the window class
	HWND hwnd;
	MSG Msg;

	//Step 1: Registering the Window Class
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_MYICON));
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = GetSysColorBrush(COLOR_3DFACE);//(HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = MAKEINTRESOURCE(IDR_MYMENU);//IDRMYMENU and IDI MYICON Will be put on .rc
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = (HICON)LoadImage(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_MYICON), IMAGE_ICON,16,16,0 );//loadImage allows for smaller icon, instead of LoadIcon

	if (!RegisterClassEx(&wc))//registers window app
	{
		MessageBox(NULL, _T("Window Registration Failed!"), _T("Error!"),
			MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	// Step 2: Creating the Window
	hwnd = CreateWindow(
		g_szClassName,//name of app/class
		g_szClassName,//Title Text
		WS_OVERLAPPEDWINDOW,//window type, this is default
		CW_USEDEFAULT, CW_USEDEFAULT,//initial position
		CW_USEDEFAULT, CW_USEDEFAULT,//size of window
		NULL,//parent of window
		NULL,//menu bar function, this is no menu bar
		hInstance,//first parameter, is the .exe file
		NULL
		);
	
	if (hwnd == NULL)//if the window fails to open
	{
		MessageBox(NULL, _T("Window Creation Failed!"), _T("Error!"),
			MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	// Step 3: The Message Loop
	while (GetMessage(&Msg, NULL, 0, 0) > 0)//recieves messages, basically any user input at all
	{
		TranslateMessage(&Msg);//alows keyboard events
		DispatchMessage(&Msg);
	}
	return Msg.wParam;
}