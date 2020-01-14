/* 
무한 반복문 -> 바람직하지 않다.
			-> 종료시점을 고려해주는 것이 필요하다.
*/

#include	<stdio.h>

int main_infinite(void) {
	int i = 0;
	while (1) {	// 조건식 만족 (1: 참)
		printf("무한 반복 합니다.\n");
		if (i++ > 1000)	// 종료시점을 고려
			break;		// 반복문을 종료(벗어남)
	}

	int run = 1;
	while (run) {
		if (i++ < 10000)// scanf(입력 받아서 종료 메뉴를 선택하면 종료
			run = 0;
	}
	return 0;
}