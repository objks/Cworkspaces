/*
����, ���� : �������� 1��ŭ ������Ű�ų� ���ҽ�Ű�� ���
++num;	// num = num + 1
num++;	// num = num + 1
*/

#include	<stdio.h>

int main_Incre(void) {
	int num = 20;
	int b;

	int len = printf("num = %d\n", num);	// num = 20
	printf("����� ���� �� : %d\n", len);

	b = num++;	// b = 20, num = 21
	printf("b = %d, num = %d\n", b, num);	// b = 20, num = 21
	b = ++num;	// num = 22, b = 22
	printf("b = %d, num = %d\n", b, num);	// b = 22, num = 22
	return 0;
}