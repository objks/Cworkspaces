/*
call by value : 함수를 호출하면서 값을 넘겨주는 것
-> main 함수에 있는 값을 변경할 수 없음
*/

#include	<stdio.h>

void swap1(int n1, int n2) {
	printf("n1=%d, n2=%d\n", n1, n2);
	int tmp = n1;	// 교환
	n1 = n2;
	n2 = tmp;
	printf("n1=%d, n2=%d\n", n1, n2);
}

int main_value(void) {
	int a = 10, b = 20;

	printf("a=%d, b=%d\n", a, b);
	swap1(a, b);	// a:10->20, b:20->10
	printf("a=%d, b=%d\n", a, b);

	return 0;
}