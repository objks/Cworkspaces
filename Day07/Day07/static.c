/*
static ���� : �Լ� �Ǵ� ���ϳ����� �����ϴ� ����
*/

#include	<stdio.h>

static int total = 0;	// static ���� : �� ���ϳ������� ��� ����
extern void callFuncTwo();

int add(int num) {
	printf("total = %d\n", total);	// ���ϳ������� ��𼭵��� ���� ����
	static int sum = 0;	// static ����
		// ó���� �Լ� add�� ȣ��ɶ��� ����ǰ�
		// �� ������ ȣ��� ���� ������� �ʰ�, ���� ������

	printf("sum = %d\tnum = %d\n", sum, num);	// '\t' : ��(8ĭ) ����
	sum += num;	// �����ؼ� ���ϱ� �����
	return sum;
}

void sub() {
//	int var3 = sum + 60;	// static ���� sum�� add�Լ������� ���� �����ϹǷ�
							// sub�Լ������� ���� �Ұ���
}

int main_static(void) {
	int i;
	int result;

	for (i = 1; i <= 10; i++) {
		result = add(i);
		sub();
	}
	printf("sum = %d\n", result);
//	printf("sum = %d\n", sum);	// ���� �Ұ���
	callFuncTwo();
	return 0;
}