/*
const : constant�� ���� : ��� -> ������ �ʴ� ��
*/

#include	<stdio.h>

int add(const int a, const int b) {
//	a = 50;
//	b = 60;
	return a + b;
}

int main_const(void) {
	int num = 10;	// ����
	num = 20;		// ���� ���� ����

	const int count = 20;	// ����� ����
//	count = 30;	// ����̹Ƿ� ���� �Ұ��� -> ����
	int num2 = 40;
	int sum = add(num, num2);

	const int num5 =5;	// �ǹ� ����(���� �������� ��)
//	num5 = 10;
	num = num5;
	return 0;
}