/* 
void* : ������������ ������� ��� �ּҵ��� �����Ϸ��� �������� ���(����)
���� : ������ ������ �𸣹Ƿ� ���������� ����Ϸ��� ����� �� ����
������ : �ּ�, ������ ����
�׷���, ��� ������ ���������� Ȯ���� �� ������ ������ ��ȯ
int sum 100;
int count = 2;
double avg = (double)sum / count;	// ���� �� ��ȯ
void * vptr -> (int *) vptr -> ������ ������ �˰Եǰ� ������ �� �� �ִ�.
*/

#include	<stdio.h>

int main_voidP(void) {
	int num = 10;
	printf("num = %d\n", num);
	void* ptr = &num;
//	printf("num = %d\n", *ptr);	// ����
	printf("num = %d\n", *(int*)ptr);	// ���� ����ȯ -> int ������
	return 0;
}