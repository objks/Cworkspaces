/*
������ ����

������ Ÿ�� : ���� �����ϴ� ����
������ ���� : �ּҸ� �����ϴ� ����
*/

#include	<stdio.h>

int main(void) {
	int num = 10;	// ���� �����ϴ� ����
	int* pnum = &num;	// ��� 1 ������ ���� : �ּ� ���� (num ������ �ּ�) -> ����
	int * p1 = &num;	// ��� 2
	int *p2 = &num;		// ��� 3
	double d1 = 2.45;
	double* dptr = &d1;

	printf("num = %d\n", num);		// 10
	printf("num = %d\n", *pnum);	// ������ ���� pnum�� ����Ű�� ���� ���� -> 10

	printf("d1 = %f\n", d1);		// 10
	printf("d1 = %f\n", *dptr);		// ������ ���� pnum�� ����Ű�� ���� ���� -> 10

	dptr = &num;	// ���� �ٸ� �����̸� ������ �߻��ȴ�. -> ���� ������ ����ؾ� ��
	return 0;
}