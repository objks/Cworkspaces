/*
�Լ��� �Ű������� �迭�� �����ϴ� ���
*/

#include	<stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

// ���ڿ� �迭 : '\0'�� �迭�� ���ԵǹǷ� ���ڿ��� ���̸� �˼� �ְ�, ���� ���̴� ���� ����
// �迭 : �迭�� ũ��
int array_add(int narr[], int len) {		// arr[i] : *(ptr + i) ����(���)
//int array_add(int* narr) {	// arr[i] : *(ptr + i)
	int total = 0;
	for (int i = 0; i < len; i++) {
		total += narr[i];
	}
	return total;
}

// �Լ��� �Ű������� �迭�� ������ ��
// �Ű������� �ּҿ� �迭�� ũ�⸦ ����

int main_argu(void) {
	int a = 10;
	int b = 20;

	int sum = add(a, b);	// �� : ���� ��ü
	printf("��: %d\n", sum);

	int arr[2] = { 30, 40 };
	int arr2[5] = { 10, 20, 30, 40, 50 };
	sum = array_add(arr2, 5);
	printf("��: %d\n", sum);
	sum = array_add(arr, 2);	// �迭�� �����͸� ��� ���ؼ� ��ȯ : �Ű������� arr (�迭�� �ּ�)
	printf("��: %d\n", sum);

	return 0;
}