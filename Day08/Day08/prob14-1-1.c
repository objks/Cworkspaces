/*
���� 1. ���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�,
	�̸� ȣ���ϴ� main �Լ��� �ۼ��غ���. ��, ���⼭�� ���� ��
	���� ���·� �Լ��� �����ؾ� �Ѵ�.
	- Call-by-value ����� SquareByValue �Լ�
	- Call-by-reference ����� SquareByReference �Լ�

	SquareByValue : return ���� ������ ��ȯ
	SquareByReference : �Ű������� ���� �����ϵ��� �䱸
*/

#include	<stdio.h>

int SquareByValue(int n) {
	return n * n;
}

void SquareByReference(int* n) {
	/*
	int tmp = *n;
	*n = tmp * tmp;
	*/
	*n = *n * *n;
}

int main(void) {
	int num = 5;

	// int save = num;
	printf("%d�� ���� = %d\n", num, SquareByValue(num));
	SquareByReference(&num);	// num : 25
	printf("���� : %d\n", num);	// 25
	return 0;
}