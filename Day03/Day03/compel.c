/*
�����(������) ����ȯ
*/

#include	<stdio.h>

int main(void) {
	int math = 91;
	int eng = 100;

	int sum = math + eng;
	// ��� 1
	double avg = sum / 2.0;	// double ����� ��� ���� �� ����
							// �ϳ��� double�� ����(2->2.0)
		// sum : int -> double �ڵ�����ȯ

	// ��� 2
	double avg2 = (double)sum / 2;	// ��������ȯ : sum _> double
	printf("��� : %f\n", avg);
	printf("��� : %f\n", avg2);
	return 0;
}