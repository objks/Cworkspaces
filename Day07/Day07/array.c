/* 
1���� �迭
���� : ������Ÿ�� �迭�̸�[ũ��];
������ Ÿ�� : char, short, int, long, long long, float, double, long double
�迭 : ���� �̸��� ���� �۸��� �Ѵ�.
ũ�� : �ʿ��� ��ŭ ����
*/

#include	<stdio.h>

int main_array(void) {
	// ���������� stack�� ����ǰ� �ʱ�ȭ�� ���� ������ �����Ⱚ�� ����Ǿ� ����
	char carr[10];	// ���� �Է�, ����� �� "abc"(3)->"abc\0"(4)
	short sarr[20];
	int narr[30] = { 10, 20 };	// narr[0] = 10, narr[1] = 20, narr[2~29] = 0
	double darr[20];	// ? ������ ��(� ������ �𸣴� ��)

	narr[10] = 20;
	// �迭�� �ݺ����� ����ϴµ� ����
	for (int i = 0; i < 30; i++)
		narr[i] = 2 * i;
	// sizeof : �޸𸮿��� �� ����Ʈ�� �����ϴ���?

	printf("narr �޸� ũ�� = %d\n", sizeof(narr));	// �迭 narr�� �޸� �� �� ����Ʈ?

	for (int i = 0; i < 30; i++)
		printf("narr[%d] = %d\n", i, narr[i]);
	return 0;
}