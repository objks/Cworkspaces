/*
1. �迭 ����
int arr[10];

*/

#include	<stdio.h>

void odd(int arr[], int len) {	// �迭�� �迭�� ����
	// 10���� �����Ϳ� ���Ͽ� Ȧ�� ����? ¦������? �ݺ�
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0)	// ¦��
			// ���
			printf("%d ", arr[i]);
	}
	printf("\n");
}

void even(int len, int arr[]) {	// �迭�� �迭�� ����
	// 10���� �����Ϳ� ���Ͽ� Ȧ�� ����? ¦������? �ݺ�
	printf("¦�� ���: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0)	// ¦��
			// ���
			printf("%d ", arr[i]);
	}
	printf("\n");
}

int main_m21(void) {
	int arr[10];
	printf("�� 10���� ���� �Է�\n");
	// 10���� ������ �Է� �ޱ� -> for�� : �ݺ� : ��°� �Է�
	for (int i = 0; i < 10; i++) {
		// �ݺ� ������ ���� : 1. "�Է� : " ���, 2. �Է� �ޱ�
		printf("�Է�: ");
		scanf("%d", &arr[i]);	// �ش� ������ �ּҰ�
	}
	odd(arr, 10);	// Ȧ���� ����ϴ� �Լ� : �迭, ����
	even(10, arr);	// ¦���� ����ϴ� �Լ�
	return 0;
}