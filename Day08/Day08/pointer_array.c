/* 
������ �迭
�迭 : �⺻ ������ Ÿ��(int, char, float, double) ������ �����͸� ���� �� ��� ����
���� : �����͸� ����
������ ���� : �ּҸ� ����
*/

#include	<stdio.h>

int main_parray(void) {
	int num1 = 20;
	int num2 = 30;
	int num3 = 40;

	// �迭
	int narr[3] = { 20, 30, 40 };

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	// ������ �迭 : �ּҸ� �����ϴ� �迭
	int* parr[3] = { &num1, &num2, &num3 };

	char* com[4] = { "add", "sub", "mul", "div" };

	for (int i = 0; i < 3; i++) {
		printf("*parr[%d] = %d\n", i, *parr[i]);	// 20 30 40
	}

	for (int i = 0; i < 4; i++) {
		printf("*com[%d] = %s\n", i, com[i]);	// add sub mul div
	}
	return 0;
}