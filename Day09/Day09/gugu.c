/*
�������� ����� �迭�� ����
2~9��
2*1~2*9
9*1~9*9
gugu[10][10] : 0, 1 �޸��� ���� ���� �� ������, ũ�� �Ű澵 ���� �ƴ�
*/

#include	<stdio.h>

int main_gugu(void) {
	int gugu[10][10];	// ������ ������� ����

	printf("%p\n", gugu);	// gugu = &gugu[0][0] = &gug[0]
	for (int i = 2; i < 10; i++) {		// ��
		printf("%p\n", gugu[i]);	// gugu[i] : ���� �ּ�
		for (int j = 1; j < 10; j++) {	// ��
			gugu[i][j] = i * j;
		}
	}
	for (int i = 2; i < 10; i++) {
		printf("%d��\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, gugu[i][j]);
		}
		printf("\n");
	}
}