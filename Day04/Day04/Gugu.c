#include	<stdio.h>

int main_gugu(void) {
	// ���� �Է� �ް�, �� ���� �������� ���
	int dan;
	printf("�� ��: ");
	scanf("%d", &dan);
	// �ݺ���
	// dan * 1 = dan *1 (1~9)
	printf("%d��\n", dan);
	int i = 1;	// i, j, k, l,
	while (i < 10) {	// �ݺ���
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}

	printf("\n%d��\n", dan);
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}