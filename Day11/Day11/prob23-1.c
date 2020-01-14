/*
���� 23-1 [����ü ������ ����]
���� ����ü�� �� ������ ������� ����� ���� ���� �ٲپ��ִ� �Լ�
�� �����ϰ� �̸� ȣ���ϴ� ������ �ۼ��غ���.

typedef struct point {
	int xpos;
	int ypos;
} Point;

���� �� ������ ���� �� ���� ����ü ������ ����� ���¿���
	Point pos1 = { 2, 4 };	-> { 5, 7 }
	Point pos2 = { 5, 7 };	-> { 2, 4 }

�� �� ����ü ������ �������, Ȥ�� �� ����ü ������ �ּ� ����
������� SwapPoint��� �̸��� �Լ��� ȣ���ϸ� pos1�� xpos,
ypos���� ���� 5�� 7��, �׸��� pos2�� xpos, ypos���� ����
2�� 4�� ����Ǿ�� �Ѵ�.

*/

#include	<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point p1, Point p2) {
	printf("p1�� ��ǥ: (%d, %d)\n", p1.xpos, p1.ypos);
	printf("p2�� ��ǥ: (%d, %d)\n", p2.xpos, p2.ypos);

	Point tmp = p1;
	p1 = p2;
	p2 = tmp;

	printf("p1�� ��ǥ: (%d, %d)\n", p1.xpos, p1.ypos);
	printf("p2�� ��ǥ: (%d, %d)\n", p2.xpos, p2.ypos);
}

void SwapPointReference(Point* p1, Point* p2) {
	printf("p1�� ��ǥ: (%d, %d)\n", (*p1).xpos, p1->ypos);
	printf("p2�� ��ǥ: (%d, %d)\n", p2->xpos, p2->ypos);

	Point tmp = *p1;	// p1->&pos1 *p1->pos1(xpos, ypos)
	*p1 = *p2;			// p2->&pos2 *p2:pos2(xpos, ypos)
	*p2 = tmp;

	printf("p1�� ��ǥ: (%d, %d)\n", p1->xpos, p1->ypos);
	printf("p2�� ��ǥ: (%d, %d)\n", p2->xpos, p2->ypos);
}

int main_prob231(void) {
	int a = 10;
	int b = 20;

	// swapByReference(&a, &b);

	Point pos1 = { 2, 4 };	// -> { 5, 7 }
	Point pos2 = { 5, 7 };	// 2, 4

	
	printf("pos1�� ��ǥ: (%d, %d)\n", pos1.xpos, pos1.ypos);
	printf("pos2�� ��ǥ: (%d, %d)\n", pos2.xpos, pos2.ypos);

	/*
	SwapPoint(pos1, pos2);
	*/
	SwapPointReference(&pos1, &pos2);

	printf("pos1�� ��ǥ: (%d, %d)\n", pos1.xpos, pos1.ypos);
	printf("pos2�� ��ǥ: (%d, %d)\n", pos2.xpos, pos2.ypos);
	

	return 0;
}