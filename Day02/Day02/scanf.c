/*
�Է� ��� : Ű����κ��� �����͸� �Է� (scanf �Լ�)
*/

#include	<stdio.h>

int main_scanf(void) {
	int a = 10;

	// ������ �Է�
	printf("���� : ");
	scanf("%d", &a);	// %d : ����(decimal), &a : ������ �ּ�
	printf("a = %d\n", a);

	int b;
	printf("����(10 20) : ");
	scanf("%d %d", &a, &b);
	printf("a = %d, b= %d\n", a, b);

	scanf("%d", &a);	// %d�� �ԷµǴ� �� 1�� ������ �ȴ�.
	scanf("%d", &b);
	return 0;
}