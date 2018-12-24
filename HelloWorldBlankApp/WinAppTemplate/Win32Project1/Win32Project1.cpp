// Win32Project1.cpp : Defines the entry point for the application.
//Template for all Window apps

#include "stdafx.h"
#include "Win32Project1.h"
#include<Windows.h>


static TCHAR g_szClassName[] = _T("myWindowClass");//This is the class name

// Step 4: the Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)//responds to intput
{
	switch (msg)
	{
	case WM_CLOSE://close, destroy are for quitting the program
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
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
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))//registers window app
	{
		MessageBox(NULL, _T("Window Registration Failed!"), _T("Error!"),
			MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	// Step 2: Creating the Window
	hwnd = CreateWindow(
		g_szClassName,//name of app
		g_szClassName,//Title Text
		WS_OVERLAPPEDWINDOW,//window type, this is default
		CW_USEDEFAULT, CW_USEDEFAULT,//initial position
		500, 340,//size of window
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