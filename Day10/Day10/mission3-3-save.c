/*
���� 5 : ���� ���� �� ����
���� 1, ���� 2, �� : 3
- ������� ������ �Է� �޴´�.
- ��ǻ�Ͱ� ����
- ������ �Ǵ�
- ���� ����� ���
- �ݺ��� ���� ����
*/

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

int decisionWin(int user, int com) {	// 
	if (user == com)	// ���
		return 0;		// ���
	if (com - 1 == 0)
		com += 3;	// 4
	if (com - 1 == user)
		return 1;		// ����� ��
	else
		return 2;		// ����� ��
}

int main_m35g(void) {
	int user;
	int com;
	int win = 0;	// ����� �¸��� Ƚ��
	int same = 0;	// ���º� Ƚ��

	srand(time(NULL));	// seed ����
	int game;
	while (1) {
		// ����� �Է�
		user = inputUserSelection();	// ����ڰ� �Է�
		com = generateComSelection();	// ��ǻ�Ͱ� ���� ���� ���� ����
		game = decisionWin(user, com);
		printResult(user, com, game);
		if (game == 0) {	// 0:���, 1:�̱�, 2:��
			same++;	// ���
		}
		else if (game == 1) {	// �̱�
			win++;
		}
		else {	// ��
			break;	// �ݺ����� ��� (����)
		}
	}
	// ������ ��� ���
	printf("������ ��� : %d�� %d�� 1��\n", win, same);
	return 0;
}