#include	<stdio.h>

int main4(void) {
	// 5 + 6 = 11 -> ���
	int num1 = 5;	// '=' : ���Կ����� (�����ʿ� �ִ� ���� ���ʿ� �ִ´�)
	int num2 = 6;	// ������ ����ؼ� �߰� ������� �����Ѵ�. -> ����: ���߿� ����
	int sum = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, sum);

	printf("%d + %d = %d\n", 5, 6, 5+6);
	return 0;
}