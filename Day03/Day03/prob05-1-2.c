/*
���� 2. ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ�
	double�� ������ ��������. �׸��� �� ���� ��Ģ���� �����
	�������. (��Ʈ) %f(float), %lf(double)
	����� �� : %f(float, double)
*/

#include	<stdio.h>

int main_prob05_1_2(void) {
	double d1, d2;	// ��Ģ������ ���� ������ �Է¹��� ���� ����
	scanf("%lf %lf", &d1, &d2);	// call-by-reference : �Ű������� �ּҰ��� �Է� &d1
	// ��Ģ����
	printf("%f + %f = %f\n", d1, d2, d1 + d2);
	printf("%f - %f = %f\n", d1, d2, d1 - d2);
	printf("%f * %f = %f\n", d1, d2, d1 * d2);
	printf("%f / %f = %f\n", d1, d2, d1 / d2);
	return 0;
}