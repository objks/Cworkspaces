/*
���� ǥ��
�� ���� : 'A' (Ȭ ����ǥ '�� ����ؼ� 'A')
*/

#include	<stdio.h>

int main_howChar(void) {
	char ch = 'B';	// ���� : 1 byte -> char
	int ch2 = 'F';	// ������ int(4 byte)�� ���->���� ����
	char ch1 = 65;
	int ch3 = 100;

	// EOF : ���Ͽ� ������ ������ �ϰ�, ������ ������ ������ EOF(end of file) : -1 (int)
	printf("%c %d\n", ch, ch);		// %c : character�� ���� : �� ����
	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	return 0;
}