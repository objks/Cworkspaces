/*
���������� ������ �� �Ķ���͸� �Է¹޴� ���
int main(int argc, char* argv[]) {
}
*/

#include	<stdio.h>
#include	<string.h>

int main_main(int argc, char* argv[]) {
	// argc : �Ű�����(�Ķ����)�� ��
	// argv[] : ������ �迭 -> �Ķ������ ��(���ڿ� ���� ��)

	for (int i = 0; i < argc; i++) {
		printf("%d��° �Ķ���� : %s\n", i, argv[i]);
	}

	int a = atoi(argv[1]);	// atoi : ascii to integer
	int b = atoi(argv[2]);
	printf("��: %d\n", a + b);
	return 0;
}