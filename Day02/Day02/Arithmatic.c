/*
����(=)�� ���(+, -, *, /, %)����
*/

#include	<stdio.h>	// printf(���), scanf(�Է�)

int main_Arith(void) {
	int a = 10;	// ���� : 10�� ���� a�� ����(����)
	int b = 2;	// ����

	// ���ϱ� ����
	int sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);

	// ����
	int sub = a - b;
	printf("%d - %d = %d\n", a, b, sub);

	// ���ϱ�
	int mul = a * b;
	printf("%d * %d = %d\n", a, b, mul);

	// ������
	int div = a / b;
	printf("%d / %d = %d\n", a, b, div);

	// ������ ���ϱ�
	int rem = a % b;
	printf("%d %% %d = %d\n", a, b, rem);	// "%" �� ��³������� �ϱ� ���� %%�� ����ؾ� ��


	// ���� ���� ������
	/*
	a = a + b; -> a += b;
	*/
	a += b;	// 10 + 2 = 12;
	printf("a = %d\n", a);

	a -= b;	// 12 - 2 = 10;
	printf("a = %d\n", a);

	a *= 2;	// 10 * 2 = 20;
	printf("a = %d\n", a);

	a /= 2;	// 20 / 2 = 10;
	printf("a = %d\n", a);

	a %= 2;	// 10 % 2 = 0
	printf("a = %d\n", a);

	return 0;
}