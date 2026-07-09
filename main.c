// Created By Xesrs5

// 콘솔 엔진 Pre-Alpha

// ENGXCONSOLE \\

#include <windows.h>
#include "Chain.h"
#include <string.h>

HANDLE cmdhandle1;
int consoleexit = 1;
int engx_loopg;



int main() {
	
	
	cmdhandle1 = GetStdHandle(STD_OUTPUT_HANDLE);
	HWND cmdhandle2 = GetConsoleWindow();


	

	SetConsoleTitle(
		
		WinName
		
		);

	
	StartG();

	while (engx_loopg) {
		LoopG();
		Sleep(16);
	}

	return 0;

}

void engx_printc(const char *text){
    	WriteConsole(
       		cmdhandle1,
       		text,
        	strlen(text),
        	NULL,
        	NULL
    	);
	};

int engx_key(int key)
{
    return (GetAsyncKeyState(key) & 0x8000) != 0;
}