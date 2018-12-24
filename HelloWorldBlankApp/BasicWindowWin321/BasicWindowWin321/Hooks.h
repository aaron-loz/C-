#pragma once
#include "Dialogs.h"

LRESULT CALLBACK HookProc(int nCode, WPARAM wParam, LPARAM lParam )
{
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}