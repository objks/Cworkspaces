/*
전역변수 : 어디서든지 접근 가능
크기(양) : 적당한 크기 -> 너무 많지 않게
*/

#include	<stdio.h>

int num = 10;	// 파일내에서 어디든지 사용 가능 (여러 함수에서 집근할 경우)

void callFuncOne() {
	num = 50;		// 전역변수이므로 어느 함수에서도 접근 가능
	printf("num = %d\n", num);
	int var1 = num + 30;	// 하나의 함수내에서 임시로 할당해서 사용하는 경우
}

int main_global(void) {
	printf("num = %d\n", num);	// num이 전역변수 이므로 접근 가능
	int num = 20;
	printf("num = %d\n", num);	// num : 지역변수 -> 전역변수와 같은 이름을 사용하지 않는다.
	callFuncOne();
	return 0;
}