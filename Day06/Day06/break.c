/*
�ݺ����� ����(continue)�� Ż��(break) : � ������ �����ϸ�
0~n(1�� �����ϸ鼭 ���� ���ϴµ� 5000���� ���� n?)
Ư�� ������ �Ǵ��ϴ°� ���� �ݺ��� ����ؾ� �ϹǷ� while�� ���
*/

#include	<stdio.h>

int main_break(void) {
	int num = 0;	// 0 ~ n
	int sum = 0;	// ��

	while (1) {	// ���� �ݺ�
		sum += num;
		if (sum > 5000) {	// Ư�� ������ ������
			break;		// break�� ���δ� �ݺ����� ����-> 20
		}
		num++;
	}
	printf("��: %d\n", sum);
	printf("num: %d\n", num);
	return 0;
}
