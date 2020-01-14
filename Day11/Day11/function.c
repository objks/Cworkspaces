/*
함수에서 매개변수, 반환형에 구조체를 사용하는 방법
반환형 함수이름(매개변수) {
}
기본 데이터 타입 : int, float -> 반환형, 매개변수
구조체 : 반환형, 매개변수
*/

#include	<stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

Point getCoordinate() {
	Point in;

	printf("좌표값 입력(10 20) : ");
	scanf("%d %d", &in.xpos, &in.ypos);
	return in;	// 반환형 : 구조체 Point
}

// const : 상수 : 구조체 p의 값을 변경 금지
void printCoordinate(const Point p) {	// 매개변수로 전달
	printf("좌표값: (%d, %d)\n", p.xpos, p.ypos);
}

void getCoordi(Point* ptr) {
	printf("좌표값 입력(10 20) : ");
	scanf("%d %d", &ptr->xpos, &ptr->ypos);
}

int main_function(void) {
	//좌표값을 얻고 출력하는 프로그램
	Point p;
	Point p1 = { 20, 30 };
	Point p2 = p1;	// 구조체 대입은 한번에 멤버를 모두 대입(xpos, ypos)

	p = getCoordinate();	// x좌표와 y좌표를 한꺼번에 반환
	printCoordinate(p);	// 좌표값 출력

	getCoordi(&p);	// call by reference : 주소
	printCoordinate(p);	// 좌표값 출력

	return 0;
}