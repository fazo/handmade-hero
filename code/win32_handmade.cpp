/* HANDMADE HERO */

#include <windows.h>

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
	)
{
	MessageBoxEx(0, "Hey there!", "Aw yea nigga", 
		MB_OK|MB_ICONINFORMATION, 0);

	return(0);
}