/*
10���� ���� �Է¹��� �� 2������ ���
12 -> 1100
*/

#include	<stdio.h>

void convertToBinary(int n) {	// �Ű������� �ƹ����Գ� �۸�
	// 2�� ����� �������� ��� ������ �ؾ� �� -> �迭�� ����
	int bin[100];	// �迭�� ũ��� ����� ������ ũ�� ��´�.

	int i;	// for�� ������ i�� ��� ����ؾ� ��. �׷��� for�� �տ� ���� i�� ����
	for (i = 0; n > 0; i++) {	// 12->0, 6->0, 3->1, 1->1(i=3)
		bin[i] = n % 2;	// 1. �������� �迭�� ����
		n /= 2;			// 2. 
	}
	// i=4
	// 2������ ��� : 3~0
	for (i--; i >= 0; i--) {
		printf("%d", bin[i]);
	}
	printf("\n");
}

int main_m22(void) {
	int num;

	printf("10���� ���� �Է�: ");
	scanf("%d", &num);	// �ּ� : call-by-reference
	convertToBinary(num);	// 10���� -> 2���� ���
	return 0;
}