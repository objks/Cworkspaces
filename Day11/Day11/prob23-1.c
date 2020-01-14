/*
문제 23-1 [구조체 변수의 연산]
다음 구조체의 두 변수를 대상으로 저장된 값을 서로 바꾸어주는 함수
를 정의하고 이를 호출하는 예제를 작성해보자.

typedef struct point {
	int xpos;
	int ypos;
} Point;

에를 들어서 다음과 같이 두 개의 구조체 변수가 선언된 상태에서
	Point pos1 = { 2, 4 };	-> { 5, 7 }
	Point pos2 = { 5, 7 };	-> { 2, 4 }

이 두 구조체 변수를 대상으로, 혹은 두 구조체 변수의 주소 값을
대상으로 SwapPoint라는 이름의 함수를 호출하면 pos1의 xpos,
ypos에는 각각 5와 7이, 그리고 pos2의 xpos, ypos에는 각각
2와 4가 저장되어야 한다.

*/

#include	<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point p1, Point p2) {
	printf("p1의 좌표: (%d, %d)\n", p1.xpos, p1.ypos);
	printf("p2의 좌표: (%d, %d)\n", p2.xpos, p2.ypos);

	Point tmp = p1;
	p1 = p2;
	p2 = tmp;

	printf("p1의 좌표: (%d, %d)\n", p1.xpos, p1.ypos);
	printf("p2의 좌표: (%d, %d)\n", p2.xpos, p2.ypos);
}

void SwapPointReference(Point* p1, Point* p2) {
	printf("p1의 좌표: (%d, %d)\n", (*p1).xpos, p1->ypos);
	printf("p2의 좌표: (%d, %d)\n", p2->xpos, p2->ypos);

	Point tmp = *p1;	// p1->&pos1 *p1->pos1(xpos, ypos)
	*p1 = *p2;			// p2->&pos2 *p2:pos2(xpos, ypos)
	*p2 = tmp;

	printf("p1의 좌표: (%d, %d)\n", p1->xpos, p1->ypos);
	printf("p2의 좌표: (%d, %d)\n", p2->xpos, p2->ypos);
}

int main_prob231(void) {
	int a = 10;
	int b = 20;

	// swapByReference(&a, &b);

	Point pos1 = { 2, 4 };	// -> { 5, 7 }
	Point pos2 = { 5, 7 };	// 2, 4

	
	printf("pos1의 좌표: (%d, %d)\n", pos1.xpos, pos1.ypos);
	printf("pos2의 좌표: (%d, %d)\n", pos2.xpos, pos2.ypos);

	/*
	SwapPoint(pos1, pos2);
	*/
	SwapPointReference(&pos1, &pos2);

	printf("pos1의 좌표: (%d, %d)\n", pos1.xpos, pos1.ypos);
	printf("pos2의 좌표: (%d, %d)\n", pos2.xpos, pos2.ypos);
	

	return 0;
}