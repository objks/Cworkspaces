/* 
typedef : ����ڰ� ������ ������ ����
*/

#include	<stdio.h>

typedef int INT;	// ��Ī(����)
typedef unsigned int uint;
typedef int* PINT;
typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct circle {	// circle ���� ����
	Point center;
	double radius;
} Circle;

typedef struct {
	Point* center;	// struct point* center;
	double radius;
} Circle2;

typedef struct {
	Point tl;
	Point br;
} Rectangle;

int main_typedef(void) {
	INT num = 10;
	uint var1;
	PINT ptr = &num;
	Point p1;
	Circle c1;
	int a;
	struct point p2;

	p1.xpos = 10;
	p1.ypos = 10;

	c1.center.xpos = 30;
	c1.center.ypos = 40;
	c1.radius = 30.0;

	return 0;
}