/*
const : ����� �������� ���ϰ� ������ ���� ��
*/

#include	<stdio.h>

void callFunction(const int* ptr) {
//	*ptr = 50;
	int* bptr = ptr;
	*bptr = 50;
	int var2 = *ptr + 10;
}

void function2(int* const ptr) {
	int one = 30;
//	ptr = &one;
}

int main_const(void) {
	int num = 10;	// ���� 10���� ������ ���� ���� �ڿ��� �������� ���ϰ� �ϰ� �ʹ�.
	num = 20;

	const int var1 = 20;	// �ʱ�ȭ ���� �ڿ��� �������� ���ϰ�
//	var1 = 30;	// ����
	const int* ptr = &num;	// ����(�����Ͱ� ����Ű�� ��)�� ���� �Ұ���
//	*ptr = 30;

	int* const pnum = &num;
//	pnum = &var1;

	callFunction(&num);
	function2(&num);
}