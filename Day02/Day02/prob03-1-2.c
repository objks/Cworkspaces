/*
2. ���α׷� ����ڷκ��� �� ���� ������ ������� �Է� ����
   �Ŀ�, ���� ������ ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
   num1 * num2 + num3
*/

#include	<stdio.h>

int main_prob03_1_2(void) {
	int num1, num2, num3;

	printf("3���� ���� : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("%d * %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}