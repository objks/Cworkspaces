/*
const : constant의 약자 : 상수 -> 변하지 않는 수
*/

#include	<stdio.h>

int add(const int a, const int b) {
//	a = 50;
//	b = 60;
	return a + b;
}

int main_const(void) {
	int num = 10;	// 변수
	num = 20;		// 값을 변경 가능

	const int count = 20;	// 상수로 간주
//	count = 30;	// 상수이므로 변경 불가능 -> 에러
	int num2 = 40;
	int sum = add(num, num2);

	const int num5 =5;	// 의미 없음(값이 무엇인지 모름)
//	num5 = 10;
	num = num5;
	return 0;
}