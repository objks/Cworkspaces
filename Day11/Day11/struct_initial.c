/*
구조체 초기화
*/

#include	<stdio.h>

struct point {
	int xpos;
	int ypos;
} p1 = { 10, 20 };	// 전역변수

struct person {
	char name[20];
	char phone[20];
	int age;
};

int main_si(void) {
	p1.xpos = 2;
	p1.ypos = 4;

	struct point p2 = { 2, 4 };	// xpos = 2, ypos = 4
	struct person p3 = { "홍길동", "010-22223333", 24 };
	struct person p4 = { "이몽룡" };
	struct person hong = p3;	// 대입을 멤버 모든 것이 한꺼번에
	printf("이름: %s, %s\n", p3.name, hong.name);
	return 0;
}