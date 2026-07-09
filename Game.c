// 만든 이:Xesrs5
// --ENGXCONSOLE--
// 만들고 싶은대로 헤더를 사용하셔도 됩니다.
// main.c는 엔진 코드입니다 건드려도 됩니다.
// 이 엔진은 최소한의 지원만 합니다.
// 엔진에서 있는 헤더를 쓰려면 loopg 또는 startg 안에 써야합니다.

// loopg는 게임이 시작할때 계속 실행되는 영역입니다.

// 아래 따옴표안에 창 이름을 써주세요. (기본은 xesrs5입니다.)

#include <windows.h>
#include "Chain.h"

// engx_loopg를 0으로 바꾸면 loopg를 멈출수있습니다. 바꾸는건 engx_loopg = 0;으로 하세요. loopg 또는 startg 안에서만 써주세요.



const char *WinName = "xesrs5";

void LoopG() {
    // 아래 코드는 기본코드입니다 삭제하셔도 됩니다.
	
	if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
		{
			ExitProcess(0);
			
		};
		
	
}

// startg는 게임이 시작될떄 가장 첫번쨰로 시작되는 영역입니다.

void StartG() {
    // 아래 코드는 기본코드입니다 삭제하셔도 됩니다.

	engx_printc("NOTHING");
	engx_loopg = 1;
	

}