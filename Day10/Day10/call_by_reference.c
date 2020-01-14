/*
call by reference(포인터) 사용
주소를 매개변수로 넘겨주는 것
*/

#include	<stdio.h>

void swap2(int* pa, int* pb) {
	printf("*pa=%d, *pb=%d\n", *pa, *pb);
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	printf("*pa=%d, *pb=%d\n", *pa, *pb);
}

int main_reference(void) {
	int a = 10, b = 20;

	printf("a=%d, b=%d\n", a, b);
	swap2(&a, &b);	// a:10->20, b:20->10
	printf("a=%d, b=%d\n", a, b);

	return 0;
}