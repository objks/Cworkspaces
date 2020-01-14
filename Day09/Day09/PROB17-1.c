/*
���� 17-1 [���� ������ ������ Ȱ��]
������ ���� �� ���� int�� ������ ������ ���̰� 5�� int�� �迭��
�����Ѵ�.
	int * maxPtr;
	int * minPtr;
	int arr[5];

�׸��� MaxAndMin�̶� �̸��� �Լ��� �����ϰ� �̸� ȣ���ϸ鼭 ��
�� �迭�� �� ������ ������ ���� ������ ��������. ��� ������
��� ���������� �������� ������ ���̴�. �׸��� �Լ� ȣ����
�Ϸ�Ǹ�, ������ ���� maxPtr���� ���� ū ���� ����� �迭�����
�ּ� ����, minPtr���� ���� ���� ���� ����� �迭����� �ּ� ��
�� ����Ǿ�� �Ѵ�.
*/

/*
int num;
scanf("%d", &num);
*/

#include	<stdio.h>

void MaxAndMin(int arr[], int len, int** maxP, int** minP) {
	*maxP = &arr[0];
	*minP = &arr[0];

	for (int i = 1; i < len; i++) {
		if (**maxP < arr[i])
			*maxP = &arr[i];
		if (**minP > arr[i])
			*minP = &arr[i];
	}
}

int main(void) {
	int arr[5] = { 6, 4, 10, 8, 2 };
	int* maxPtr;	// �迭�� �ִ밪�� ����Ű�� ������
	int* minPtr;	// �迭�� �ּҰ��� ����Ű�� ������

	MaxAndMin(arr, 5, &maxPtr, &minPtr);	// �� �Լ����� maxPtr�� �ִ밪�� ����Ű���� �ּҸ� �����־�� ��
	printf("�ִ밪=%d, �ּҰ�=%d\n", *maxPtr, *minPtr);
	// *maxPtr = 10;
	// *minPtr = 2;
	return 0;
}