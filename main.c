// Created By Xesrs5

// 콘솔 엔진 Pre-Alpha

// ENGXCONSOLE \\

#include <windows.h>
#include "Chain.h"
#include <string.h>
#include <stdio.h>

HANDLE cmdhandle1;
int consoleexit = 1;
int engx_loopg;
CHAR post1 = 0x20;
COORD pos1;
DWORD TNUMBER1;
LPDWORD TNUMBER1P;
DWORD Length1;
COORD consolecursorpos;


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

void engx_cursor(int CX, int CY) {

	COORD pos2;
	pos2.X = CX;
	pos2.Y = CY;
	SetConsoleCursorPosition(
		cmdhandle1,
		pos2
	);
}

void engx_color(int CLtext) {
	SetConsoleTextAttribute(
		cmdhandle1,
		CLtext
	);
}

void engx_getcursorpos() {
	CONSOLE_SCREEN_BUFFER_INFO cursorpos1;
	GetConsoleScreenBufferInfo(
		cmdhandle1,
		&cursorpos1
	);
	consolecursorpos.X = cursorpos1.dwCursorPosition.X;
	consolecursorpos.Y = cursorpos1.dwCursorPosition.Y;
	
}

void engx_printci(int Tinumber1) {

	char buffer[64];
	snprintf(buffer, sizeof(buffer), "%d", Tinumber1);
	engx_printc(buffer);

}
CONSOLE_CURSOR_INFO showcursor2;
void engx_showcursor(int showcursor1) {
		showcursor2.bVisible = showcursor1;
		showcursor2.dwSize = 25;
		SetConsoleCursorInfo(
			cmdhandle1,
			&showcursor2
		);
}
