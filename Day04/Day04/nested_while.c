/*
��ø while��
while(���ǽ�) {	// �ٱ�
	while(���ǽ�) {	// inner while

	}
}

������ : 2�� ~ 9�� (�ݺ���) : Ƚ�� index : i
	�ش� �� 1~9 (�ݺ���) Ƚ�� index : j
*/

#include	<stdio.h>

int main_nested(void) {
	int i, j;	// Ƚ���� �ִ� �ݺ���
	// 2~9�� �ݺ���
	i = 2;	// �ʱ�ġ
	while (i < 10 /* ���ǽ� */) {	// <= 9 (�ٱ� outer)
		printf("%d��\n", i);	// x ��
		// �ش� ���� 1 ~9 �ݺ�
		j = 1;	// �ʱ�ġ
		while (j < 10 /* ���ǽ� */) {	// ��ø while (inner) ����
			// �������� ���
			printf("%d * %d = %2d\n", i, j, i * j);
			j++;	/* ������ */
		}
		printf("\n");	// �ܰ� �ܻ����� �̻ڰ� ���������� ���

		i++;	/* ������ */
	}
	return 0;
}