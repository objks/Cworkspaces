/*
���� 1)
���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�,
�� ����ŭ "Hello World!"�� ����ϴ� ���α׷��� �ۼ��غ���.
*/

#include	<stdio.h>

int main_prob03_1_1(void) {
	int num;
	printf("���� ���� : ");
	scanf("%d", &num);
	int i = 0;	// �ݺ����� Ƚ��
	while (i < num) {
		printf("Hello Wordld!\n");
		i++;
	}
	return 0;
}