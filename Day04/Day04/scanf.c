/*
�Է� : scanf �Լ�
%d : ����(int)
%o : 8����
%x : 16����
%f : �Ǽ�(float)
%lf : double (8 byte)
%Lf : long double (8 byte)
%s : ���ڿ�
%c : �� ����
scanf ��� �ô� ������ �ּҰ�(&num)�� �Ű������� �Ѱ��ش�.
*/

#pragma warning(disable:4996)	// scanf depreciated ���� ���
#include	<stdio.h>

int main_scanf(void) {
	int num;
	printf("10���� ���� �Է� : ");
	scanf("%d", &num);
	printf("%d\t0%o\t0x%x\n", num, num, num);
	printf("8���� ���� �Է� : ");
	scanf("%o", &num);	// 8���� : %o
	printf("%d\t0%o\t0x%x\n", num, num, num);
	printf("16���� ���� �Է� : ");
	scanf("%x", &num);
	printf("%d\t0%o\t0x%x\n", num, num, num);
	// �Ǽ� �Է�
	double d1;
	float f1;
	printf("float ���� �Է� : ");
	scanf("%f", &f1);
	printf("%f\n", f1);
	printf("double ���� �Է� : ");
	scanf("%lf", &d1);
	printf("%f\n", d1);
	printf("���� ���� �Է� : ");
	scanf("%lf", &d1);
	printf("%f\n", d1);
}