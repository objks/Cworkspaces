/*
����ü �迭�� ������
�⺻ ������ Ÿ�� : ������(char, short, long, int, long long),
				�Ǽ���(float, double, long double)
�迭 : int arr[10];
������ : int* ptr = &num;

����ü : �⺻ ������ Ÿ���� Ȯ��
struct point p[10];	// ����ü �迭
struct point* pptr = &p[0];	// ����ü ������	int -> struct point
*/

#include	<stdio.h>

struct point {
	int xpos;
	int ypos;
};

int main_sap(void) {
	int num = 10;
	int* nptr = &num;

	*nptr = 30;
	// �迭 ����
	struct point p[2] = { 2, 4, 6, 8 };
	struct point* ptr = p;

	printf("p[0] (%d, %d)\n", p[0].xpos, p[0].ypos);	// ������ ���
	printf("p[0] (%d, %d)\n", (*ptr).xpos, (*ptr).ypos);	// *ptr<=>p[0]
	printf("p[1] (%d, %d)\n", (ptr + 1)->xpos, (ptr + 1)->ypos);
					// �����͸� ����ؼ� ����� ���� ->(����Ű��)
	return 0;
}