/*
���ͷ� ��� : ���α׷� �߿� ���Ǵ� ����, ����, ���ڿ�
���α׷��� �ۼ��� �ϰ� �������� �ϸ� ������ ����
*/

#include	<stdio.h>

int main_literal(void) {
	int num = 30;	// ���α׷��� �Ϻ��̰�, ���������� ��򰡿� ����Ǿ� ����.
					// ���� �Ұ� -> ���
	int sum = 20 + 40;	// ��� : int �� (4 byte) ũ��

	printf("%d\n", sizeof(20));		// 4
	printf("%d\n", sizeof(3.4));	// �Ǽ��� ���ͷ� ��� -> �⺻ double 8 byte
	printf("%d\n", sizeof(3.4f));	// float (4 byte)
	return 0;
}