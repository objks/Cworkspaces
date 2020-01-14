/*
���� 2. �� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���.
	���� �� �Լ��� �̸��� Swap3�� �ϸ�, ������ ���·� �Լ�
	�� ȣ��Ǿ�� �Ѵ�.
	Swap3(&num1, &num2, &num3);

	�׸��� �Լ�ȣ���� ����� num1�� ����� ���� num2��, num2��
	����� ���� num3��, �׸��� num3�� ����� ���� num1�� �����
	��� �Ѵ�.
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