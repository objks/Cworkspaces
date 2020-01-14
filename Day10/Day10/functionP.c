/* 함수 포인터
함수의 주소를 저장하고, 포인터를 사용해서 함수를 실행 방법상의 주소를 저장
함수 :
반환형 함수이름(매개변수) {... }
함수이름은 그 함수의 주소를 의미한다.

함수 포인터
반환형 (*fptr) (매개변수)
*/

#include	<stdio.h>

int add(int a, int b) {
	return a + b;
}

int main_functionP(void) {
	int a = 10, b = 20;
	int sum = add(a, b);
	printf("합=%d\n", sum);

	void (*vptr) () = add;
	// 함수 포인터 사용 예 : 반환형 (*fptr) (매개변수)
	int (*fptr) (int, int) = add;	// 함수 포인터 -> add  : 함수의 주소
	sum = fptr(30, 40);	// sum = 30 + 40 = add(30, 40)
	printf("합=%d\n", sum);

	// 포인터 : 주소, 데이터 타입(int, double)
	// 함수 포인터 : 주소, 반환형, 매개변수
	double d1 = 2.4;
	double* dptr = &d1;

	dptr = &a;	// 데이터 유형이 다르면 에러
	return 0;
}