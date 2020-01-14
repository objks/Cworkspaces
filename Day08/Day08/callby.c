/*
Call-by-value�� call-by-reference�� ����
call-by-value : �Լ��� ȣ���ϸ鼭 �Ű������� ���� �����ϴ� ��
*/

#include	<stdio.h>

int add2(int n1, int n2) {	// �Ű����� n1, n2 : ��(���� ��)�� ����Ǽ� ���޵�
	return n1 + n2;
}

void swap_by_value(int a, int b) {	// a=30, b=40
	int tmp = a;	// tmp:30
	a = b;			// a=40
	b = tmp;		// b=30	->a=40, b=30
}

void swap_by_reference(int* a, int* b) {	// ��(�ּ�)�� ����Ǽ� ���޵�) *a=30, *b=40
	int tmp = *a;	// tmp:30
	*a = *b;		// *a=40 -> main�Լ��� ���� a�� ���� 40
	*b = tmp;		// *b=30 -> main�Լ��� ���� b�� ���� 30
}

void function(double* dp1, double* dp2) {
	*dp1 = 9.1;
	*dp2 = 7.3;
}

int main_callby(void) {
	int a = 30;
	int b = 40;
	/*
	int sum = add2(a, b);
	printf("�� : %d\n", sum);
	*/
	int* aptr = &a;

	// �Լ��� ȣ���ϸ鼭 main �Լ����� ������ ���� a, b�� ����� ���� ��ȯ�ϰ� �ʹ�.
	printf("a = %d, b = %d\n", a, b);	// a=30, b=40
	swap_by_value(a, b);
	printf("a = %d, b = %d\n", a, b);	// a=30->40, b=40->30

	swap_by_reference(&a, &b);	// �Ű������� ���� �������� �ʰ�, ������ �ּҸ� ����
	printf("a = %d, b = %d\n", a, b);	// a=40, b=30

	// scanf �Լ� ��ü�� call-by-reference�� ������ �ϳ��� ��
	// scanf("%d %d", &num1, &num2);
	double d1 = 1.2;
	double d2 = 2.4;
	printf("d1=%f, d2=%f\n", d1, d2);
	function(&d1, &d2);
	printf("d1=%f, d2=%f\n", d1, d2);
	return 0;
}