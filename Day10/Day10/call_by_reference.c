/*
call by reference(������) ���
�ּҸ� �Ű������� �Ѱ��ִ� ��
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