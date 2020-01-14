/*
도전 5 : 가위 바위 보 게임
바위 1, 가위 2, 보 : 3
- 사용자의 선택을 입력 받는다.
- 컴퓨터가 선택
- 승패을 판단
- 승패 결과를 출력
- 반복에 대한 결정
*/

/*
#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>

char* selection[4] = { "", "바위 선택", "가위 선택", "보 선택" };	// 바위(1), 가위(2), 보(3)
char* result[3] = { "비겼습니다.", "이겼습니다.", "당신이 졌습니다." };	// 0:비김, 1:이김, 2:패

void printResult(int user, int com, int r) {
	printf("당신은 %s, 컴퓨터는 %s, %s\n", selection[user], selection[com], result[r]);
}

int inputUserSelection() {
	int value;

	printf("바위는 1, 가위는 2, 보는 3: ");
	scanf("%d", &value);
	return value;
}

int generateComSelection() {
	return rand() % 3 + 1;	// 0~2 + 1 : 1~3
}

int main_m35(void) {
	int user;
	int com;
	int win = 0;	// 사람이 승리한 횟수
	int same = 0;	// 무승부 횟수

	srand(time(NULL));	// seed 설정
	while (1) {
		// 사용자 입력
		user = inputUserSelection();	// 사용자가 입력
		com = generateComSelection();	// 컴퓨터가 가위 바위 보를 선택
		// 승패를 판단
		if (com == 1) {	// 컴퓨터가 바위
			if (user == 1) {	// 바위 -> 비김
				same++;
				printResult(user, com, 0);
			}
			else if (user == 2) {	// 가위 -> 컴 승
				printResult(user, com, 2);	// 종료
				break;	// 반복문을 벗어남 (종료)
			}
			else		// 사용자 승
			{
				win++;
				printResult(user, com, 1);
			}
		}
		else if (com == 2) {	// 컴퓨터가 가위
			if (user == 1) {	// 바위 -> 사 승
				win++;
				printResult(user, com, 1);
			}
			else if (user == 2) {	// 가위 -> 컴 승
				same++;
				printResult(user, com, 0);
			}
			else		// 컴 승
			{
				printResult(user, com, 2);	// 종료
				break;	// 반복문을 벗어남 (종료)
			}
		}
		else {	// 컴퓨터 보
			if (user == 1) {	// 바위 -> 컴 승
				printResult(user, com, 2);	// 종료
				break;	// 반복문을 벗어남 (종료)
			}
			else if (user == 2) {	// 가위 -> 사용자 승
				win++;
				printResult(user, com, 1);
			}
			else		// 비김
			{
				same++;
				printResult(user, com, 0);
			}
		}
	}
	// 게임의 결과 출력
	printf("게임의 결과 : %d승 %d무 1패\n", win, same);
	return 0;
}
*/