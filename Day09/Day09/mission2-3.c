/*
10���� ���� �Է� �ޱ�
�Է¹޴� ������� Ȧ���� �տ��� ���
¦���� �ڿ��� ���� ���
�Է� : 1 1 4 4 4 4 3 3 2 2
��� : 1 1 3 3 2 2 4 4 4 4
*/

#include	<stdio.h>

int main_m23(void) {
	int arr[10];
	int num;
	int* fptr = &arr[0];	// �迭�� ó������
	int* bptr = &arr[9];	// �迭�� �ڿ�������
	int front = 0;
	int back = 9;

	printf("�� 10���� ���� �Է�\n");
	// ������ �Է� -> �ݺ�
	for (int i = 0; i < 10; i++) {
		// �ݺ��� ����
		printf("�Է�: ");
		scanf("%d", &num);
		// �Է¹��� ���� Ȧ������? ¦������? �Ǵ� -> �迭�� ����
		if (num % 2 == 0)	// ¦��
			*bptr-- = num;
		// arr[back--] = num;
		else {	// Ȧ��
			*fptr++ = num;	// 0->�����Ǵ� �������� ����
			// arr[front++] = num;
		}
	}

	printf("�迭 ����� ���:");
	for (int i = 0; i < 10; i++)
		printf(" %d", arr[i]);
	printf("\n");
	return 0;
}