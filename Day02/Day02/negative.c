/*
���� ���� ���� ������ ���ϴ� ���
2�� ������ ���Ѵ�.
1�� ���� + 1
1�� ���� : ~num
~num + 1
*/

#include	<stdio.h>

int main(void) {
	int num = 15;

	printf("%d\n", num);
	num = ~num + 1;	// ���� 15(-15)
	printf("16���� ��� 0x%x, 10���� ��� %d\n", num, num);

	num = ~num + 1;	// ��� 15
	printf("16���� ��� 0x%x, 10���� ��� %d\n", num, num);

	num = 0xffffffff;
	printf("16���� ��� 0x%x\n", num);
	num = num & 0xfefefefe;	// e: 14(1110) ��Ʈ 0���� masking ��Ų��.
	printf("16���� ��� 0x%x\n", num);

	num = num | 0x01010000;	// e: 14(1110) ��Ʈ 1�� masking ��Ų��.
	printf("16���� ��� 0x%x\n", num);

	num = 0x01;
	printf("16���� ��� 0x%x\n", num);
	num <<= 4;	// �������� 4��Ʈ �̵� (�������� 1��Ʈ �̵�-> *2)
	printf("16���� ��� 0x%x\n", num);
	num >>= 2;	// ���������� 2��Ʈ �̵� (���������� 1��Ʈ �̵�->/2)
	printf("16���� ��� 0x%x\n", num);

	return 0;
}