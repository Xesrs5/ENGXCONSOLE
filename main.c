// Created By Xesrs5

// 콘솔 엔진 Pre-Alpha

// ENGXCONSOLE \\

#include <windows.h>
#include "Chain.h"
#include <string.h>

HANDLE cmdhandle1;
int consoleexit = 1;
int engx_loopg;
CHAR post1 = 0x20;
COORD pos1;
DWORD TNUMBER1;
LPDWORD TNUMBER1P;
DWORD Length1;


int main() {
	
	pos1.X = 0;
	pos1.Y = 0;
	Length1 = 1000;
	TNUMBER1P = &TNUMBER1;
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

void engx_clear(){

	FillConsoleOutputCharacterA(

		cmdhandle1,
		post1,
		Length1,
		pos1,
		TNUMBER1P

	);

};