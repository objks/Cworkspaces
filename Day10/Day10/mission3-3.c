/*
���� �߻� ���
int rand();	0~�ִ��(RAND_MAX: 32767)������ �� �߿� ������ ���� �߻�
	short(16bit)��� 
void srand(unsigned int seed);
*/

#include	<stdio.h>
#include	<stdlib.h>	// rand()�Լ��� ���̺귯��
#include	<time.h>	// time()�Լ� : ����ð� ���� (1970.1.1 0�� ������ ms)

int main_m33(void) {
	printf("0~%d������ �� �߻�\n", RAND_MAX);
	srand(time(NULL));	// seed������ ����ð� ���� �Ű������� ������
	for (int i = 0; i < 5; i++)
		printf("%d\n", rand());

	rand() % 3;	// ������ ������ ����ϸ� �߻���ų �� �ִ� ����� ���� �پ���.
	rand() % 6 + 1;	// 0~5 : 1~6
	return 0;
}