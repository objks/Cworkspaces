/*
�������� : ��𼭵��� ���� ����
ũ��(��) : ������ ũ�� -> �ʹ� ���� �ʰ�
*/

#include	<stdio.h>

int num = 10;	// ���ϳ����� ������ ��� ���� (���� �Լ����� ������ ���)

void callFuncOne() {
	num = 50;		// ���������̹Ƿ� ��� �Լ������� ���� ����
	printf("num = %d\n", num);
	int var1 = num + 30;	// �ϳ��� �Լ������� �ӽ÷� �Ҵ��ؼ� ����ϴ� ���
}

int main_global(void) {
	printf("num = %d\n", num);	// num�� �������� �̹Ƿ� ���� ����
	int num = 20;
	printf("num = %d\n", num);	// num : �������� -> ���������� ���� �̸��� ������� �ʴ´�.
	callFuncOne();
	return 0;
}