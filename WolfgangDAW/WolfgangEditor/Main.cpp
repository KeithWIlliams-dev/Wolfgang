/*
* Author:Keith Williams
* Creation Date: 03/13/21
* Last Updated: 03/13/21
* Description:
* Defines the entry point for the application.
*/

#include <Windows.h>
#include "Main.h"
#include "Common.h"
#include "Log.h"

LRESULT CALLBACK windowCallback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	result = 0;
	switch (uMsg)
	{
		case WM_CLOSE:
			break;
		case WM_DESTROY:
		{
			running = false;
			break;
		}
	Default:
		result =  DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return result;
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	// Running Variable Initialization
	running = true;

	// Create Window Class
	WNDCLASS windowClass = {};
	windowClass.style = CS_HREDRAW | CS_VREDRAW;
	windowClass.lpszClassName = "Window Class";
	windowClass.lpfnWndProc = windowCallback;

	// Register Class
	RegisterClass(&windowClass);

	LogInit();
	Log("Initiating WolfgangDAW...");

	// Create Window
	HWND window = CreateWindow(windowClass.lpszClassName, "Wolfgang Workspace", WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 1280, 720, 0, 0, hInstance, 0);

	while (running)
	{
		// Input
		MSG message;
		while (PeekMessage(&message, window, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&message);
			DispatchMessage(&message);
		}

		// Simulate

		// Render


	}

	return 0;
}


