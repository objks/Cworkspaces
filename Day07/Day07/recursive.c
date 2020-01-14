/*
����Լ� : �Լ������� �ٽ� �ڱ� �ڽ��� ȣ���ϴ� �Լ�
	������ �� : ���������� ����Ͽ� �������� �Լ��� ����ǵ��� �Ͽ��� ��
	���� ���Ǵ� ��� : ū ������ ���׸��� ������ ��� �ɰ��� Ǫ�� ���
	(divide and conquer)
*/

#include	<stdio.h>

void recursive(int n) {
	printf("recursive �Լ��� ȣ���\n");
	if(n >  0)
		recursive(n - 1);	// �� �Լ������� �ڱ� �ڽ�(recursive())�� �ٽ� ȣ��
}

// n!
// n = 1 1
// n > 1 n!= n * (n - 1)!
int factorial(int n) {	// 
	if (n == 1)	// 1
		return 1;
	else {
		return n * factorial(n - 1);	// ����Լ�
	}
}

int main_recursive(void) {
	/*
	printf("recursive �Լ� ���� ���� ���\n");
	recursive(100);
	printf("recursive �Լ� ���� �Ŀ� ���\n");
	*/
	printf("%d\n", factorial(6));	// 6!
	return 0;
}