/*
��������(global) :
	���ϳ��� ��� �������� ��� ����
	��� ���Ͽ��� (������Ʈ������) ��� ����
	������ �ּҰ� �����Ѵ�.
	ũ��(��) : ������ ���, �ʹ� ���� ����ϸ� �δ�
	������ �տ��� ���� (����) : �Լ� �տ��� ���
	�ٸ�(���) ���Ͽ��� ȣ�� ����

��������(local) : �ش� ���� (�Լ�(����)�� '{', '}')
	���ϳ������� ���Ǵ� ����
	stack ������ �����
	������ ����� �������. (������ ����Ǵ� �Ⱓ���� ����)
	�ٸ� ���Ͽ��� ȣ���� �� ����

static ����
	�Լ�(����)������ �����ؼ� ��� : �ش� �Լ��� ���ϳ����� ��� ����
	�ٸ� �Լ��� ���Ͽ����� ȣ�� �Ұ���
	������ ���� ���� : heap ������ ������ �ǰ� ���α׷��� ����Ǵ� ���� ��� ����)
	������ �Լ��� ȣ��Ǹ� ������ ����Ǿ��� ���� �ٽ� ����� �� ����.
	ũ�� : ������ ũ�⸦ ����ؾ� ��.

register ����
	CPU ������ �����ϴ� �������� �߿� �ϳ��� ����Ѵ�. : 1~2�� ����
	���� ���α׷� ������ ����. (�Ϲ������δ� ������� �ʰ�)

volatile ���� : �ֹ߼�(?)
*/

#include	<stdio.h>

// ��� 1 : �տ� ����
void simpleFuncOne() {
	int num = 20;	// �������� : �Լ��������� ��ȿ�ϰ� �Լ��� ����Ǹ� ������
	int num1 = 30;	// stack ������ ����
	int num2 = 40;
	printf("num = %d\n", num);
}

int simpleFuncTwo(int num) {	// �Ű������� ���޵Ǵ� num�� ���������̴�.
	num = 30;	// �Լ��� �����ϴ� �Ⱓ���� ��ȿ
	return num;
}	// main�� �ִ� num�� ����Ǿ� ��� ���Ǵٰ� �����

int main_local(void) {
	int num = 10;
	printf("num = %d\n", num);

	simpleFuncOne();
	printf("num = %d\n", num);

	num = simpleFuncTwo(num);		// simpleFuncTwo �Լ� �̸��� ������ �����̸�, �ּҰ� �ִ�. ����
	printf("num = %d\n", num);

	return 0;
	// ���� num�� main�� simpleFucnOne���� ����ǰ� ���������
	// �̸��� ������ �����δ� �ٸ� ����
}