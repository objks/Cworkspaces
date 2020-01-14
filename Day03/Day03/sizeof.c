/*
�⺻ ������ Ÿ�� :
����->�⺻ ������ Ÿ�� int
char	1 byte(8 bit) -128~127(0)
short	2 byte(16 bit) xxx
int		4 byte(32 bit) xxx
long	4 byte(32 bit) xxx
long long 8 byte(64 bit) xxx
�Ǽ� : ������ �߻��� �� ���� : �⺻ ������ Ÿ�� double
float	4 byte
double	8 byte (������ Ȯ���� ����)
long double	8 byte
*/

#include	<stdio.h>

int main_sizeof(void) {
	// ������ Ÿ���� ũ�� : sizeof() -> �޸��� ���� ũ��
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("long long�� ũ�� : %d\n", sizeof(long long));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("double�� ũ�� : %d\n", sizeof(double));
	printf("long double�� ũ�� : %d\n", sizeof(long double));

	printf("int* �� ũ�� : %d\n", sizeof(int *));

	char c = 128;	// �ս� �߻� (-128~127)-> �˰� ���α׷��� �ؾ� �Ѵ�.
	short s = 123;	// -32xxx~32xxx
	int num = 1234567;	// �ּ�~�ִ�
	// ������ �������� ũ�⸦ �����ؼ� ������ Ÿ���� �����ؾ� ��
	long long ll = 1234567890123;
	num = ll;
	float f1 = 0.1f;	// 0.1f: float 4 byte
	double d1 = 0.1;	// f�� �����ϸ� 0.1 -> double (8 byte)
	return 0;
}