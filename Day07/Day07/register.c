/*
Register����
CPU���� �����ϴ� �������� ���� �ϳ�(1~2)�� ���.
���� ���� �ӵ��� ���� �Լ��� ����� �ʿ䰡 ���� �� ���
*/

#include	<stdio.h>

int accumulate(int n) {
	register int sum = 0;	// register ���� : CPU���� ���Ǵ� �������͸� �̿�
		// ���� ���Ǵ� �Լ����� ���� ������ ������ ��
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main_register(void) {

	// 1~10������ ���� ���Ѵ�.
	int result = accumulate(10);
	printf("��� = %d\n", result);
	return 0;
}