/*
문제 2. 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
	예를 들어서 함수의 이름이 Swap3라 하면, 다음의 형태로 함수
	가 호출되어야 한다.
	Swap3(&num1, &num2, &num3);

	그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에
	저장된 값은 num3에, 그리고 num3에 저장된 값은 num1에 저장되
	어야 한다.
	int num = 10;
	int* ptr = &num;
*/

#include	<stdio.h>

void Swap3(int* a, int* b, int* c) {	// 10, 20, 30
										// 30, 10, 20
	int tmp = *a;	// 10
	*a = *c;	// *a = 30, *b = 20, *c = 30
	*c = *b;	// *a = 30, *b = 20, *c = 20
	*b = tmp;	// *a = 30, *b = 10, *c = 20;
}

int main_prob14_1_2(void) {
	int num1 = 10, num2 = 20, num3 = 30;

	printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

	return 0;
}