/*
���� 2. ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� ����
	���� ����ϴ� ���α׷��� �ۼ��� ����.
	���� ���,	2, 5�� �Է� ������ 2��~5�ܱ��� ���
		6, 3�� �Է� ������ 3��~6�ܱ��� ���
*/

#include	<stdio.h>

void printGugu(int small, int large) {
	for (int i = small; i <= large; i++) {
		printf("%d��\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int main_m12(void) {
	int num1, num2;
	int tmp;

	printf("�� ���� ���� : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {	// 6 3
		tmp = num1;
		num1 = num2;
		num2 = tmp;		// num1 : ���� ��, num2: ū��
		printGugu(num2, num1);	// �������� ��� �Լ� : �Ű����� (���� ��, ū ��)
		/*
		// 3 ~ 6��
		for (int i = num2; i <= num1; i++) {
			printf("%d��\n", i);
			for (int j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
		*/
	}
	else {				// 2 5
		printGugu(num1, num2);	// �������� ��� �Լ� : �Ű����� (���� ��, ū ��)
		/*
		// 2 ~ 5��
		for (int i = num1; i <= num2; i++) {
			printf("%d��\n", i);
			for (int j = 1; j < 10; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
		*/
	}
	// num1 < num2
	// ���� for �� ����

	for (int i = num1; i <= num2; i++) {
		printf("%d��\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	// �Լ��� ȣ��
	return 0;
}