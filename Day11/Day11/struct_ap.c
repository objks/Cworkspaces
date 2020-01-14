/*
구조체 배열과 포인터
기본 데이터 타입 : 정수형(char, short, long, int, long long),
				실수형(float, double, long double)
배열 : int arr[10];
포인터 : int* ptr = &num;

구조체 : 기본 데이터 타입의 확장
struct point p[10];	// 구조체 배열
struct point* pptr = &p[0];	// 구조체 포인터	int -> struct point
*/

#include	<stdio.h>

struct point {
	int xpos;
	int ypos;
};

int main_sap(void) {
	int num = 10;
	int* nptr = &num;

	*nptr = 30;
	// 배열 선언
	struct point p[2] = { 2, 4, 6, 8 };
	struct point* ptr = p;

	printf("p[0] (%d, %d)\n", p[0].xpos, p[0].ypos);	// 변수의 멤버
	printf("p[0] (%d, %d)\n", (*ptr).xpos, (*ptr).ypos);	// *ptr<=>p[0]
	printf("p[1] (%d, %d)\n", (ptr + 1)->xpos, (ptr + 1)->ypos);
					// 포인터를 사용해서 멤버에 접근 ->(가리키는)
	return 0;
}