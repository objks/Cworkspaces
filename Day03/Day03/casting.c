/*
�ڵ� ����ȯ : ���԰������� ���ʰ� �������� �ٸ� ��� �ڵ������� ����ȯ�� �̷������.
*/

#include	<stdio.h>

int main_casting(void) {
	// ���� -> �Ǽ�
	int num = 10;
	double d1 = 20;	// �������� int���ε� double���� ���� -> �ڵ�����ȯ
	printf("d1 = %f\n", d1);
	// ������ �߻��� �� �ִ�. �Ұ������� �ʴ�. �Ǽ��� ������ ����(ǥ���� �� �ִ�)�Ѵ�.
	// �Ǽ� -> ����
	int a = 3.14;	// ������ double (8 byte), int (4 byte) -> �Ҽ������ϰ� �ս� �߻�
	printf("a = %d\n", a);
	int b = 5 / 2;	// ���� / ���� = ���� 5 / 2 = 2
	printf("5/2 = %d\n", 5 / 2);
	printf("b = %d\n", b);
	int c = (double)5 / 2;
	printf("(double)5/2 = %f\n", (double)5 / 2);
	printf("c=%d\n", c);
}