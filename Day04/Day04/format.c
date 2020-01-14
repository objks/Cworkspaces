/*
���Ĺ���: �����͸� �������� ������ ���ؼ� ���
%d : int
%c : character, �� ����
%f : �Ǽ�(float, double)
%s : string(���ڿ� char[]) "����"
%x : 16���� (hexadecimal)
%o : octal(8����)
%ld : long decimal
%lld : long long decimal
%u : unsigned int
%e : ���� ���� 3.14E-5
%g : %e, %f �Ѵ� �����ϰ� ��쿡 ���� %f �Ǵ� %e�� ���

��°� �Է½� ������
�Է� : %f : float, %lf : long float-> double
��� : float, double�� ���о��� %f
*/

#include	<stdio.h>

int main_format(void) {
	int num = 100;
	printf("num = %d, 0x%x, 0%o\n", num, num, num);
	double d1 = 0.0000456;
	printf("d1 = %f(%%f), %e(%%e), %g(%%g)\n", d1, d1, d1);
	printf("%s\n", "���ѹα�");
	int* pa = &num;
	printf("pa = %p\n", pa);	// %p : ���� num�� �ּ�
	int ch = 'r';
	printf("ch = %c\n", ch);	// %c : �� ����
	return 0;
}