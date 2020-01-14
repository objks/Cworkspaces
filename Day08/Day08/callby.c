/*
Call-by-value와 call-by-reference의 차이
call-by-value : 함수로 호출하면서 매개변수로 값을 전달하는 것
*/

#include	<stdio.h>

int add2(int n1, int n2) {	// 매개변수 n1, n2 : 값(변수 값)이 복사되서 전달됨
	return n1 + n2;
}

void swap_by_value(int a, int b) {	// a=30, b=40
	int tmp = a;	// tmp:30
	a = b;			// a=40
	b = tmp;		// b=30	->a=40, b=30
}

void swap_by_reference(int* a, int* b) {	// 값(주소)이 복사되서 전달됨) *a=30, *b=40
	int tmp = *a;	// tmp:30
	*a = *b;		// *a=40 -> main함수의 변수 a의 값이 40
	*b = tmp;		// *b=30 -> main함수의 변수 b의 값이 30
}

void function(double* dp1, double* dp2) {
	*dp1 = 9.1;
	*dp2 = 7.3;
}

int main_callby(void) {
	int a = 30;
	int b = 40;
	/*
	int sum = add2(a, b);
	printf("합 : %d\n", sum);
	*/
	int* aptr = &a;

	// 함수를 호출하면서 main 함수에서 선언한 변수 a, b에 저장된 값을 교환하고 싶다.
	printf("a = %d, b = %d\n", a, b);	// a=30, b=40
	swap_by_value(a, b);
	printf("a = %d, b = %d\n", a, b);	// a=30->40, b=40->30

	swap_by_reference(&a, &b);	// 매개변수로 값을 전달하지 않고, 변수의 주소를 전달
	printf("a = %d, b = %d\n", a, b);	// a=40, b=30

	// scanf 함수 자체도 call-by-reference를 적용한 하나의 예
	// scanf("%d %d", &num1, &num2);
	double d1 = 1.2;
	double d2 = 2.4;
	printf("d1=%f, d2=%f\n", d1, d2);
	function(&d1, &d2);
	printf("d1=%f, d2=%f\n", d1, d2);
	return 0;
}