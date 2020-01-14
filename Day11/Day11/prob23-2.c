/*
���� 23-2 [�پ��� ������ ����ü ����]
�� ����� x, y ��ǥ�� [0, 0], �� �ϴ��� x, y ��ǥ�� [100, 100]�� ��ǥ
������ ���簢�� ������ ǥ���ϴ� ����ü Rectangle�� �����ϵ�,
���� ����ü�� ������� �����غ���.
typedef struct point {
	int xpos;
	int ypos;
} Point;

�׸��� Rectangle ����ü ������ ���ڷ� ���޹޾Ƽ� �ش� ���簢����
 ���̸� ����ؼ� ����ϴ� �Լ��� ���簢���� �̷�� �� ���� ��ǥ��
���� ����ϴ� �Լ��� ���� �����غ���. �� ��ǥ���󿡼� ���簢��
�� ǥ���ϱ� ���ؼ� �ʿ��� ���� ������ 4���� �ƴ� 2���̴�,
���簢���� �ǹ��ϴ� Rectangle ���������� �� ���� ������ �����ؾ� �Ѵ�.
*/

#include	<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

// �簢�� ����ü ����
typedef struct rectangle {
	Point p1;	// �밢��
	Point p2;
} Rectangle;

void calculateArea(Rectangle r) {
	int width = r.p2.xpos - r.p1.xpos;
	int height = r.p2.ypos - r.p1.ypos;
	printf("���� = %d\n", width * height);
}

void printFourPoint(Rectangle r) {
	printf("���� ����� ��ǥ = %d, %d\n", r.p1.xpos, r.p1.ypos);
	printf("������ ����� ��ǥ = %d, %d\n", r.p2.xpos, r.p1.ypos);
	printf("���� �ϴ��� ��ǥ = %d, %d\n", r.p1.xpos, r.p2.ypos);
	printf("������ �ϴ��� ��ǥ = %d, %d\n", r.p2.xpos, r.p2.ypos);
}

int main_prob232(void) {
	int num = 10;
	Rectangle r = { 0, 0, 10, 100 };
	calculateArea(r);	// ���簢���� ������ ����ϴ� �Լ�
	printFourPoint(r);	// 4���� ��ǥ�� ����ϴ� �Լ�

	return 0;
}