/* �Լ� ������
�Լ��� �ּҸ� �����ϰ�, �����͸� ����ؼ� �Լ��� ���� ������� �ּҸ� ����
�Լ� :
��ȯ�� �Լ��̸�(�Ű�����) {... }
�Լ��̸��� �� �Լ��� �ּҸ� �ǹ��Ѵ�.

�Լ� ������
��ȯ�� (*fptr) (�Ű�����)
*/

#include	<stdio.h>

int add(int a, int b) {
	return a + b;
}

int main_functionP(void) {
	int a = 10, b = 20;
	int sum = add(a, b);
	printf("��=%d\n", sum);

	void (*vptr) () = add;
	// �Լ� ������ ��� �� : ��ȯ�� (*fptr) (�Ű�����)
	int (*fptr) (int, int) = add;	// �Լ� ������ -> add  : �Լ��� �ּ�
	sum = fptr(30, 40);	// sum = 30 + 40 = add(30, 40)
	printf("��=%d\n", sum);

	// ������ : �ּ�, ������ Ÿ��(int, double)
	// �Լ� ������ : �ּ�, ��ȯ��, �Ű�����
	double d1 = 2.4;
	double* dptr = &d1;

	dptr = &a;	// ������ ������ �ٸ��� ����
	return 0;
}