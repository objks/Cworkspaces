/*
���� 5 : ���� ���� �� ����
���� 1, ���� 2, �� : 3
- ������� ������ �Է� �޴´�.
- ��ǻ�Ͱ� ����
- ������ �Ǵ�
- ���� ����� ���
- �ݺ��� ���� ����
*/

/*
#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>

char* selection[4] = { "", "���� ����", "���� ����", "�� ����" };	// ����(1), ����(2), ��(3)
char* result[3] = { "�����ϴ�.", "�̰���ϴ�.", "����� �����ϴ�." };	// 0:���, 1:�̱�, 2:��

void printResult(int user, int com, int r) {
	printf("����� %s, ��ǻ�ʹ� %s, %s\n", selection[user], selection[com], result[r]);
}

int inputUserSelection() {
	int value;

	printf("������ 1, ������ 2, ���� 3: ");
	scanf("%d", &value);
	return value;
}

int generateComSelection() {
	return rand() % 3 + 1;	// 0~2 + 1 : 1~3
}

int main_m35(void) {
	int user;
	int com;
	int win = 0;	// ����� �¸��� Ƚ��
	int same = 0;	// ���º� Ƚ��

	srand(time(NULL));	// seed ����
	while (1) {
		// ����� �Է�
		user = inputUserSelection();	// ����ڰ� �Է�
		com = generateComSelection();	// ��ǻ�Ͱ� ���� ���� ���� ����
		// ���и� �Ǵ�
		if (com == 1) {	// ��ǻ�Ͱ� ����
			if (user == 1) {	// ���� -> ���
				same++;
				printResult(user, com, 0);
			}
			else if (user == 2) {	// ���� -> �� ��
				printResult(user, com, 2);	// ����
				break;	// �ݺ����� ��� (����)
			}
			else		// ����� ��
			{
				win++;
				printResult(user, com, 1);
			}
		}
		else if (com == 2) {	// ��ǻ�Ͱ� ����
			if (user == 1) {	// ���� -> �� ��
				win++;
				printResult(user, com, 1);
			}
			else if (user == 2) {	// ���� -> �� ��
				same++;
				printResult(user, com, 0);
			}
			else		// �� ��
			{
				printResult(user, com, 2);	// ����
				break;	// �ݺ����� ��� (����)
			}
		}
		else {	// ��ǻ�� ��
			if (user == 1) {	// ���� -> �� ��
				printResult(user, com, 2);	// ����
				break;	// �ݺ����� ��� (����)
			}
			else if (user == 2) {	// ���� -> ����� ��
				win++;
				printResult(user, com, 1);
			}
			else		// ���
			{
				same++;
				printResult(user, com, 0);
			}
		}
	}
	// ������ ��� ���
	printf("������ ��� : %d�� %d�� 1��\n", win, same);
	return 0;
}
*/