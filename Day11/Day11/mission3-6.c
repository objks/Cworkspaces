/*
���� ���߱� ����
1. �� ���� ���� �ٸ� ���ڸ� �߻�(0~9)
  + ���� �߻� -> �ߺ� ���� �˻�
  + �迭[3]
2. ����ڷκ��� ���� 3���� �Է� �޴´�.
3. strike�� ball�� �Ǻ�
  + com�� ������ �ִ� ������ : �迭�� ����Ǿ� �ְ�
  + ����ڰ� �Է��� �����͸� �迭�� ���� -> �ݺ��� ����
  + strike�� ball�� ���� �����ϴ� ����
  + 3strike�� ������ ����
4. �� ������ ���߾����� Ƚ���� ��� : count ����
  + �ݺ� ���� : 2, 3, 4 ����
*/

#include	<stdio.h>
#include	<stdlib.h>	// ���� �߻� : srand(), rand()
#include	<time.h>	// ���� �ð��� ���´�. : time()

void printComputerSelection(int com[]) {
	for (int i = 0; i < 3; i++)
		printf("%d ", com[i]);
	printf("\n");
}

int main_m36(void) {
	int com[3];		// ��ǻ�Ͱ� �߻���Ų ���� �����ϴ� �迭
	int user[3];	// ����ڰ� �Է��� ���ڸ� �����ϴ� �迭
	int strike;
	int ball;
	int count = 1;
	int value;		// ��ǻ�Ͱ� �߻��� ������ �����ϴ� ���� (�ӽ÷� ����)
	int i, j;		// �ݺ����� �����ϴ� �ε���

	printf("Start Game!\n");
	srand(time(NULL));	// ���� �߻��� ���� seed ���� ����(����ð�����)
	// ��ǻ�Ͱ� �߻���Ű�� ���� ����
	for (i = 0; i < 3; i++) {	// 3���� ���� �߻�
		do {	// �ݺ����� �ʿ�
			value = rand() % 10;	// 0~9 ���� �߻�
			// value�� ������ �߻���Ų ���� �ִ��� �˻� : com[i]
			for (j = 0; j < i; j++) {
				if (value == com[j])	// ������ �߻���Ų ���� ���� ��
					break;	
			}
			// j < i : ���� ���� ����, j==i : ���ο� ��
		} while (j < i);	// ���� ���� �����ϸ� ���ο� ���� �߻���Ű���� �ݺ�
		com[i] = value;
	}
	printComputerSelection(com);
	do {
		// strike�� ball�� �ʱ�ȭ
		strike = 0;
		ball = 0;
		// ����ڷκ��� ���ڸ� �Է� �޴´�.
		printf("�� ���� ���� ����: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		for (i = 0; i < 3; i++) {	// ��ǻ���� ���ڸ� �ݺ�
			for (j = 0; j < 3; j++) {	// ������� ���ڸ� �ݺ�
				if (com[i] == user[j]) {	// strike �Ǵ� ball
					if (i == j)	// strike
						strike++;
					else		// ball
						ball++;
				}
			}
		}
		// strike�� ball�� �����
		printf("%d��° ���� ���: %dstrike %dball!!\n", count, strike, ball);
		count++;	// �ʱ�ġ�� 1���� ���������Ƿ� printf���� �ڿ� �ִ´�.
	} while (strike != 3);	// 3 strike : ����ڰ� ��ǻ���� ���� ���� ���
	printf("Game Over!\n");

	return 0;
}