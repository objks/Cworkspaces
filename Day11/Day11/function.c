/*
�Լ����� �Ű�����, ��ȯ���� ����ü�� ����ϴ� ���
��ȯ�� �Լ��̸�(�Ű�����) {
}
�⺻ ������ Ÿ�� : int, float -> ��ȯ��, �Ű�����
����ü : ��ȯ��, �Ű�����
*/

#include	<stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

Point getCoordinate() {
	Point in;

	printf("��ǥ�� �Է�(10 20) : ");
	scanf("%d %d", &in.xpos, &in.ypos);
	return in;	// ��ȯ�� : ����ü Point
}

// const : ��� : ����ü p�� ���� ���� ����
void printCoordinate(const Point p) {	// �Ű������� ����
	printf("��ǥ��: (%d, %d)\n", p.xpos, p.ypos);
}

void getCoordi(Point* ptr) {
	printf("��ǥ�� �Է�(10 20) : ");
	scanf("%d %d", &ptr->xpos, &ptr->ypos);
}

int main_function(void) {
	//��ǥ���� ��� ����ϴ� ���α׷�
	Point p;
	Point p1 = { 20, 30 };
	Point p2 = p1;	// ����ü ������ �ѹ��� ����� ��� ����(xpos, ypos)

	p = getCoordinate();	// x��ǥ�� y��ǥ�� �Ѳ����� ��ȯ
	printCoordinate(p);	// ��ǥ�� ���

	getCoordi(&p);	// call by reference : �ּ�
	printCoordinate(p);	// ��ǥ�� ���

	return 0;
}