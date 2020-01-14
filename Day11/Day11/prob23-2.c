/*
문제 23-2 [다양한 형태의 구조체 정의]
좌 상단의 x, y 좌표가 [0, 0], 우 하단의 x, y 좌표가 [100, 100]인 좌표
평면상의 직사각형 정보를 표현하는 구조체 Rectangle을 정의하되,
다음 구조체를 기반으로 정의해보자.
typedef struct point {
	int xpos;
	int ypos;
} Point;

그리고 Rectangle 구조체 변수를 인자로 전달받아서 해당 직사각형의
 넓이를 계산해서 출력하는 함수와 직사각형을 이루는 네 점의 좌표정
보를 출력하는 함수를 각각 정의해보자. 단 좌표평면상에서 직사각형
을 표현하기 위해서 필요한 점의 갯수는 4개가 아닌 2개이니,
직사각형을 의미하는 Rectangle 변수내에는 두 점의 정보만 존재해야 한다.
*/

#include	<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

// 사각형 구조체 정의
typedef struct rectangle {
	Point p1;	// 대각선
	Point p2;
} Rectangle;

void calculateArea(Rectangle r) {
	int width = r.p2.xpos - r.p1.xpos;
	int height = r.p2.ypos - r.p1.ypos;
	printf("면적 = %d\n", width * height);
}

void printFourPoint(Rectangle r) {
	printf("왼쪽 상단의 좌표 = %d, %d\n", r.p1.xpos, r.p1.ypos);
	printf("오른쪽 상단의 좌표 = %d, %d\n", r.p2.xpos, r.p1.ypos);
	printf("왼쪽 하단의 좌표 = %d, %d\n", r.p1.xpos, r.p2.ypos);
	printf("오른쪽 하단의 좌표 = %d, %d\n", r.p2.xpos, r.p2.ypos);
}

int main_prob232(void) {
	int num = 10;
	Rectangle r = { 0, 0, 10, 100 };
	calculateArea(r);	// 직사각형의 면적을 출력하는 함수
	printFourPoint(r);	// 4점의 좌표를 출력하는 함수

	return 0;
}