/*
포인터 변수

데이터 타입 : 값을 저장하는 변수
포인터 변수 : 주소를 저장하는 변수
*/

#include	<stdio.h>

int main(void) {
	int num = 10;	// 값을 저장하는 변수
	int* pnum = &num;	// 방법 1 포인터 변수 : 주소 저장 (num 변수의 주소) -> 권장
	int * p1 = &num;	// 방법 2
	int *p2 = &num;		// 방법 3
	double d1 = 2.45;
	double* dptr = &d1;

	printf("num = %d\n", num);		// 10
	printf("num = %d\n", *pnum);	// 포인터 변수 pnum이 가리키는 곳의 내용 -> 10

	printf("d1 = %f\n", d1);		// 10
	printf("d1 = %f\n", *dptr);		// 포인터 변수 pnum이 가리키는 곳의 내용 -> 10

	dptr = &num;	// 서로 다른 유형이면 에러가 발생된다. -> 같은 유형을 사용해야 함
	return 0;
}