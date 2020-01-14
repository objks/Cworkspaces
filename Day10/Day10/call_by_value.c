/*
call by value : �Լ��� ȣ���ϸ鼭 ���� �Ѱ��ִ� ��
-> main �Լ��� �ִ� ���� ������ �� ����
*/

#include	<stdio.h>

void swap1(int n1, int n2) {
	printf("n1=%d, n2=%d\n", n1, n2);
	int tmp = n1;	// ��ȯ
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