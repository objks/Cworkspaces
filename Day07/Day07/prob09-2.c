/* ���� 09-2 */
#include	<stdio.h>

//int total = 0;	// ���� ���� -> static ������ ���

int AddToTotal(int num)
{
	static int total = 0;	// static ���� ->ó���� ȣ��� �� �ѹ��� �ʱ�ȭ�� ��
	int var1 = 10;	// �Լ��� ȣ��� ������ �����

	total += num;
	return total;
}

int main_prob_09_2(void)
{
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("����: %d\n", AddToTotal(num));
	}
	return 0;
}