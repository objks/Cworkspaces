/*
n! = 1 * 2 * 3 * ... * n�� ����ϴ� ����
sum = 0;	1, 2, .., 10
�� sum += i;
*/

#include	<stdio.h>

int main_prob07_4_2(void) {
	int n;	// �Է°�
	int result = 1;	// �ʱ�ġ(1)	// ���� ������� ũ�⸦ �Ǵ� -> int(4), long long(8)
	int i;	// ���������� �ݺ����� i, j, k, l, m, ....

	printf("n : ");		// ����
	scanf("%d", &n);	// �Է�

	// n!�� ���
	for (i = 1; i <= n; i++) {	// �ʱ�ġ?, ���ǽ� i<=n, ������ i++
		result *= i;		// i�� �����Կ� ���� ������� ������
	}
	printf("%d! = %d\n", n, result);
	return 0;
}