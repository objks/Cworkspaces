/*

*/


#include	<stdio.h>

int main_prob16_1_1(void) {
	int arr[3][9];	// ��: 0~2, ��:0~8

	for (int i = 2; i < 5; i++) {	// ���� : offset 2����
		for (int j = 1; j < 10; j++) {	// 1����
			arr[i - 2][j - 1] = i * j;
		}
	}
	for (int i = 2; i < 5; i++) {	// ���� : offset 2����
		for (int j = 1; j < 10; j++) {	// 1����
			printf("%3d", arr[i - 2][j - 1]);
		}
		printf("\n");
	}
	return 0;
}