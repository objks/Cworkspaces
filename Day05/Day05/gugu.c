/*
������ ��� : 2~9��, �Ŵ� n*1~n*9
��ø for��
*/

#include	<stdio.h>

int main_gugu(void) {
	// ��ø �ݺ���
	int i, j;
	int mul;	// �ٽ� ������� ������ ���� ������ �������� ����

	for (i = 2; i < 10; i++) {	// 2~10 (i : ��)
		printf("%d��\n", i);
		for (j = 1; j < 10; j++) {	// j : n*1~n*9
			mul = i * j;
			printf("%d * %d = %2d\n", i, j, mul);
		}
		printf("\n");	// ģ���ϰ� �ܰ� �ܻ��̸� �����ϱ� ����
	}
	return 0;
}